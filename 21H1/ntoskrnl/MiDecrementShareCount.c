/*
 * XREFs of MiDecrementShareCount @ 0x140353040
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiDeleteTopLevelPage @ 0x1402D5148 (MiDeleteTopLevelPage.c)
 *     MiAddSystemPageTableToList @ 0x1402F2920 (MiAddSystemPageTableToList.c)
 *     MiFreeContiguousPages @ 0x1402FA128 (MiFreeContiguousPages.c)
 *     MiFreeUnmappedPageTables @ 0x1403079C8 (MiFreeUnmappedPageTables.c)
 *     MiTrimSystemImagePages @ 0x1403251CC (MiTrimSystemImagePages.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140350B54 (MiRewriteTrimPteAsDemandZero.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiClearDriverHotPatchPtes @ 0x140538908 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053967C (MiUnmapPatchTable.c)
 *     MiDecrementLargeSubsections @ 0x14053A8F0 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x14053AB80 (MiDecrementProtoShareCounts.c)
 *     MiInitializeProtoPfn @ 0x14054F4A0 (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x140554BB0 (MiFinishLastForkPageTable.c)
 *     MiFreeRegistryPageRange @ 0x140A3FCA4 (MiFreeRegistryPageRange.c)
 *     MiTradeBootImagePage @ 0x140A42A24 (MiTradeBootImagePage.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
    return MiPfnShareCountIsZero(a1, 0LL, 1LL);
  else
    return 2LL;
}
