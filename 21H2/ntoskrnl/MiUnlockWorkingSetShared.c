/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1402B0CE0
 * Callers:
 *     MiJumpStackTarget @ 0x1402003C0 (MiJumpStackTarget.c)
 *     MiObtainRotateProtectionRanges @ 0x140200BAC (MiObtainRotateProtectionRanges.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMakeProtoPrivate @ 0x1402011DC (MiMakeProtoPrivate.c)
 *     MiFaultInPagedPool @ 0x1402019FC (MiFaultInPagedPool.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x14022A470 (MiComparePteProtections.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140233E34 (MiDeleteEmptyPageTableCommit.c)
 *     MiReleaseWalkLocks @ 0x1402341A4 (MiReleaseWalkLocks.c)
 *     MiMarkPteDirty @ 0x14023A12C (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14023CB68 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x14023FBE4 (MiEncodeProtoFill.c)
 *     MiMakeProtoLeafValid @ 0x140240C38 (MiMakeProtoLeafValid.c)
 *     MiDirtySystemCachePte @ 0x140241138 (MiDirtySystemCachePte.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402426F4 (MiReturnSystemCacheRegionsToKva.c)
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiLockProtoPage @ 0x14024C4D8 (MiLockProtoPage.c)
 *     MiUnlockFaultWorkingSet @ 0x14024D050 (MiUnlockFaultWorkingSet.c)
 *     MmQueryCommitReleaseState @ 0x14024DC34 (MmQueryCommitReleaseState.c)
 *     MiEmptyWorkingSetInitiate @ 0x140256548 (MiEmptyWorkingSetInitiate.c)
 *     MmRemoveExecuteGrants @ 0x140258CE0 (MmRemoveExecuteGrants.c)
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140263404 (MmQuerySystemWorkingSetInformation.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x14026E468 (MiDeleteSystemPageTables.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiUnlockSystemVa @ 0x14027A168 (MiUnlockSystemVa.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiReacquireWalkLocks @ 0x14027D2D8 (MiReacquireWalkLocks.c)
 *     MiRelockFaultState @ 0x14027D364 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiConvertAndFlushWsleVas @ 0x14027FD04 (MiConvertAndFlushWsleVas.c)
 *     MiIsCfgBitMapPageShared @ 0x1402810B0 (MiIsCfgBitMapPageShared.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteEmptyPageTables @ 0x14029F6FC (MiDeleteEmptyPageTables.c)
 *     MiInitializeWorkingSetList @ 0x1402A0624 (MiInitializeWorkingSetList.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MmQueryWorkingSetInformation @ 0x1402D02F0 (MmQueryWorkingSetInformation.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402DAC64 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiAllowProtectionChange @ 0x1402EDC48 (MiAllowProtectionChange.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiQueryAddressSpan @ 0x14030EC70 (MiQueryAddressSpan.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockComplete @ 0x14031A4F0 (MiProbeAndLockComplete.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x14033BC30 (MiDeleteKernelStack.c)
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiUnlockPoolCommitWs @ 0x140352CB4 (MiUnlockPoolCommitWs.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiMakeSystemCachePteValid @ 0x140367828 (MiMakeSystemCachePteValid.c)
 *     MiFlushDirtyBitsToPfn @ 0x14036B408 (MiFlushDirtyBitsToPfn.c)
 *     MiHandleForceTrimWorkingSets @ 0x140373F80 (MiHandleForceTrimWorkingSets.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140374BBC (MiDeprioritizeVirtualAddresses.c)
 *     MmCheckProcessShadow @ 0x140386410 (MmCheckProcessShadow.c)
 *     MiLockPageTableRange @ 0x140386DC4 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x140395864 (MiUnlockPageTableRange.c)
 *     MiMapWithLargePages @ 0x1403C7090 (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403D5614 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403D77D4 (MiMapMdlCommon.c)
 *     MiCopyWorkingSetFields @ 0x1403DA8E4 (MiCopyWorkingSetFields.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403DC188 (MiGetWsAndMakePageTablesNx.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x14058154C (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x140582B18 (MiGetFileOnlyRanges.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14058C874 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x14059368C (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140593A80 (MiExceptionForMappedVa.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140593E88 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1405941C0 (MiVadRangeIsIoSpace.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x14059774C (MmUpdateOldWorkingSetPages.c)
 *     MiMapRetpolineStubs @ 0x1405A1F60 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x1405A3418 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiGetWorkingSetInfoEx @ 0x1405A6204 (MiGetWorkingSetInfoEx.c)
 *     MiQueryVaPhysicalContiguity @ 0x1405A645C (MiQueryVaPhysicalContiguity.c)
 *     MmUpdateUserShadowStackValue @ 0x1405A7A98 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405A8748 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1405A8968 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1405AA07C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1405AC670 (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x1405B585C (MiReleaseLargePteMappings.c)
 *     MiCombineWorkingSet @ 0x1405B5EB8 (MiCombineWorkingSet.c)
 *     MiComputeIdealLargePage @ 0x1405C1218 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14082B4E0 (MiProtectLargeKernelHalRange.c)
 *     MmUnlockPhysicalPagesByVa @ 0x14096A384 (MmUnlockPhysicalPagesByVa.c)
 *     MiMarkLargePageMappings @ 0x140AF4588 (MiMarkLargePageMappings.c)
 *     MiMarkBootKernelStack @ 0x140B05B1C (MiMarkBootKernelStack.c)
 *     MiAddLoaderHalIoMappings @ 0x140B08434 (MiAddLoaderHalIoMappings.c)
 *     MmFreeLoaderBlock @ 0x140B190F0 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x1402B2E40 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x140373E1C (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rsi
  int v4; // ecx
  char v5; // al
  char v6; // dl
  volatile signed __int32 *v7; // rbx
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v13; // zf
  int v14; // eax
  _DWORD *v15; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 7u) >= 6 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && a2 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (a2 + 1));
          v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v13 )
LABEL_32:
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
  }
  else
  {
    v5 = v4;
    v6 = HIBYTE(v4);
    if ( (v4 & 7u) <= 4 )
    {
      v5 = v4;
      v6 = HIBYTE(v4);
    }
    if ( (*(_DWORD *)(a1 + 188) & 3) != 0 || (v6 & 0x10) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, (unsigned __int8)v3);
      v5 = *(_BYTE *)(a1 + 184);
    }
    if ( (v5 & 7) == 2 )
      v7 = (volatile signed __int32 *)&unk_140C53D00;
    else
      v7 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v7, retaddr);
    }
    else
    {
      _InterlockedAnd(v7, 0xBFFFFFFF);
      _InterlockedDecrement(v7);
    }
    v8 = KeGetCurrentPrcb();
    v9 = v8->SchedulerAssist;
    if ( v9 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v14 = v9[6] - 1;
        v9[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v13 = ((unsigned int)result & v15[5]) == 0;
          v15[5] &= result;
          if ( v13 )
            goto LABEL_32;
        }
      }
    }
  }
  __writecr8(v3);
  return result;
}
