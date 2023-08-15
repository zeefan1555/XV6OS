// sleep.c
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h" // 必须以这个顺序 include，由于三个头文件有依赖关系

int main(int argc, char* argv[])
{
    if(argc != 2){
        printf("Error Example: sleep 2");
        exit(-1);
    }
    //argv = {"sleep", "3"};
    int num_of_ticks = atoi(argv[1]);
    if(sleep(num_of_ticks)<0)
    {
        printf("Canot sleep");
        exit(-1);
    }

    exit(0);

}