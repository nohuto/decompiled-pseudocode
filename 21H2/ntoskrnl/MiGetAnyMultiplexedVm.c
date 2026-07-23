/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x140307E4C
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiLockStealSystemVm @ 0x1402150E4 (MiLockStealSystemVm.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiEncodeProtoFill @ 0x14023845C (MiEncodeProtoFill.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14023FC60 (MmQuerySystemWorkingSetInformation.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiOutSwapKernelStackPage @ 0x1402A1610 (MiOutSwapKernelStackPage.c)
 *     MiProbeAndLockPrepare @ 0x1402AEBF0 (MiProbeAndLockPrepare.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiMarkPteDirty @ 0x14030529C (MiMarkPteDirty.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MmFreePoolMemory @ 0x140305598 (MmFreePoolMemory.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiPfCompleteInPageSupport @ 0x1403078E8 (MiPfCompleteInPageSupport.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiRecheckCombineVm @ 0x140367C80 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x1403682B0 (MiCapturePfnVm.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCountSystemImageCommitment @ 0x14039EDE4 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x1403B52E8 (MiDeleteBootRange.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B97C0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9B70 (MiGetNextNonGapPfnPage.c)
 *     MiExceptionForMappedVa @ 0x14052D268 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14052D354 (MiFaultInPagedPool.c)
 *     MiGetFileOnlyRanges @ 0x14052E554 (MiGetFileOnlyRanges.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538DCC (MmRemoveSystemCacheFromDump.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F938 (MmWriteSystemImageTracepoint.c)
 *     MiMapRetpolineStubs @ 0x14054427C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544488 (MiUnmapRetpolineStubs.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 *     MiGetCcAccessLog @ 0x14060B8FC (MiGetCcAccessLog.c)
 *     HvTrimHive @ 0x14061A688 (HvTrimHive.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140701440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 *     MmMapLockedRestartPages @ 0x1408C4C20 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x1408C4CD0 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C8640 (MmReturnChargesToLockPagedPool.c)
 *     MiLockHotPatchPages @ 0x1408CB2E4 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408CB394 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0C54 (MiLockAndMapEntireDriver.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408D1950 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140995F28 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1409B119C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1409B1308 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409B13A4 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkLargePageMappings @ 0x140A43CD0 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4EC44 (MiMarkBootKernelStack.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4F39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4F614 (MiBuildPagedPool.c)
 *     MiCreateInitialSystemWsles @ 0x140A5020C (MiCreateInitialSystemWsles.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140A553A4 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeDynamicVa @ 0x140A6936C (MiInitializeDynamicVa.c)
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
    v2 = (char *)&unk_140C52A00;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C4F040;
  }
  return &v2[64 * v1];
}
