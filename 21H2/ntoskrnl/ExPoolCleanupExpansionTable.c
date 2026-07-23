/*
 * XREFs of ExPoolCleanupExpansionTable @ 0x1403898E0
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     MiCheckSessionPoolAllocations @ 0x1407786B0 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     ExpRemovePoolTrackerExpansion @ 0x1402361C0 (ExpRemovePoolTrackerExpansion.c)
 *     ExGetHeapFromVA @ 0x1403059CC (ExGetHeapFromVA.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 */

__int64 __fastcall ExPoolCleanupExpansionTable(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 HeapFromVA; // rax
  __int64 v8; // rax
  int v9; // r10d
  unsigned int v10; // r8d
  __int64 v11; // rdx
  int v12; // r11d
  int v13; // r9d

  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v8 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v8 = EtwTracePool(3618, 512, 1819242320, BugCheckParameter3, a2);
  LODWORD(v8) = KeGetPcr()->Prcb.Number;
  v9 = PoolTrackTableMask;
  v10 = PoolTrackTableMask & 0x40DEDA5;
  v11 = (__int64)*(&ExPoolTagTables + v8);
  v12 = PoolTrackTableMask & 0x40DEDA5;
  do
  {
    while ( 1 )
    {
      v4 = 56LL * v10;
      v5 = *(_DWORD *)(v4 + v11);
      if ( v5 == 1819242320 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + v11 + 24));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + v11 + 8), -a2);
        goto LABEL_5;
      }
      if ( v5 )
        break;
      v13 = *(_DWORD *)(v4 + PoolTrackTable);
      if ( !v13 )
        break;
      *(_DWORD *)(v4 + v11) = v13;
    }
    v10 = v9 & (v10 + 1);
  }
  while ( v10 != v12 );
  ExpRemovePoolTrackerExpansion(1819242320, a2, 0);
LABEL_5:
  HeapFromVA = ExGetHeapFromVA(BugCheckParameter3);
  return RtlpHpFreeHeap(HeapFromVA, BugCheckParameter3, 0);
}
