/*
 * XREFs of MiDecrementShareCount @ 0x140290770
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiFreeContiguousPages @ 0x140261B18 (MiFreeContiguousPages.c)
 *     MiDeleteTopLevelPage @ 0x1402632C8 (MiDeleteTopLevelPage.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MmOutSwapProcess @ 0x1402DD934 (MmOutSwapProcess.c)
 *     MiTrimSystemImagePages @ 0x14030D320 (MiTrimSystemImagePages.c)
 *     MiAddSystemPageTableToList @ 0x140314520 (MiAddSystemPageTableToList.c)
 *     MiFreeUnmappedPageTables @ 0x140316B18 (MiFreeUnmappedPageTables.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346EE4 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1405287D0 (MiPurgeSubsection.c)
 *     MiClearDriverHotPatchPtes @ 0x14053C928 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053D69C (MiUnmapPatchTable.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x14053EBA0 (MiDecrementProtoShareCounts.c)
 *     MiInitializeProtoPfn @ 0x1405534C0 (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x140558BD0 (MiFinishLastForkPageTable.c)
 *     MiFreeRegistryPageRange @ 0x140A4B768 (MiFreeRegistryPageRange.c)
 *     MiTradeBootImagePage @ 0x140A4E514 (MiTradeBootImagePage.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCount(__int64 a1)
{
  char v1; // dl
  __int64 v2; // r8

  v1 = *(_BYTE *)(a1 + 34);
  v2 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v1 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a1 + 0x58000000000LL) / 48, v1 & 7, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(a1 + 24) ^= ((v2 - 1) ^ *(_QWORD *)(a1 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v2 == 1 )
    return MiPfnShareCountIsZero();
  else
    return 2LL;
}
