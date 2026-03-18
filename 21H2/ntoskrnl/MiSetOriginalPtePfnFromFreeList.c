/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0
 * Callers:
 *     MiGetPageSlist @ 0x140220360 (MiGetPageSlist.c)
 *     MiSlistGetFreePage @ 0x14022FFB8 (MiSlistGetFreePage.c)
 *     MiReInitializeFreeSlabPfn @ 0x14023C030 (MiReInitializeFreeSlabPfn.c)
 *     MiPreInitializeSystemImagePage @ 0x140248208 (MiPreInitializeSystemImagePage.c)
 *     MiSwapStackPageNoDpc @ 0x14024A0FC (MiSwapStackPageNoDpc.c)
 *     MiConvertContiguousPages @ 0x140265BE4 (MiConvertContiguousPages.c)
 *     MiChangePageAttributeContiguous @ 0x14026873C (MiChangePageAttributeContiguous.c)
 *     MiGetUltraPage @ 0x14026A6C4 (MiGetUltraPage.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402CB2D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiTradeTransitionPage @ 0x1402E8240 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiFinalizeImageHeaderPage @ 0x1402EB1A0 (MiFinalizeImageHeaderPage.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiPreparePfnDatabasePageForFree @ 0x1403C9394 (MiPreparePfnDatabasePageForFree.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403CB284 (MiFreeLargeInitializationCodePages.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MiReuseStandbyPage @ 0x1405B3FA4 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1405C0828 (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiSetOriginalPtePfnFromFreeList(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = MiSwizzleInvalidPte(128LL);
    *v2 = result;
  }
  return result;
}
