/*
 * XREFs of MiDecrementShareCount @ 0x1402E4A10
 * Callers:
 *     MiFreeContiguousPages @ 0x140217D28 (MiFreeContiguousPages.c)
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiAddSystemPageTableToList @ 0x140235180 (MiAddSystemPageTableToList.c)
 *     MiFreeUnmappedPageTables @ 0x140237E28 (MiFreeUnmappedPageTables.c)
 *     MiTrimSystemImagePages @ 0x14023CB80 (MiTrimSystemImagePages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140257E48 (MiRewriteTrimPteAsDemandZero.c)
 *     MiDeleteTopLevelPage @ 0x1402741C8 (MiDeleteTopLevelPage.c)
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiCompletePrivateZeroFault @ 0x1402B5150 (MiCompletePrivateZeroFault.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MmOutSwapProcess @ 0x1402EECE4 (MmOutSwapProcess.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E668 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053F3DC (MiUnmapPatchTable.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x1405408E0 (MiDecrementProtoShareCounts.c)
 *     MiInitializeProtoPfn @ 0x1405551D0 (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x14055A8E0 (MiFinishLastForkPageTable.c)
 *     MiFreeRegistryPageRange @ 0x140A4DD08 (MiFreeRegistryPageRange.c)
 *     MiTradeBootImagePage @ 0x140A50E60 (MiTradeBootImagePage.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
    return MiPfnShareCountIsZero(a1, 0LL);
  else
    return 2LL;
}
