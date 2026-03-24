/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x140302EF0
 * Callers:
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MiTradeTransitionPage @ 0x14026B6E8 (MiTradeTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 *     MiFreeSlabEntries @ 0x1402BA910 (MiFreeSlabEntries.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E7BEC (MiFinalizeImageHeaderPage.c)
 *     MiFreeSmallPageFromMdl @ 0x1402FFEA4 (MiFreeSmallPageFromMdl.c)
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140302700 (MiActivePageClaimCandidate.c)
 *     MiUnlinkStandbyBatch @ 0x140302BE0 (MiUnlinkStandbyBatch.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BD280 (MiFreeLargeInitializationCodePages.c)
 *     MiCheckContiguityTradeEligible @ 0x140546BC4 (MiCheckContiguityTradeEligible.c)
 *     MiCompleteSecureProcessFault @ 0x140548184 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x140553338 (MiIsFreeSlabPage.c)
 *     MmFreeSecureKernelPages @ 0x140553704 (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 *     MmFreeIndependentPages @ 0x1407645D0 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A65FFC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_140C5205E
      && _bittest64((const signed __int64 *)qword_140C52588, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
