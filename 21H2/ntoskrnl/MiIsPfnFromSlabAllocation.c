/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x14030DC40
 * Callers:
 *     MiLockStealSystemVm @ 0x1402150E4 (MiLockStealSystemVm.c)
 *     MiFreeSlabEntries @ 0x140238B20 (MiFreeSlabEntries.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x140298F3C (MiFinalizeImageHeaderPage.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiFreeSmallPageFromMdl @ 0x14030ABF4 (MiFreeSmallPageFromMdl.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x14030D450 (MiActivePageClaimCandidate.c)
 *     MiUnlinkStandbyBatch @ 0x14030D930 (MiUnlinkStandbyBatch.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BD3F0 (MiFreeLargeInitializationCodePages.c)
 *     MiCheckContiguityTradeEligible @ 0x140546E04 (MiCheckContiguityTradeEligible.c)
 *     MiCompleteSecureProcessFault @ 0x1405483C4 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x140553578 (MiIsFreeSlabPage.c)
 *     MmFreeSecureKernelPages @ 0x140553944 (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140A50B14 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A66FFC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_140C5209E
      && _bittest64((const signed __int64 *)qword_140C525C8, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
