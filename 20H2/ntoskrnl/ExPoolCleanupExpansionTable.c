/*
 * XREFs of ExPoolCleanupExpansionTable @ 0x140389038
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x14025E1A8 (ExpInsertPoolTrackerExpansion.c)
 *     MiCheckSessionPoolAllocations @ 0x140774540 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140237EEC (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x1402380B4 (ExGetHeapFromVA.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140314B3C (ExpRemovePoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1405A6294 (EtwTracePool.c)
 */

__int64 __fastcall ExPoolCleanupExpansionTable(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int128 *HeapFromVA; // rax
  __int64 v8; // rax
  int v9; // r10d
  __int64 v10; // r8
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
      v4 = 56LL * (unsigned int)v10;
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
    v10 = v9 & (unsigned int)(v10 + 1);
  }
  while ( (_DWORD)v10 != v12 );
  ExpRemovePoolTrackerExpansion(1819242320, a2, 0);
LABEL_5:
  HeapFromVA = (__int128 *)ExGetHeapFromVA(BugCheckParameter3, v11, v10);
  return RtlpHpFreeHeap(HeapFromVA, BugCheckParameter3, 0, 0LL);
}
