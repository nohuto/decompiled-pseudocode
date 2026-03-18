/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x1402802F0
 * Callers:
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x14027FB00 (MiActivePageClaimCandidate.c)
 *     MiUnlinkStandbyBatch @ 0x14027FFE0 (MiUnlinkStandbyBatch.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiLockStealSystemVm @ 0x1402E96FC (MiLockStealSystemVm.c)
 *     MiFreeSlabEntries @ 0x140308F00 (MiFreeSlabEntries.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x140325CD8 (MiFinalizeImageHeaderPage.c)
 *     MiFreeSmallPageFromMdl @ 0x140346A2C (MiFreeSmallPageFromMdl.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiTradeTransitionPage @ 0x14034C418 (MiTradeTransitionPage.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403B8F80 (MiFreeLargeInitializationCodePages.c)
 *     MiCheckContiguityTradeEligible @ 0x1405410A4 (MiCheckContiguityTradeEligible.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x14054D848 (MiIsFreeSlabPage.c)
 *     MmFreeSecureKernelPages @ 0x14054DC14 (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MmFreeIndependentPages @ 0x14074CF40 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140A426D8 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5E5DC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_140C51F5E
      && _bittest64((const signed __int64 *)qword_140C52488, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
