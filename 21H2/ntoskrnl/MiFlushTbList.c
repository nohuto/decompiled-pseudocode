/*
 * XREFs of MiFlushTbList @ 0x140346270
 * Callers:
 *     MiReplenishBitMap @ 0x140205D50 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x1402063F8 (MiFlushTbListEarly.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroPageWorkMapping @ 0x14021987C (MiZeroPageWorkMapping.c)
 *     MiDeleteNonPagedPoolTail @ 0x14021B130 (MiDeleteNonPagedPoolTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x14021E2BC (MiFlushDirtyBitsToPfn.c)
 *     MiReplacePageTablePage @ 0x140224260 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTableTail @ 0x140237C80 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x1402397B0 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x14023F050 (MiCreateSystemPageTableTail.c)
 *     MiFlushHyperSpace @ 0x140251200 (MiFlushHyperSpace.c)
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 *     MmOutPageKernelStack @ 0x140295CA4 (MmOutPageKernelStack.c)
 *     MiCreateSystemPageTable @ 0x140296560 (MiCreateSystemPageTable.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiGetNextPageTablePte @ 0x1402B16B0 (MiGetNextPageTablePte.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiFlushTbAsNeeded @ 0x140340D60 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x1403446E0 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiDecommitLargePoolVa @ 0x140370830 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140378C4C (MiFlushValidPteFromTb.c)
 *     MmSetPageProtection @ 0x1403797D0 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x14037E870 (MmRemoveExecuteGrants.c)
 *     MiMapMemoryDumpMdl @ 0x140383BB4 (MiMapMemoryDumpMdl.c)
 *     MiResetAccessBitPte @ 0x14039B940 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x14039D6D0 (MiResetAccessBitsTail.c)
 *     MiReplacePfnWithGapMapping @ 0x1403BA0BC (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403BA2AC (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA398 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F4448 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F4E40 (MiDeleteEmptyPageTableTail.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052F16C (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405323F0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053C210 (MiSimpleAgeWorkingSetTail.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E668 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053F3DC (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x140544488 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x140548CF4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14054A8DC (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x140553C2C (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408D1AC4 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4EC44 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140A509F0 (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140A50E60 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A51050 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A56380 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A74CE0 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140346370 (KeFlushMultipleRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7608 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C96BC (KeFlushMultipleRangeCurrentTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1, _KPROCESS *Process)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx

  v3 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v3 )
    return;
  v4 = *(unsigned __int8 *)(a1 + 4);
  v5 = qword_140C4DFD0;
  if ( (v4 & 2) == 0 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != 1 )
      goto LABEL_17;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.Bitmap[5] || Process->SecureState.SecureHandle )
      v5 = -1LL;
  }
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 1 )
  {
    v7 = 0LL;
    goto LABEL_8;
  }
LABEL_17:
  v7 = (unsigned int)((v4 & 8) != 0) + 1;
LABEL_8:
  if ( *(_BYTE *)(a1 + 5) || *(_QWORD *)(a1 + 16) > v5 )
  {
    if ( (v4 & 1) != 0 )
      KeFlushCurrentTbOnly(v6, Process, v4, v7);
    else
      KeFlushTb(v6, v7);
    *(_BYTE *)(a1 + 5) = 0;
  }
  else
  {
    v8 = a1 + 24;
    if ( (v4 & 1) != 0 )
      KeFlushMultipleRangeCurrentTb(v3, v8, v6);
    else
      KeFlushMultipleRangeTb(v3, v8, v6, v7);
  }
  *(_BYTE *)(a1 + 4) &= ~8u;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
}
