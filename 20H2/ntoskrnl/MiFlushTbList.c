/*
 * XREFs of MiFlushTbList @ 0x1402BFA90
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiFlushTbListEarly @ 0x14023DC3C (MiFlushTbListEarly.c)
 *     MiReplenishBitMap @ 0x14023E340 (MiReplenishBitMap.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402612E0 (MiZeroAndFlushPtes.c)
 *     MiGetNextPageTablePte @ 0x14026E0D0 (MiGetNextPageTablePte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiGetPteFromCopyList @ 0x140290F30 (MiGetPteFromCopyList.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MmMapViewInSystemCache @ 0x1402983C0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiFlushTbAsNeeded @ 0x1402B9260 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x1402BCE70 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiDeleteVaTail @ 0x1402BF6B0 (MiDeleteVaTail.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiDeleteNonPagedPoolTail @ 0x140301950 (MiDeleteNonPagedPoolTail.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MiReplacePageTablePage @ 0x140313100 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTableTail @ 0x140316970 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x140319000 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x14031F190 (MiCreateSystemPageTableTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x140322668 (MiFlushDirtyBitsToPfn.c)
 *     MiFlushHyperSpace @ 0x140330C14 (MiFlushHyperSpace.c)
 *     MmOutPageKernelStack @ 0x140335834 (MmOutPageKernelStack.c)
 *     MiCreateSystemPageTable @ 0x1403360F0 (MiCreateSystemPageTable.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiZeroPageWorkMapping @ 0x140351698 (MiZeroPageWorkMapping.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiDecommitLargePoolVa @ 0x1403705F0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140378EF0 (MiFlushValidPteFromTb.c)
 *     MmSetPageProtection @ 0x140379A80 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x14037E6A0 (MmRemoveExecuteGrants.c)
 *     MiMapMemoryDumpMdl @ 0x140383414 (MiMapMemoryDumpMdl.c)
 *     MiResetAccessBitPte @ 0x14039AF20 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x14039D940 (MiResetAccessBitsTail.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B954C (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403B973C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9828 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F2C00 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F3600 (MiDeleteEmptyPageTableTail.c)
 *     MiZeroWithSystemPtes @ 0x1403F39F8 (MiZeroWithSystemPtes.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052D42C (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405306B0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053A4D0 (MiSimpleAgeWorkingSetTail.c)
 *     MiClearDriverHotPatchPtes @ 0x14053C928 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053D69C (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x140546FB4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x140548B9C (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x140551F1C (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x1405524EC (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408D41A4 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4E0B0 (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140A4E514 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A4E704 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A53D78 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A76E38 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushMultipleRangeTb @ 0x1402BFBA0 (KeFlushMultipleRangeTb.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B5E58 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C897C (KeFlushMultipleRangeCurrentTb.c)
 */

void __fastcall MiFlushTbList(unsigned int *a1, _KPROCESS *Process)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // r9
  int *v8; // rdx

  v3 = a1[3];
  if ( !(_DWORD)v3 )
    return;
  v4 = *((unsigned __int8 *)a1 + 4);
  v5 = qword_140C4DE10;
  if ( (v4 & 2) == 0 )
  {
    v6 = *a1;
    if ( *a1 != 1 )
      goto LABEL_16;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.Bitmap[5] || Process->SecureState.SecureHandle )
      v5 = -1LL;
  }
  v6 = *a1;
  if ( *a1 == 1 )
  {
    v7 = 0LL;
    goto LABEL_8;
  }
LABEL_16:
  v7 = (unsigned int)((v4 & 8) != 0) + 1;
LABEL_8:
  if ( *((_BYTE *)a1 + 5) || *((_QWORD *)a1 + 2) > v5 )
  {
    if ( (v4 & 1) != 0 )
      KeFlushCurrentTbOnly(v6, Process, v4, v7);
    else
      KeFlushTb(v6, (unsigned int)v7, v4, v7);
    *((_BYTE *)a1 + 5) = 0;
  }
  else
  {
    v8 = (int *)(a1 + 6);
    if ( (v4 & 1) != 0 )
      KeFlushMultipleRangeCurrentTb(v3, v8, v6, v7);
    else
      KeFlushMultipleRangeTb(v3, v8, v6, v7);
  }
  *((_BYTE *)a1 + 4) &= ~8u;
  a1[3] = 0;
  *((_QWORD *)a1 + 2) = 0LL;
}
