/*
 * XREFs of ExpPartitionCreatePoolInternal @ 0x1407AD110
 * Callers:
 *     ExpPartitionCreatePool @ 0x1407ACDE8 (ExpPartitionCreatePool.c)
 *     ExpPartitionInitialize @ 0x1407ACF0C (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolDelayed @ 0x1409514A8 (ExpPartitionCreatePoolDelayed.c)
 * Callees:
 *     ExpWorkQueueInitializeWithMinimumThreads @ 0x1407AD1DC (ExpWorkQueueInitializeWithMinimumThreads.c)
 *     ExpWorkQueueDestroy @ 0x140951728 (ExpWorkQueueDestroy.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpPartitionCreatePoolInternal(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  PVOID PoolWithTag; // rbx
  int v10; // edi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2E0uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v10 = ExpWorkQueueInitializeWithMinimumThreads(
            (_DWORD)PoolWithTag,
            a2,
            a3,
            a1,
            a4,
            a5,
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned __int16 *)(a4 + 146)) + 276LL);
    if ( v10 >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(a4 + 146)) + 8LL * a5) = PoolWithTag;
      PoolWithTag = 0LL;
      v10 = 0;
    }
    if ( PoolWithTag )
    {
      ExpWorkQueueDestroy(PoolWithTag);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
