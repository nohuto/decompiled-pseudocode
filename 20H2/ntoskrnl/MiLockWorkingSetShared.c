/*
 * XREFs of MiLockWorkingSetShared @ 0x14027B490
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
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
 *     MiDeleteSystemPageTables @ 0x14024FB1C (MiDeleteSystemPageTables.c)
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiEncodeProtoFill @ 0x140250F1C (MiEncodeProtoFill.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteKernelStack @ 0x140265A40 (MiDeleteKernelStack.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14027CCC0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiLockWorkingSetOptimal @ 0x14029C0FC (MiLockWorkingSetOptimal.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiLockPoolCommitWs @ 0x1402CB348 (MiLockPoolCommitWs.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x1402D3A8C (MiConvertAndFlushWsleVas.c)
 *     MiAllowProtectionChange @ 0x1402EBE64 (MiAllowProtectionChange.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x140305ED0 (MiComparePteProtections.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MiLockProbePacketWorkingSet @ 0x140316FB0 (MiLockProbePacketWorkingSet.c)
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
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  unsigned __int8 v1; // al
  LONG *v2; // rbx
  unsigned __int8 v3; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v5; // rcx
  signed __int32 v6; // ett
  unsigned __int8 CurrentIrql; // r10
  _DWORD *v9; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v11; // r9
  int v12; // eax
  int v13; // eax

  v1 = *(_BYTE *)(a1 + 184) & 7;
  if ( v1 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    return CurrentIrql;
  }
  else
  {
    if ( v1 == 2 )
      v2 = &dword_140C4F600;
    else
      v2 = (LONG *)(a1 + 192);
    v3 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
    {
      v11 = KeGetCurrentPrcb()->SchedulerAssist;
      v11[5] |= (-1 << (v3 + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, v3);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = CurrentPrcb->SchedulerAssist;
      if ( v5 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v5[6];
          v5[6] = v12 + 1;
          if ( v12 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v2);
      v6 = *v2 & 0x7FFFFFFF;
      if ( v6 != _InterlockedCompareExchange(v2, v6 + 1, v6) )
      {
        v9 = CurrentPrcb->SchedulerAssist;
        if ( v9 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v13 = v9[6] - 1;
            v9[6] = v13;
            if ( !v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v2, v3);
      }
    }
    if ( v2[1] )
      _InterlockedExchange(v2 + 1, 0);
    return v3;
  }
}
