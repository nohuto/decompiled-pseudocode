/*
 * XREFs of MiDecrementShareCount @ 0x140273FD0
 * Callers:
 *     MmOutSwapProcess @ 0x140211108 (MmOutSwapProcess.c)
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MiDeleteTopLevelPage @ 0x140217060 (MiDeleteTopLevelPage.c)
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiAddSystemPageTableToList @ 0x14022900C (MiAddSystemPageTableToList.c)
 *     MiFreeUnmappedPageTables @ 0x14022973C (MiFreeUnmappedPageTables.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiAddPageToInsertList @ 0x140276C78 (MiAddPageToInsertList.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiTrimSystemImagePages @ 0x1402D92AC (MiTrimSystemImagePages.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiUnlockMdlWritePages @ 0x140334830 (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14033F8E0 (MiRewriteTrimPteAsDemandZero.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiPurgeSubsection @ 0x14058BA98 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x14059E1E8 (MiDecrementProtoShareCounts.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MiDuplicateCloneLeaf @ 0x1405BA864 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x1405BACCC (MiFinishLastForkPageTable.c)
 *     MiInitializeProtoPfn @ 0x1405C4A48 (MiInitializeProtoPfn.c)
 *     MiTradeBootImagePage @ 0x140B05434 (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x140B19724 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x1405AD6C8 (MiBadShareCount.c)
 */

__int64 __fastcall MiDecrementShareCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1, a2, a3, a4);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4 ^ (((v4 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v4) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v4 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiPfnShareCountIsZero(a1);
  else
    return 2LL;
}
