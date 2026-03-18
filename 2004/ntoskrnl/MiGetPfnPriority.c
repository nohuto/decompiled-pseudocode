/*
 * XREFs of MiGetPfnPriority @ 0x1402AAA70
 * Callers:
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiTrimThisWsle @ 0x140246E80 (MiTrimThisWsle.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 *     MiStoreCheckCandidatePage @ 0x1402D503C (MiStoreCheckCandidatePage.c)
 *     MiUpdatePrefetchPriority @ 0x1402F0360 (MiUpdatePrefetchPriority.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     MiReplaceNumaStandbyPage @ 0x1403184A0 (MiReplaceNumaStandbyPage.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiUnlinkStandbyPfn @ 0x14033D070 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x1403567A8 (MiUpdatePageAttributeStamp.c)
 *     MiQueryPfn @ 0x140357C78 (MiQueryPfn.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MmSetPfnListInfo @ 0x140370928 (MmSetPfnListInfo.c)
 *     MiResetAccessBitPte @ 0x140398A60 (MiResetAccessBitPte.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399CB4 (MiUnlinkNumaStandbyPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405311FC (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x1405365B0 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x140537258 (MiUpdateOldPteWorker.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
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
