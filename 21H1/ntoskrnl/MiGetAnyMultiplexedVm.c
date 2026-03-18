/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x1402A9158
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14021AAC0 (MiMakeHyperRangeAccessible.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x14022B050 (MiSynchronizeSystemVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x1402AA5DC (MiReturnSystemVa.c)
 *     MmFreePoolMemory @ 0x1402AC0AC (MmFreePoolMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiPfCompleteInPageSupport @ 0x1402B3D7C (MiPfCompleteInPageSupport.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiMarkPteDirty @ 0x1402BD9E0 (MiMarkPteDirty.c)
 *     MiEncodeProtoFill @ 0x1402BE9B4 (MiEncodeProtoFill.c)
 *     MiOutSwapKernelStackPage @ 0x1402CC034 (MiOutSwapKernelStackPage.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiLockStealSystemVm @ 0x1402E96FC (MiLockStealSystemVm.c)
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140311CD0 (MmQuerySystemWorkingSetInformation.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 *     MiRecheckCombineVm @ 0x140364E80 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x1403654B0 (MiCapturePfnVm.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x1403AB508 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B4634 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B5380 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B5730 (MiGetNextNonGapPfnPage.c)
 *     MiExceptionForMappedVa @ 0x140527508 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1405275F4 (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x1405287F4 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x14053306C (MmRemoveSystemCacheFromDump.c)
 *     MmWriteSystemImageTracepoint @ 0x140539BD8 (MmWriteSystemImageTracepoint.c)
 *     MiMapRetpolineStubs @ 0x14053E51C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MiReleaseLargePteMappings @ 0x14054E4CC (MiReleaseLargePteMappings.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14063D090 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     MiGetCcAccessLog @ 0x1406D8ADC (MiGetCcAccessLog.c)
 *     HvTrimHive @ 0x1406E7060 (HvTrimHive.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 *     MmMapLockedRestartPages @ 0x1408C0170 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x1408C0220 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C3B90 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x1408C6834 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408C68E4 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408CC1A4 (MiLockAndMapEntireDriver.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408CCEA0 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140990F78 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1409AC59C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1409AC708 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409AC7A4 (MiMarkNonPagedHiberPhasePages.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A40BAC (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x140A4112C (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A41304 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4157C (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x140A42174 (MiCreateInitialSystemWsles.c)
 *     MiMarkLargePageMappings @ 0x140A43CD8 (MiMarkLargePageMappings.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140A4CA1C (MiAddLoaderHalIoMappings.c)
 *     MiInitializeDynamicVa @ 0x140A6093C (MiInitializeDynamicVa.c)
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
    v2 = (char *)&unk_140C528C0;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C4EF40;
  }
  return &v2[64 * v1];
}
