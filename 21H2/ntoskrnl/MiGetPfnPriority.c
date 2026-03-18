/*
 * XREFs of MiGetPfnPriority @ 0x140273234
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiUnlinkStandbyPfn @ 0x14023608C (MiUnlinkStandbyPfn.c)
 *     MiUpdatePrefetchPriority @ 0x1402464E0 (MiUpdatePrefetchPriority.c)
 *     MiUpdatePageAttributeStamp @ 0x14024DD20 (MiUpdatePageAttributeStamp.c)
 *     MiQueryPfn @ 0x14025191C (MiQueryPfn.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1402E851C (MiReplaceNumaStandbyPage.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     MiSharedInsertPfnChainInList @ 0x140338DB0 (MiSharedInsertPfnChainInList.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiTrimThisWsle @ 0x1403735A0 (MiTrimThisWsle.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140374BBC (MiDeprioritizeVirtualAddresses.c)
 *     MiStoreCheckCandidatePage @ 0x14037D5E8 (MiStoreCheckCandidatePage.c)
 *     MiResetAccessBitPteWorker @ 0x1403C49DC (MiResetAccessBitPteWorker.c)
 *     MmSetPfnListInfo @ 0x1403C4E98 (MmSetPfnListInfo.c)
 *     MiUpdateOldPteWorker @ 0x14045BF06 (MiUpdateOldPteWorker.c)
 *     MiDuplicateCloneLeaf @ 0x1405BA864 (MiDuplicateCloneLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPriority(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 5LL;
  else
    return *(_BYTE *)(a1 + 35) & 7;
}
