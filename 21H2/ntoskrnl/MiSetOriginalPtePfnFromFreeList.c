/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x140329F30
 * Callers:
 *     MiCoalesceFreePages @ 0x140235CA0 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiTradeTransitionPage @ 0x14026B6E8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiSlistGetFreePage @ 0x1402993D0 (MiSlistGetFreePage.c)
 *     MiSwapStackPageNoDpc @ 0x1402C6830 (MiSwapStackPageNoDpc.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402E3164 (MiCreateUltraThreadContextHelper.c)
 *     MiConvertContiguousPages @ 0x1402E3BC4 (MiConvertContiguousPages.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E7BEC (MiFinalizeImageHeaderPage.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140318F30 (MiUnlinkNodeLargePageHelper.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiReplacePageTablePage @ 0x140363DF0 (MiReplacePageTablePage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403759EC (MiReInitializeFreeSlabPfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BD280 (MiFreeLargeInitializationCodePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140548184 (MiCompleteSecureProcessFault.c)
 *     MiReuseStandbyPage @ 0x140551360 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551F74 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
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
