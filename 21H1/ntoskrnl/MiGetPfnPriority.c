/*
 * XREFs of MiGetPfnPriority @ 0x140217F60
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiTrimThisWsle @ 0x14029FEB0 (MiTrimThisWsle.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiUpdatePfnPriority @ 0x1402A91E0 (MiUpdatePfnPriority.c)
 *     MiUnlinkStandbyPfn @ 0x140300770 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x140318BB8 (MiUpdatePageAttributeStamp.c)
 *     MiQueryPfn @ 0x14031A158 (MiQueryPfn.c)
 *     MiUpdatePrefetchPriority @ 0x1403354A0 (MiUpdatePrefetchPriority.c)
 *     MiReplaceNumaStandbyPage @ 0x1403477E0 (MiReplaceNumaStandbyPage.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiStoreCheckCandidatePage @ 0x14034F880 (MiStoreCheckCandidatePage.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MmSetPfnListInfo @ 0x14036FCF8 (MmSetPfnListInfo.c)
 *     MiResetAccessBitPte @ 0x1403982D0 (MiResetAccessBitPte.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399524 (MiUnlinkNumaStandbyPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x140535F60 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x140536C08 (MiUpdateOldPteWorker.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
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
