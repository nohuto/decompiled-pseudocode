/*
 * XREFs of FxFreeToNPagedLookasideList @ 0x1C0035918
 * Callers:
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C0034F70 (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 *     ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0054930 (-Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C0054960 (-ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 *     ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0054F50 (-Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C0054F80 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxFreeToNPagedLookasideList(_PAGED_LOOKASIDE_LIST *Lookaside, _SLIST_ENTRY *Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(_SLIST_ENTRY *))Lookaside->L.FreeEx)(Entry);
  }
}
