/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x1402FD0FC
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14020A2F0 (MiProbeAndLockPrepare.c)
 *     MiMakeHyperRangeAccessible @ 0x14021B4E0 (MiMakeHyperRangeAccessible.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiSetPagingOfDriver @ 0x14026DB1C (MiSetPagingOfDriver.c)
 *     MiCountSharedPages @ 0x14028C460 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiEncodeProtoFill @ 0x1402BA24C (MiEncodeProtoFill.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402BE19C (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1402C17C0 (MmQuerySystemWorkingSetInformation.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x1402CDE38 (MiMapPageFileHash.c)
 *     MiOutPageSingleKernelStack @ 0x1402D5A60 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiMarkPteDirty @ 0x1402FA54C (MiMarkPteDirty.c)
 *     MiReturnSystemVa @ 0x1402FA5E8 (MiReturnSystemVa.c)
 *     MmFreePoolMemory @ 0x1402FA848 (MmFreePoolMemory.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MiPfCompleteInPageSupport @ 0x1402FCB98 (MiPfCompleteInPageSupport.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402FCDFC (MiMakeZeroedPageTablesEx.c)
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     MiGetNextPageTable @ 0x14030D820 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140311C40 (MiSynchronizeSystemVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiOutSwapKernelStackPage @ 0x14035C6E0 (MiOutSwapKernelStackPage.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiRecheckCombineVm @ 0x140367AD0 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x140368100 (MiCapturePfnVm.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14039758C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCountSystemImageCommitment @ 0x14039EC94 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x1403B5178 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B8854 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B9650 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9A00 (MiGetNextNonGapPfnPage.c)
 *     MiExceptionForMappedVa @ 0x14052D028 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14052D114 (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x14052E314 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538B8C (MmRemoveSystemCacheFromDump.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F6F8 (MmWriteSystemImageTracepoint.c)
 *     MiMapRetpolineStubs @ 0x14054403C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544248 (MiUnmapRetpolineStubs.c)
 *     MiReleaseLargePteMappings @ 0x140553FBC (MiReleaseLargePteMappings.c)
 *     MiGetCcAccessLog @ 0x1406AD20C (MiGetCcAccessLog.c)
 *     HvTrimHive @ 0x1406BD0DC (HvTrimHive.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406EA060 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140715730 (MiMapImageInSystemSpace.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1470 (MiProtectLargeKernelHalRange.c)
 *     MmMapLockedRestartPages @ 0x1408C4AC0 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x1408C4B70 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C84E0 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x1408CB184 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408CB234 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0AF4 (MiLockAndMapEntireDriver.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408D17F0 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140994F28 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1409B026C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1409B03D8 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409B0474 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkLargePageMappings @ 0x140A42CD0 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4E39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4E614 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x140A4F20C (MiCreateInitialSystemWsles.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140A543A4 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeDynamicVa @ 0x140A6836C (MiInitializeDynamicVa.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 < 1 )
  {
    v1 = 3LL * a1;
    v2 = (char *)&unk_140C529C0;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C4F000;
  }
  return &v2[64 * v1];
}
