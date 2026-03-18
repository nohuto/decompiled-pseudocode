/*
 * XREFs of MiLockWorkingSetShared @ 0x1402AC150
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     MiQueryAddressSpan @ 0x14024B6F0 (MiQueryAddressSpan.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiRelockFaultState @ 0x140253F1C (MiRelockFaultState.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140255F44 (MiIsCfgBitMapPageShared.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiLockPoolCommitWs @ 0x140258A48 (MiLockPoolCommitWs.c)
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiSoftFaultMappedView @ 0x14025AFC0 (MiSoftFaultMappedView.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiLockWorkingSetOptimal @ 0x1402633AC (MiLockWorkingSetOptimal.c)
 *     MiEncodeProtoFill @ 0x140265984 (MiEncodeProtoFill.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MmQueryWorkingSetInformation @ 0x14027D4F4 (MmQueryWorkingSetInformation.c)
 *     MiWalkPageTablesRecursively @ 0x14029DD80 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402AD740 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x1402B9020 (MiDeleteKernelStack.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     MiAllowProtectionChange @ 0x1402FB894 (MiAllowProtectionChange.c)
 *     MiInitializeWorkingSetList @ 0x1402FDAD4 (MiInitializeWorkingSetList.c)
 *     MiEmptyWorkingSetInitiate @ 0x140311470 (MiEmptyWorkingSetInitiate.c)
 *     MiCountSharedPages @ 0x140312D60 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiClearNonPagedPtes @ 0x14032DB6C (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x140332D80 (MiComparePteProtections.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140337F84 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiConvertAndFlushWsleVas @ 0x140342ED0 (MiConvertAndFlushWsleVas.c)
 *     MiLockProbePacketWorkingSet @ 0x140345C60 (MiLockProbePacketWorkingSet.c)
 *     MiMakeProtoLeafValid @ 0x140349AB4 (MiMakeProtoLeafValid.c)
 *     MiDeleteSystemPageTables @ 0x14034D5B4 (MiDeleteSystemPageTables.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14034F4C0 (MmQuerySystemWorkingSetInformation.c)
 *     MiFlushDirtyBitsToPfn @ 0x1403519CC (MiFlushDirtyBitsToPfn.c)
 *     MmQueryCommitReleaseState @ 0x1403523C4 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x140352790 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x14035708C (MiLockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x140358C60 (MmCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x14035E44C (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x14035F644 (MmStoreDecommitVirtualMemory.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MiLeapPrefetch @ 0x14037A114 (MiLeapPrefetch.c)
 *     MmRemoveExecuteGrants @ 0x14037C970 (MmRemoveExecuteGrants.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394C54 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMapWithLargePages @ 0x1403B51CC (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C3C68 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C56B4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403C95C0 (MiGetWsAndMakePageTablesNx.c)
 *     MmUpdateUserShadowStackValue @ 0x1403EE978 (MmUpdateUserShadowStackValue.c)
 *     MiDeleteEmptyPageTables @ 0x1403EF2E0 (MiDeleteEmptyPageTables.c)
 *     MiCheckCommitReleaseFromVad @ 0x140525C3C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x140527628 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x140527B58 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x140527C44 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527EC8 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x140528534 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x140528E44 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x14052B210 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x14052C254 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14052F16C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140530B80 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405311FC (MiDeprioritizeVirtualAddresses.c)
 *     MmRemoveSystemCacheFromDump @ 0x1405336BC (MmRemoveSystemCacheFromDump.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053751C (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x1405393F0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x140539CCC (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14053EB6C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MiGetWorkingSetInfoEx @ 0x140541910 (MiGetWorkingSetInfoEx.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541D84 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405442B4 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1405444D8 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1405460CC (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054886C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054CAD4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x14054EB1C (MiReleaseLargePteMappings.c)
 *     MiCombineWorkingSet @ 0x140557784 (MiCombineWorkingSet.c)
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 *     MiMarkLargePageMappings @ 0x140A3CF10 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A46408 (MiMarkBootKernelStack.c)
 *     MiAddLoaderHalIoMappings @ 0x140A5271C (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140329910 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B06F4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
      v2 = &dword_140C4F580;
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
