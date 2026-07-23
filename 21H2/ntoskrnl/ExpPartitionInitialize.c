/*
 * XREFs of ExpPartitionInitialize @ 0x1407C28CC
 * Callers:
 *     PspAllocatePartition @ 0x1407CC424 (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExpPartitionCreatePoolInternal @ 0x1407C2AD0 (ExpPartitionCreatePoolInternal.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2CB8 (ExpWorkQueueManagerInitialize.c)
 *     ExpPartitionDestroy @ 0x140956044 (ExpPartitionDestroy.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpPartitionInitialize(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi
  unsigned int v4; // ebx
  PVOID v5; // rax
  unsigned int v6; // ebx
  PVOID v7; // rax
  unsigned __int16 v8; // si
  __int64 v9; // r14
  __int64 v10; // rcx
  int PoolInternal; // ebx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C577845u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    *PoolWithTag = a1;
    v4 = 8 * (unsigned __int16)KeNumberNodes;
    v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x6C577845u);
    v3[1] = v5;
    if ( v5 )
    {
      memset(v5, 0, v4);
      v6 = 8 * (unsigned __int16)KeNumberNodes;
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6C577845u);
      v3[2] = v7;
      if ( v7 )
      {
        memset(v7, 0, v6);
        v8 = 0;
        if ( !KeNumberNodes )
        {
LABEL_12:
          *((_DWORD *)v3 + 6) = 252;
          result = 0LL;
          *(_QWORD *)(a1 + 16) = v3;
          return result;
        }
        while ( 1 )
        {
          v9 = 0LL;
          if ( (_UNKNOWN *)KeNodeBlock[v8] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * v8) )
            v9 = KeNodeBlock[v8];
          *(_QWORD *)(v3[2] + 8LL * v8) = ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x6C577845u);
          v10 = *(_QWORD *)(v3[2] + 8LL * v8);
          if ( !v10 )
            break;
          ExpWorkQueueManagerInitialize(v10, v3, v9);
          *(_QWORD *)(v3[1] + 8LL * v8) = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6C577845u);
          if ( !*(_QWORD *)(v3[1] + 8LL * v8) )
            break;
          memset(*(void **)(v3[1] + 8LL * v8), 0, 0x40uLL);
          PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v9, 0);
          if ( PoolInternal < 0 )
            goto LABEL_13;
          PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v9, 1);
          if ( PoolInternal < 0 )
            goto LABEL_13;
          if ( ++v8 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_12;
        }
      }
    }
    PoolInternal = -1073741801;
LABEL_13:
    ExpPartitionDestroy(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)PoolInternal;
}
