/*
 * XREFs of MiGetPfnPriority @ 0x1402185D0
 * Callers:
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiStoreCheckCandidatePage @ 0x14026865C (MiStoreCheckCandidatePage.c)
 *     MiReplaceNumaStandbyPage @ 0x14026B4EC (MiReplaceNumaStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiUpdatePrefetchPriority @ 0x14026E760 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiUpdatePfnPriority @ 0x140270DA4 (MiUpdatePfnPriority.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x1402B07E0 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x1402C81D0 (MiUpdatePageAttributeStamp.c)
 *     MiQueryPfn @ 0x1402C96A8 (MiQueryPfn.c)
 *     MiTrimThisWsle @ 0x140308DA0 (MiTrimThisWsle.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MmSetPfnListInfo @ 0x140372BE4 (MmSetPfnListInfo.c)
 *     MiResetAccessBitPte @ 0x14039B7F0 (MiResetAccessBitPte.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CA44 (MiUnlinkNumaStandbyPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405366CC (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x14053BA80 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14053C728 (MiUpdateOldPteWorker.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
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
