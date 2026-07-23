/*
 * XREFs of MiGetPfnPriority @ 0x1402BCED0
 * Callers:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x14022EB40 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x140246A30 (MiUpdatePageAttributeStamp.c)
 *     MiQueryPfn @ 0x140247F88 (MiQueryPfn.c)
 *     MiStoreCheckCandidatePage @ 0x1402565FC (MiStoreCheckCandidatePage.c)
 *     MiReplaceNumaStandbyPage @ 0x14025948C (MiReplaceNumaStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiUpdatePrefetchPriority @ 0x14025C700 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiTrimThisWsle @ 0x140313AF0 (MiTrimThisWsle.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MmSetPfnListInfo @ 0x140372734 (MmSetPfnListInfo.c)
 *     MiResetAccessBitPte @ 0x14039B940 (MiResetAccessBitPte.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CB94 (MiUnlinkNumaStandbyPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053690C (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x14053BCC0 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14053C968 (MiUpdateOldPteWorker.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
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
