/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x1402272A0
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140226AB0 (MiActivePageClaimCandidate.c)
 *     MiUnlinkStandbyBatch @ 0x140226F90 (MiUnlinkStandbyBatch.c)
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E0BD8 (MiFinalizeImageHeaderPage.c)
 *     MiFreeSmallPageFromMdl @ 0x1403176EC (MiFreeSmallPageFromMdl.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiTradeTransitionPage @ 0x14031D0D8 (MiTradeTransitionPage.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 *     MiFreeSlabEntries @ 0x140346D00 (MiFreeSlabEntries.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BA2F0 (MiFreeLargeInitializationCodePages.c)
 *     MiCheckContiguityTradeEligible @ 0x1405416F4 (MiCheckContiguityTradeEligible.c)
 *     MiCompleteSecureProcessFault @ 0x140542CB4 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x14054DE98 (MiIsFreeSlabPage.c)
 *     MmFreeSecureKernelPages @ 0x14054E264 (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MmFreeIndependentPages @ 0x1407515D0 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140A47F38 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5D67C (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_140C51E5E
      && _bittest64((const signed __int64 *)qword_140C52388, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
