/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x140250128
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiProbeAndLockPrepare @ 0x14024EE20 (MiProbeAndLockPrepare.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 *     MmFreePoolMemory @ 0x14025307C (MmFreePoolMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x140256100 (MiGetNextPageTable.c)
 *     MiPfCompleteInPageSupport @ 0x14025AD4C (MiPfCompleteInPageSupport.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiMarkPteDirty @ 0x1402649B0 (MiMarkPteDirty.c)
 *     MiEncodeProtoFill @ 0x140265984 (MiEncodeProtoFill.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiMakeHyperRangeAccessible @ 0x1402AD740 (MiMakeHyperRangeAccessible.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1402BDCD0 (MiSynchronizeSystemVa.c)
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     MiOutSwapKernelStackPage @ 0x14030DC74 (MiOutSwapKernelStackPage.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiCountSharedPages @ 0x140312D60 (MiCountSharedPages.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 *     MiClearNonPagedPtes @ 0x14032DB6C (MiClearNonPagedPtes.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14034F4C0 (MmQuerySystemWorkingSetInformation.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiRecheckCombineVm @ 0x140365840 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x140365E70 (MiCapturePfnVm.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394C54 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x1403B1188 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B4F34 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B61B0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B6560 (MiGetNextNonGapPfnPage.c)
 *     MiExceptionForMappedVa @ 0x140527B58 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x140527C44 (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x140528E44 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x1405336BC (MmRemoveSystemCacheFromDump.c)
 *     MmWriteSystemImageTracepoint @ 0x14053A228 (MmWriteSystemImageTracepoint.c)
 *     MiMapRetpolineStubs @ 0x14053EB6C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MiReleaseLargePteMappings @ 0x14054EB1C (MiReleaseLargePteMappings.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140607F40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x14060C198 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiGetCcAccessLog @ 0x1406FC68C (MiGetCcAccessLog.c)
 *     HvTrimHive @ 0x1407092D8 (HvTrimHive.c)
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 *     MmMapLockedRestartPages @ 0x1408C14C0 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x1408C1570 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C4EE0 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x1408C7B84 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408C7C34 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408CD4F4 (MiLockAndMapEntireDriver.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408CE1F0 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140991EB8 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1409AD3FC (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1409AD568 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409AD604 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkLargePageMappings @ 0x140A3CF10 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A46408 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x140A46988 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A46B60 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A46DD8 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x140A479D0 (MiCreateInitialSystemWsles.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140A5271C (MiAddLoaderHalIoMappings.c)
 *     MiInitializeDynamicVa @ 0x140A63B2C (MiInitializeDynamicVa.c)
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
    v2 = (char *)&unk_140C527C0;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C4EE00;
  }
  return &v2[64 * v1];
}
