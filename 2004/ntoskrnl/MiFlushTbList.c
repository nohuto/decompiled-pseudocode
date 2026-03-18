/*
 * XREFs of MiFlushTbList @ 0x14023A3C0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiDeleteVaTail @ 0x140241CD0 (MiDeleteVaTail.c)
 *     MiTerminateWsleCluster @ 0x140241DE0 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140244AA0 (MiAgePteWorker.c)
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiFlushTbListEarly @ 0x14027C660 (MiFlushTbListEarly.c)
 *     MiReplenishBitMap @ 0x14027CB50 (MiReplenishBitMap.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiGetNextPageTablePte @ 0x14029ED90 (MiGetNextPageTablePte.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiFlushTbAsNeeded @ 0x1402B2D00 (MiFlushTbAsNeeded.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiGetPteFromCopyList @ 0x1402B4DE0 (MiGetPteFromCopyList.c)
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MmMapViewInSystemCache @ 0x1402BCE70 (MmMapViewInSystemCache.c)
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiCreateSystemPageTable @ 0x1402E2660 (MiCreateSystemPageTable.c)
 *     MmOutPageKernelStack @ 0x1402E53C0 (MmOutPageKernelStack.c)
 *     MiZeroPageWorkMapping @ 0x14031A67C (MiZeroPageWorkMapping.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiDeleteNonPagedPoolTail @ 0x14032E110 (MiDeleteNonPagedPoolTail.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiReplacePageTablePage @ 0x14034221C (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTableTail @ 0x140345620 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x140347880 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x14034E460 (MiCreateSystemPageTableTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x1403519CC (MiFlushDirtyBitsToPfn.c)
 *     MiFlushHyperSpace @ 0x14035FD80 (MiFlushHyperSpace.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiDecommitLargePoolVa @ 0x14036E6A0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140376F60 (MiFlushValidPteFromTb.c)
 *     MmSetPageProtection @ 0x140377AF0 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x14037C970 (MmRemoveExecuteGrants.c)
 *     MiMapMemoryDumpMdl @ 0x140381734 (MiMapMemoryDumpMdl.c)
 *     MiResetAccessBitPte @ 0x140398A60 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x14039A7F0 (MiResetAccessBitsTail.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B6AAC (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403B6C9C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B6D88 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x1403C56B4 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403EE798 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403EF190 (MiDeleteEmptyPageTableTail.c)
 *     MiZeroWithSystemPtes @ 0x1403EF588 (MiZeroWithSystemPtes.c)
 *     MiReplicatePfnDatabaseMappings @ 0x140529A5C (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x14052C254 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14052CCE0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x140536B00 (MiSimpleAgeWorkingSetTail.c)
 *     MiClearDriverHotPatchPtes @ 0x140538F58 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x140539CCC (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x1405435E4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1405451CC (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x14054E54C (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x14054EB1C (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408CE364 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A46408 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140A47E20 (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140A48284 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A48474 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A536F8 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A70A94 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x14023A4F0 (KeFlushMultipleRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B4498 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C5EEC (KeFlushMultipleRangeCurrentTb.c)
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
  v5 = qword_140C4DD90;
  if ( (v4 & 2) == 0 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != 1 )
      goto LABEL_16;
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
LABEL_16:
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
