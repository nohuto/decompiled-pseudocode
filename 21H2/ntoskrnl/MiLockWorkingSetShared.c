/*
 * XREFs of MiLockWorkingSetShared @ 0x1402BE5B0
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiSoftFaultMappedView @ 0x14020A740 (MiSoftFaultMappedView.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140218B54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14021E2BC (MiFlushDirtyBitsToPfn.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiLockProbePacketWorkingSet @ 0x140235C98 (MiLockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x14023845C (MiEncodeProtoFill.c)
 *     MiMakeProtoLeafValid @ 0x14023B164 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14023FC60 (MmQuerySystemWorkingSetInformation.c)
 *     MmQueryCommitReleaseState @ 0x140242448 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x1402428E4 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x1402474BC (MiLockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x140248FF0 (MmCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x14024F2AC (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x140250884 (MmStoreDecommitVirtualMemory.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x14025EA8C (MiConvertAndFlushWsleVas.c)
 *     MiDeleteKernelStack @ 0x1402606E0 (MiDeleteKernelStack.c)
 *     MiQueryAddressSpan @ 0x14027C940 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x14027CFC8 (MiComparePteProtections.c)
 *     MmQueryWorkingSetInformation @ 0x14027DCC0 (MmQueryWorkingSetInformation.c)
 *     MiAllowProtectionChange @ 0x14027E54C (MiAllowProtectionChange.c)
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiEmptyWorkingSetInitiate @ 0x14029F170 (MiEmptyWorkingSetInitiate.c)
 *     MiInitializeWorkingSetList @ 0x1402A3394 (MiInitializeWorkingSetList.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x1403084AC (MiDeleteSystemPageTables.c)
 *     MiRelockFaultState @ 0x14030FFF8 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiLockPoolCommitWs @ 0x1403165A8 (MiLockPoolCommitWs.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1403183BC (MiIsCfgBitMapPageShared.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MiLockWorkingSetOptimal @ 0x14031A9E4 (MiLockWorkingSetOptimal.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MiLeapPrefetch @ 0x14037BAFC (MiLeapPrefetch.c)
 *     MmRemoveExecuteGrants @ 0x14037E870 (MmRemoveExecuteGrants.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6F68 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CCD40 (MiGetWsAndMakePageTablesNx.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B34C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x14052CD38 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x14052D268 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14052D354 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D5D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x14052DC44 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x14052E554 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x140530920 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14053487C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1405352F0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140536290 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053690C (MiDeprioritizeVirtualAddresses.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538DCC (MmRemoveSystemCacheFromDump.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053CC2C (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x14053EB00 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053F3DC (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054427C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544488 (MiUnmapRetpolineStubs.c)
 *     MiGetWorkingSetInfoEx @ 0x140547020 (MiGetWorkingSetInfoEx.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547494 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405499C4 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x140549BE8 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14054B7DC (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054DF7C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 *     MiCombineWorkingSet @ 0x14055CE64 (MiCombineWorkingSet.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 *     MiMarkLargePageMappings @ 0x140A43CD0 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4EC44 (MiMarkBootKernelStack.c)
 *     MiAddLoaderHalIoMappings @ 0x140A553A4 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v4; // al
  LONG *v5; // rbx
  unsigned __int8 v6; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v8; // rcx
  signed __int32 v9; // ett
  unsigned __int8 CurrentIrql; // r10
  _DWORD *v12; // rcx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax

  v4 = *(_BYTE *)(a1 + 184) & 7;
  if ( v4 >= 6u )
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
    if ( v4 == 2 )
      v5 = &dword_140C4F7C0;
    else
      v5 = (LONG *)(a1 + 192);
    v6 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
    {
      a4 = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (v6 + 1)) & 4u | a4[5];
      a4[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, v6, a3, a4);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v8[6];
          v8[6] = v14 + 1;
          if ( v14 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v5);
      v9 = *v5 & 0x7FFFFFFF;
      if ( v9 != _InterlockedCompareExchange(v5, v9 + 1, v9) )
      {
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v12[6] - 1;
            v12[6] = v15;
            if ( !v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v5, v6);
      }
    }
    if ( v5[1] )
      _InterlockedExchange(v5 + 1, 0);
    return v6;
  }
}
