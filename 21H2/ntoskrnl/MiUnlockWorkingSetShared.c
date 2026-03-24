/*
 * XREFs of MiUnlockWorkingSetShared @ 0x14020F790
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MiWalkPageTablesRecursively @ 0x14020BDA0 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUserFault @ 0x14020D770 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14021B4E0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     MiQueryAddressSpan @ 0x14025B3D0 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x14025BA58 (MiComparePteProtections.c)
 *     MmQueryWorkingSetInformation @ 0x14025C750 (MmQueryWorkingSetInformation.c)
 *     MiAllowProtectionChange @ 0x14025F698 (MiAllowProtectionChange.c)
 *     MiSetPagingOfDriver @ 0x14026DB1C (MiSetPagingOfDriver.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x140270AEC (MiConvertAndFlushWsleVas.c)
 *     MiDeleteKernelStack @ 0x140272740 (MiDeleteKernelStack.c)
 *     MiCountSharedPages @ 0x14028C460 (MiCountSharedPages.c)
 *     MiUnlockFaultWorkingSet @ 0x14028DD1C (MiUnlockFaultWorkingSet.c)
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402980D4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140299824 (MiReplaceRotateWithDemandZero.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402A0D3C (MiFlushDirtyBitsToPfn.c)
 *     MiReleaseWalkLocks @ 0x1402AA590 (MiReleaseWalkLocks.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402B7B00 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x1402BA24C (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x1402BC818 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x1402BCAB4 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1402C17C0 (MmQuerySystemWorkingSetInformation.c)
 *     MmQueryCommitReleaseState @ 0x1402C3EC8 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x1402C4364 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x1402C8C5C (MiLockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x1402CA700 (MmCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x1402D0E1C (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x1402D24B4 (MmStoreDecommitVirtualMemory.c)
 *     MiOutPageSingleKernelStack @ 0x1402D5A60 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiMarkPteDirty @ 0x1402FA54C (MiMarkPteDirty.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402FCDFC (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x1402FD75C (MiDeleteSystemPageTables.c)
 *     MiRelockFaultState @ 0x1403052A8 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MiUnlockPoolCommitWs @ 0x14030B808 (MiUnlockPoolCommitWs.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14030D66C (MiIsCfgBitMapPageShared.c)
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiCopyToUserVa @ 0x14030E538 (MiCopyToUserVa.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14030F640 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 *     MiUnlockSystemVa @ 0x1403120FC (MiUnlockSystemVa.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemCacheRangeValid @ 0x14031EB90 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x14032DF30 (NtUnlockVirtualMemory.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiEmptyWorkingSetInitiate @ 0x14035A3D4 (MiEmptyWorkingSetInitiate.c)
 *     MiInitializeWorkingSetList @ 0x14035E464 (MiInitializeWorkingSetList.c)
 *     MiMakeSystemCachePteValid @ 0x14035E91C (MiMakeSystemCachePteValid.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiLeapPrefetch @ 0x14037BFAC (MiLeapPrefetch.c)
 *     MmRemoveExecuteGrants @ 0x14037ED20 (MmRemoveExecuteGrants.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14039758C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMapWithLargePages @ 0x1403B8AEC (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6DC8 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C8C44 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CCBD0 (MiGetWsAndMakePageTablesNx.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B10C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x14052CAF8 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x14052D028 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14052D114 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D398 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x14052DA04 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x14052E314 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x1405306E0 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x140531724 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14053463C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1405350B0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140536050 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405366CC (MiDeprioritizeVirtualAddresses.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538B8C (MmRemoveSystemCacheFromDump.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053C9EC (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x14053E8C0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EBCC (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053F19C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054403C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544248 (MiUnmapRetpolineStubs.c)
 *     MiGetWorkingSetInfoEx @ 0x140546DE0 (MiGetWorkingSetInfoEx.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547254 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeProtoPrivate @ 0x1405479E4 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x140549104 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140549784 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1405499A8 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AB30 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14054B59C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x14054BF44 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D364 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054DD3C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551F74 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x140553FBC (MiReleaseLargePteMappings.c)
 *     MiCombineWorkingSet @ 0x14055CC24 (MiCombineWorkingSet.c)
 *     MiMapUserLargePages @ 0x14055E730 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x140563A88 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1470 (MiProtectLargeKernelHalRange.c)
 *     MiMarkLargePageMappings @ 0x140A42CD0 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 *     MiAddLoaderHalIoMappings @ 0x140A543A4 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x14020F880 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036C210 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5DBC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rsi
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  struct _KPRCB *v6; // rcx
  _DWORD *v7; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf
  int v12; // eax
  _DWORD *v13; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 184) & 7u) >= 6 )
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
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v11 )
LABEL_31:
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 184);
    if ( (v4 & 0x8000000) != 0 || (v4 & 0x4000000) != 0 || (v4 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, a2);
      LOBYTE(v4) = *(_BYTE *)(a1 + 184);
    }
    if ( (v4 & 7) == 2 )
      v5 = &dword_140C4F780;
    else
      v5 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
    }
    else
    {
      _InterlockedAnd(v5, 0xBFFFFFFF);
      _InterlockedDecrement(v5);
    }
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v12 = v7[6] - 1;
        v7[6] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(v6);
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
          v13 = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v11 = ((unsigned int)result & v13[5]) == 0;
          v13[5] &= result;
          if ( v11 )
            goto LABEL_31;
        }
      }
    }
  }
  __writecr8(v3);
  return result;
}
