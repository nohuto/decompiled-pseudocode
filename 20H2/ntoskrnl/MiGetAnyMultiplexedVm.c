/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x14024EF1C
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     MmFreePoolMemory @ 0x140237AB4 (MmFreePoolMemory.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiMakeZeroedPageTablesEx @ 0x14024EC1C (MiMakeZeroedPageTablesEx.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x14024F3A8 (MiReturnSystemVa.c)
 *     MiMarkPteDirty @ 0x14024F530 (MiMarkPteDirty.c)
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiEncodeProtoFill @ 0x140250F1C (MiEncodeProtoFill.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiProbeAndLockPrepare @ 0x14026B610 (MiProbeAndLockPrepare.c)
 *     MiMakeHyperRangeAccessible @ 0x14027CCC0 (MiMakeHyperRangeAccessible.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140299220 (MiSynchronizeSystemVa.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiPfCompleteInPageSupport @ 0x1402CFEBC (MiPfCompleteInPageSupport.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140332144 (MmQuerySystemWorkingSetInformation.c)
 *     MiOutSwapKernelStackPage @ 0x140339404 (MiOutSwapKernelStackPage.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiRecheckCombineVm @ 0x140367820 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x140367E50 (MiCapturePfnVm.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCountSystemImageCommitment @ 0x14039F054 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x1403B3AF8 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B7E54 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B8C50 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9000 (MiGetNextNonGapPfnPage.c)
 *     MiExceptionForMappedVa @ 0x14052B528 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14052B614 (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x14052C814 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x14053708C (MmRemoveSystemCacheFromDump.c)
 *     MmWriteSystemImageTracepoint @ 0x14053DBF8 (MmWriteSystemImageTracepoint.c)
 *     MiMapRetpolineStubs @ 0x14054253C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiReleaseLargePteMappings @ 0x1405524EC (MiReleaseLargePteMappings.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14062A440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiGetCcAccessLog @ 0x1406CECEC (MiGetCcAccessLog.c)
 *     HvTrimHive @ 0x1406DD28C (HvTrimHive.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     MiFreeInitializationCode @ 0x140757DAC (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 *     MmMapLockedRestartPages @ 0x1408C7300 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x1408C73B0 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408CAD20 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x1408CD9C4 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408CDA74 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408D3334 (MiLockAndMapEntireDriver.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408D4030 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140997F28 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1409B336C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1409B34D8 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409B3574 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkLargePageMappings @ 0x140A431B0 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x140A4CC24 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4CDFC (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4D074 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x140A4DC6C (MiCreateInitialSystemWsles.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140A52D9C (MiAddLoaderHalIoMappings.c)
 *     MiInitializeDynamicVa @ 0x140A6ADFC (MiInitializeDynamicVa.c)
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
    v2 = (char *)&unk_140C52840;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C4EE80;
  }
  return &v2[64 * v1];
}
