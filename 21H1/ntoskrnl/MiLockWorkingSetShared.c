/*
 * XREFs of MiLockWorkingSetShared @ 0x140219640
 * Callers:
 *     MmQueryWorkingSetInformation @ 0x1402041E4 (MmQueryWorkingSetInformation.c)
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14021AAC0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x1402263A0 (MiDeleteKernelStack.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     MiQueryAddressSpan @ 0x1402A4720 (MiQueryAddressSpan.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1402AEF74 (MiIsCfgBitMapPageShared.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiLockPoolCommitWs @ 0x1402B1A78 (MiLockPoolCommitWs.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiLockWorkingSetOptimal @ 0x1402BC3DC (MiLockWorkingSetOptimal.c)
 *     MiEncodeProtoFill @ 0x1402BE9B4 (MiEncodeProtoFill.c)
 *     MiInitializeWorkingSetList @ 0x1402C1FF4 (MiInitializeWorkingSetList.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x1402F5EE0 (MiComparePteProtections.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiConvertAndFlushWsleVas @ 0x140305480 (MiConvertAndFlushWsleVas.c)
 *     MiLockProbePacketWorkingSet @ 0x140307E60 (MiLockProbePacketWorkingSet.c)
 *     MiMakeProtoLeafValid @ 0x14030BB74 (MiMakeProtoLeafValid.c)
 *     MiEmptyWorkingSetInitiate @ 0x14030C2FC (MiEmptyWorkingSetInitiate.c)
 *     MiDeleteSystemPageTables @ 0x14030FF24 (MiDeleteSystemPageTables.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140311CD0 (MmQuerySystemWorkingSetInformation.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     MmQueryCommitReleaseState @ 0x1403145B8 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x140314A40 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x14031949C (MiLockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x14031B1B0 (MmCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x14032085C (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x140321C94 (MmStoreDecommitVirtualMemory.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 *     MiAllowProtectionChange @ 0x140357874 (MiAllowProtectionChange.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiLeapPrefetch @ 0x14037926C (MiLeapPrefetch.c)
 *     MmRemoveExecuteGrants @ 0x14037BBF0 (MmRemoveExecuteGrants.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMapWithLargePages @ 0x1403B48CC (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C2DA8 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403C87B0 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x140526FD8 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x140527508 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1405275F4 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527878 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x1405287F4 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x14052ABC0 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14052EB1C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140530530 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MmRemoveSystemCacheFromDump @ 0x14053306C (MmRemoveSystemCacheFromDump.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x140536ECC (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x140538DA0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053967C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14053E51C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MiGetWorkingSetInfoEx @ 0x1405412C0 (MiGetWorkingSetInfoEx.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541734 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140543C64 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x140543E88 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140545A7C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054821C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x14054E4CC (MiReleaseLargePteMappings.c)
 *     MiCombineWorkingSet @ 0x140557134 (MiCombineWorkingSet.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A40BAC (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x140A43CD8 (MiMarkLargePageMappings.c)
 *     MiAddLoaderHalIoMappings @ 0x140A4CA1C (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
      v2 = &dword_140C4F6C0;
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
