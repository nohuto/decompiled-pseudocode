/*
 * XREFs of MiFlushTbList @ 0x14033B520
 * Callers:
 *     MiGetNextPageTablePte @ 0x14020CDB0 (MiGetNextPageTablePte.c)
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiGetPteFromCopyList @ 0x140240980 (MiGetPteFromCopyList.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiSetPagingOfDriver @ 0x14026DB1C (MiSetPagingOfDriver.c)
 *     MiReplenishBitMap @ 0x140288BB0 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x140289258 (MiFlushTbListEarly.c)
 *     MiDeleteNonPagedPoolTail @ 0x140296850 (MiDeleteNonPagedPoolTail.c)
 *     MmUnmapIoSpace @ 0x140297530 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x140297640 (MiZeroAndFlushPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x140299824 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroPageWorkMapping @ 0x14029A678 (MiZeroPageWorkMapping.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402A0D3C (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTableTail @ 0x1402B9A70 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x1402BB5A0 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x1402C0BE0 (MiCreateSystemPageTableTail.c)
 *     MiFlushHyperSpace @ 0x1402D2C80 (MiFlushHyperSpace.c)
 *     MmOutPageKernelStack @ 0x1402E4954 (MmOutPageKernelStack.c)
 *     MiCreateSystemPageTable @ 0x1402E5210 (MiCreateSystemPageTable.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MmSetAddressRangeModifiedEx @ 0x14030F640 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x140310DE0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140312500 (MiObtainSystemCacheView.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiFlushTbAsNeeded @ 0x140336010 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140339990 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiReplacePageTablePage @ 0x140363DF0 (MiReplacePageTablePage.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiDecommitLargePoolVa @ 0x140370CE0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x1403790FC (MiFlushValidPteFromTb.c)
 *     MmSetPageProtection @ 0x140379C80 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x14037ED20 (MmRemoveExecuteGrants.c)
 *     MiMapMemoryDumpMdl @ 0x140383A04 (MiMapMemoryDumpMdl.c)
 *     MiResetAccessBitPte @ 0x14039B7F0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x14039D580 (MiResetAccessBitsTail.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B9F4C (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403BA13C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA228 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x1403C8C44 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F4448 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F4E40 (MiDeleteEmptyPageTableTail.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052EF2C (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x140531724 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405321B0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053BFD0 (MiSimpleAgeWorkingSetTail.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E428 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053F19C (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x140544248 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x140548AB4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14054A69C (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x14054BF44 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D364 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x1405539EC (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x140553FBC (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x140563A88 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1470 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408D1964 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A55380 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A73CE0 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x140230120 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x14033B620 (KeFlushMultipleRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7498 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C951C (KeFlushMultipleRangeCurrentTb.c)
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
  v5 = qword_140C4DF90;
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
