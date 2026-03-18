/*
 * XREFs of ExpPartitionCreatePoolInternal @ 0x1407BE1B0
 * Callers:
 *     ExpPartitionCreatePool @ 0x1407BDE88 (ExpPartitionCreatePool.c)
 *     ExpPartitionInitialize @ 0x1407BDFAC (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140958608 (ExpPartitionCreatePoolDelayed.c)
 * Callees:
 *     ExpWorkQueueInitializeWithMinimumThreads @ 0x1407BE27C (ExpWorkQueueInitializeWithMinimumThreads.c)
 *     ExpWorkQueueDestroy @ 0x140958888 (ExpWorkQueueDestroy.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
