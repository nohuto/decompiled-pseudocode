/*
 * XREFs of ExpPartitionCreatePoolInternal @ 0x1408520BC
 * Callers:
 *     ExpPartitionCreatePool @ 0x140851DAC (ExpPartitionCreatePool.c)
 *     ExpPartitionInitialize @ 0x140851EBC (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140A01EE4 (ExpPartitionCreatePoolDelayed.c)
 * Callees:
 *     ExpCreateWorkerThread @ 0x1406DCB98 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueInitialize @ 0x1408521A4 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueDestroy @ 0x140A02158 (ExpWorkQueueDestroy.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpPartitionCreatePoolInternal(__int64 a1, int a2, int a3, unsigned __int16 *a4, int a5)
{
  _DWORD *PoolWithTag; // rbx
  __int64 v10; // r15
  __int64 v11; // r8
  int v12; // r9d
  int v13; // esi
  int WorkerThread; // edi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2E0uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *a4);
    ExpWorkQueueInitialize((_DWORD)PoolWithTag, a2, a3, a1, (__int64)a4, a5);
    v13 = 0;
    if ( 2 * PoolWithTag[179] > 0 )
    {
      while ( 1 )
      {
        WorkerThread = ExpCreateWorkerThread(PoolWithTag, v10 + 276, v11, v12);
        if ( WorkerThread < 0 )
          break;
        if ( ++v13 >= (2 * PoolWithTag[179]) >> 1 )
          goto LABEL_3;
      }
      ExpWorkQueueDestroy(PoolWithTag);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
LABEL_3:
      WorkerThread = 0;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *a4) + 8LL * a5) = PoolWithTag;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WorkerThread;
}
