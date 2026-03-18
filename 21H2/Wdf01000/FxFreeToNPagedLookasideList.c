/*
 * XREFs of FxFreeToNPagedLookasideList @ 0x1C0038068
 * Callers:
 *     ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0038A50 (-Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C0038A80 (-ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C0057EB0 (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 *     ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C006A9C0 (-Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C006A9F0 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
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
