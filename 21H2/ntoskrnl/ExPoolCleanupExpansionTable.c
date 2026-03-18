/*
 * XREFs of ExPoolCleanupExpansionTable @ 0x140216A4C
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     MiCheckSessionPoolAllocations @ 0x1406939A4 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     ExpPoolTrackerReturnLimit @ 0x140216928 (ExpPoolTrackerReturnLimit.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140221790 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 */

__int64 __fastcall ExPoolCleanupExpansionTable(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v4; // rax
  int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r11d
  __int64 v9; // r8
  __int64 HeapFromVA; // rax
  int v12; // r9d
  __int64 v13; // r9

  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v4 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v4 = EtwTracePool(3618, 512, 1819242320, BugCheckParameter3, a2);
  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  v5 = PoolTrackTableMask;
  v6 = PoolTrackTableMask & 0x40DEDA5;
  v7 = (__int64)*(&ExPoolTagTables + v4);
  v8 = PoolTrackTableMask & 0x40DEDA5;
  do
  {
    while ( 1 )
    {
      v9 = v7 + 80 * v6;
      if ( *(_DWORD *)v9 == 1819242320 )
      {
        ExpPoolTrackerReturnLimit(1, a2, v9);
        goto LABEL_8;
      }
      if ( *(_DWORD *)v9 )
        break;
      v12 = *(_DWORD *)(PoolTrackTable + 80 * v6);
      if ( !v12 )
        break;
      *(_DWORD *)v9 = v12;
      v13 = *(_QWORD *)(PoolTrackTable + 80 * v6 + 72);
      if ( v13 )
        *(_QWORD *)(v9 + 72) = v13;
    }
    v6 = v5 & (unsigned int)(v6 + 1);
  }
  while ( (_DWORD)v6 != v8 );
  ExpRemovePoolTrackerExpansion(1819242320LL, a2, 512LL);
LABEL_8:
  HeapFromVA = ExGetHeapFromVA(BugCheckParameter3);
  return RtlpHpFreeHeap(HeapFromVA, BugCheckParameter3, 0LL, 0LL, 0LL);
}
