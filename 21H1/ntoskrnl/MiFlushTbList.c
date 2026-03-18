/*
 * XREFs of MiFlushTbList @ 0x140293410
 * Callers:
 *     MiFlushTbListEarly @ 0x140203350 (MiFlushTbListEarly.c)
 *     MiReplenishBitMap @ 0x140203840 (MiReplenishBitMap.c)
 *     MiGetNextPageTablePte @ 0x14020C280 (MiGetNextPageTablePte.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiFlushTbAsNeeded @ 0x140220080 (MiFlushTbAsNeeded.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiGetPteFromCopyList @ 0x140222160 (MiGetPteFromCopyList.c)
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MmMapViewInSystemCache @ 0x14022A1F0 (MmMapViewInSystemCache.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiDeleteVaTail @ 0x14029AD00 (MiDeleteVaTail.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14029DAD0 (MiAgePteWorker.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402F2370 (MiDeleteNonPagedPoolTail.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402FA4C0 (MiZeroAndFlushPtes.c)
 *     MiReplacePageTablePage @ 0x1403047BC (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTableTail @ 0x140307820 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x14030B030 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x140310DD0 (MiCreateSystemPageTableTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     MiFlushHyperSpace @ 0x140322470 (MiFlushHyperSpace.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiCreateSystemPageTable @ 0x1403289C0 (MiCreateSystemPageTable.c)
 *     MmOutPageKernelStack @ 0x14032A4F0 (MmOutPageKernelStack.c)
 *     MiZeroPageWorkMapping @ 0x1403499BC (MiZeroPageWorkMapping.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiDecommitLargePoolVa @ 0x14036DA70 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140376150 (MiFlushValidPteFromTb.c)
 *     MmSetPageProtection @ 0x140376CE0 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x14037BBF0 (MmRemoveExecuteGrants.c)
 *     MiMapMemoryDumpMdl @ 0x140380EF4 (MiMapMemoryDumpMdl.c)
 *     MiResetAccessBitPte @ 0x1403982D0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x14039A060 (MiResetAccessBitsTail.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B5C7C (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403B5E6C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403ED6D8 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403EDE30 (MiDeleteEmptyPageTableTail.c)
 *     MiZeroWithSystemPtes @ 0x1403EE228 (MiZeroWithSystemPtes.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052940C (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14052C690 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1405364B0 (MiSimpleAgeWorkingSetTail.c)
 *     MiClearDriverHotPatchPtes @ 0x140538908 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053967C (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x140542F94 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x140544B7C (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x14054DEFC (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x14054E4CC (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408CD014 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A40BAC (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140A42A24 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A42C14 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A4D9F8 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A6FE3C (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140293520 (KeFlushMultipleRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B2698 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C4F7C (KeFlushMultipleRangeCurrentTb.c)
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
  v5 = qword_140C4DED0;
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
