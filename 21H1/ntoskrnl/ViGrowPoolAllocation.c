/*
 * XREFs of ViGrowPoolAllocation @ 0x1409D2414
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14024FDE0 (ExAllocatePoolWithTagPriority.c)
 *     KeZeroSinglePage @ 0x1403F9D30 (KeZeroSinglePage.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall ViGrowPoolAllocation(_SLIST_HEADER *a1)
{
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  _SLIST_HEADER *v3; // rdi
  _SLIST_ENTRY *v4; // rbx
  __int64 v6; // rsi

  PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                          (POOL_TYPE)640,
                                          0x1000uLL,
                                          0x70706556u,
                                          HighPoolPriority);
  v3 = a1 + 5;
  v4 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return RtlpInterlockedPopEntrySList(a1 + 5);
  KeZeroSinglePage(PoolWithTagPriority);
  *((_QWORD *)&v4->Next + 1) = a1;
  v4[1].Next = (_SLIST_ENTRY *)556929861;
  RtlpInterlockedPushEntrySList(a1 + 4, v4);
  v6 = 126LL;
  do
  {
    v4 += 2;
    v4[1].Next = (_SLIST_ENTRY *)1;
    RtlpInterlockedPushEntrySList(v3, v4);
    --v6;
  }
  while ( v6 );
  v4[3].Next = (_SLIST_ENTRY *)1;
  return v4 + 2;
}
