/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x14034D190
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiFreeSlabEntries @ 0x1403181C0 (MiFreeSlabEntries.c)
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiFinalizeImageHeaderPage @ 0x140332CF0 (MiFinalizeImageHeaderPage.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x14034C9A0 (MiActivePageClaimCandidate.c)
 *     MiUnlinkStandbyBatch @ 0x14034CE80 (MiUnlinkStandbyBatch.c)
 *     MiFreeSmallPageFromMdl @ 0x14034E0A4 (MiFreeSmallPageFromMdl.c)
 *     MiTradeTransitionPage @ 0x140350BC0 (MiTradeTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BC770 (MiFreeLargeInitializationCodePages.c)
 *     MiCheckContiguityTradeEligible @ 0x1405450C4 (MiCheckContiguityTradeEligible.c)
 *     MiCompleteSecureProcessFault @ 0x140546684 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x140551868 (MiIsFreeSlabPage.c)
 *     MmFreeSecureKernelPages @ 0x140551C34 (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MmFreeIndependentPages @ 0x1407601B0 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140A4E1C8 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A649DC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_140C51EDE
      && _bittest64((const signed __int64 *)qword_140C52408, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
