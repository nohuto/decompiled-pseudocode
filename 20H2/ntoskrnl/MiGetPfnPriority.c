/*
 * XREFs of MiGetPfnPriority @ 0x140279DB0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiTrimThisWsle @ 0x1402CF8C0 (MiTrimThisWsle.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     MiUpdatePrefetchPriority @ 0x140301150 (MiUpdatePrefetchPriority.c)
 *     MiUnlinkStandbyPfn @ 0x14030FD50 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x140326FF8 (MiUpdatePageAttributeStamp.c)
 *     MiQueryPfn @ 0x140328448 (MiQueryPfn.c)
 *     MiStoreCheckCandidatePage @ 0x1403425E4 (MiStoreCheckCandidatePage.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiReplaceNumaStandbyPage @ 0x14035149C (MiReplaceNumaStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MmSetPfnListInfo @ 0x140372878 (MmSetPfnListInfo.c)
 *     MiResetAccessBitPte @ 0x14039AF20 (MiResetAccessBitPte.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039C174 (MiUnlinkNumaStandbyPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x140539F80 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14053AC28 (MiUpdateOldPteWorker.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
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
