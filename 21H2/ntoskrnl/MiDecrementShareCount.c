/*
 * XREFs of MiDecrementShareCount @ 0x1402401C0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210850 (MiCompletePrivateZeroFault.c)
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MmOutSwapProcess @ 0x14024A494 (MmOutSwapProcess.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140269EA8 (MiRewriteTrimPteAsDemandZero.c)
 *     MiFreeContiguousPages @ 0x140296068 (MiFreeContiguousPages.c)
 *     MiDeleteTopLevelPage @ 0x1402970E8 (MiDeleteTopLevelPage.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiAddSystemPageTableToList @ 0x1402B6FA0 (MiAddSystemPageTableToList.c)
 *     MiFreeUnmappedPageTables @ 0x1402B9C18 (MiFreeUnmappedPageTables.c)
 *     MiTrimSystemImagePages @ 0x1402BE540 (MiTrimSystemImagePages.c)
 *     MiOutPageSingleKernelStack @ 0x1402D5A60 (MiOutPageSingleKernelStack.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiMakeSystemCacheRangeValid @ 0x14031EB90 (MiMakeSystemCacheRangeValid.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x1403A53C4 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x14052A2B0 (MiPurgeSubsection.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E428 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053F19C (MiUnmapPatchTable.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x1405406A0 (MiDecrementProtoShareCounts.c)
 *     MiInitializeProtoPfn @ 0x140554F90 (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x14055A6A0 (MiFinishLastForkPageTable.c)
 *     MiFreeRegistryPageRange @ 0x140A4CD08 (MiFreeRegistryPageRange.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
    return MiPfnShareCountIsZero(a1);
  else
    return 2LL;
}
