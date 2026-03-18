/*
 * XREFs of MiUnlockWorkingSetShared @ 0x140270AB0
 * Callers:
 *     MiUnlockFaultWorkingSet @ 0x14020277C (MiUnlockFaultWorkingSet.c)
 *     MiQueryAddressSpan @ 0x14022C1F0 (MiQueryAddressSpan.c)
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140235BB4 (MiIsCfgBitMapPageShared.c)
 *     MiRelockFaultState @ 0x140235F50 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MmQueryWorkingSetInformation @ 0x14023ED3C (MmQueryWorkingSetInformation.c)
 *     MiMakeZeroedPageTablesEx @ 0x14024EC1C (MiMakeZeroedPageTablesEx.c)
 *     MiMarkPteDirty @ 0x14024F530 (MiMarkPteDirty.c)
 *     MiDeleteSystemPageTables @ 0x14024FB1C (MiDeleteSystemPageTables.c)
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiEncodeProtoFill @ 0x140250F1C (MiEncodeProtoFill.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteKernelStack @ 0x140265A40 (MiDeleteKernelStack.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14027CCC0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiUnlockSystemVa @ 0x1402996DC (MiUnlockSystemVa.c)
 *     MiReleaseSystemCacheView @ 0x14029AFD0 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiUnlockPoolCommitWs @ 0x1402CB2F8 (MiUnlockPoolCommitWs.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x1402D3A8C (MiConvertAndFlushWsleVas.c)
 *     MiAllowProtectionChange @ 0x1402EBE64 (MiAllowProtectionChange.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x140305ED0 (MiComparePteProtections.c)
 *     MiReleaseWalkLocks @ 0x14030BCFC (MiReleaseWalkLocks.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140316FF8 (MiUnlockProbePacketWorkingSet.c)
 *     MiDirtySystemCachePte @ 0x14031A254 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x14031A4F4 (MiMakeProtoLeafValid.c)
 *     MiEmptyWorkingSetInitiate @ 0x14031AA80 (MiEmptyWorkingSetInitiate.c)
 *     MiFlushDirtyBitsToPfn @ 0x140322668 (MiFlushDirtyBitsToPfn.c)
 *     MmQueryCommitReleaseState @ 0x140322E58 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x140323190 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x140327A8C (MiLockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x140328FD0 (MmCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x14032EDAC (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x1403303B4 (MmStoreDecommitVirtualMemory.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140332144 (MmQuerySystemWorkingSetInformation.c)
 *     MiInitializeWorkingSetList @ 0x140338B74 (MiInitializeWorkingSetList.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiLeapPrefetch @ 0x14037BE44 (MiLeapPrefetch.c)
 *     MmRemoveExecuteGrants @ 0x14037E6A0 (MmRemoveExecuteGrants.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMapWithLargePages @ 0x1403B80EC (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C63D8 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CC200 (MiGetWsAndMakePageTablesNx.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F2DE0 (MmUpdateUserShadowStackValue.c)
 *     MiDeleteEmptyPageTables @ 0x1403F3750 (MiDeleteEmptyPageTables.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052960C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x14052AFF8 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x14052B528 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14052B614 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x14052C814 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x14052EBE0 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x140532B3C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140534550 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 *     MmRemoveSystemCacheFromDump @ 0x14053708C (MmRemoveSystemCacheFromDump.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053AEEC (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x14053CDC0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053D69C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054253C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiGetWorkingSetInfoEx @ 0x1405452E0 (MiGetWorkingSetInfoEx.c)
 *     MiQueryVaPhysicalContiguity @ 0x140545754 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeProtoPrivate @ 0x140545EE4 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140547C84 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x140547EA8 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140549A9C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054C23C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405504A4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x1405524EC (MiReleaseLargePteMappings.c)
 *     MiCombineWorkingSet @ 0x14055B154 (MiCombineWorkingSet.c)
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 *     MiMarkLargePageMappings @ 0x140A431B0 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 *     MiAddLoaderHalIoMappings @ 0x140A52D9C (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14031ACE0 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B43A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
      v5 = &dword_140C4F600;
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
