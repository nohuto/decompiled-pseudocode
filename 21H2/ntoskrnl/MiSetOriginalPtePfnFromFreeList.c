/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x140334C80
 * Callers:
 *     MiSlistGetFreePage @ 0x140215DB0 (MiSlistGetFreePage.c)
 *     MiReplacePageTablePage @ 0x140224260 (MiReplacePageTablePage.c)
 *     MiSwapStackPageNoDpc @ 0x140245010 (MiSwapStackPageNoDpc.c)
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402944B4 (MiCreateUltraThreadContextHelper.c)
 *     MiConvertContiguousPages @ 0x140294F14 (MiConvertContiguousPages.c)
 *     MiFinalizeImageHeaderPage @ 0x140298F3C (MiFinalizeImageHeaderPage.c)
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140323C80 (MiUnlinkNodeLargePageHelper.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiReInitializeFreeSlabPfn @ 0x14037553C (MiReInitializeFreeSlabPfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BD3F0 (MiFreeLargeInitializationCodePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1405483C4 (MiCompleteSecureProcessFault.c)
 *     MiReuseStandbyPage @ 0x1405515A0 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
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
