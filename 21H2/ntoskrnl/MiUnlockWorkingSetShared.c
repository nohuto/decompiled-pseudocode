/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1402B4090
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiUnlockFaultWorkingSet @ 0x14020AEBC (MiUnlockFaultWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140218B54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14021E2BC (MiFlushDirtyBitsToPfn.c)
 *     MiReleaseWalkLocks @ 0x1402286D0 (MiReleaseWalkLocks.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140235CE0 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x14023845C (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x14023ADA8 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x14023B164 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14023FC60 (MmQuerySystemWorkingSetInformation.c)
 *     MmQueryCommitReleaseState @ 0x140242448 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x1402428E4 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x1402474BC (MiLockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x140248FF0 (MmCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x14024F2AC (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x140250884 (MmStoreDecommitVirtualMemory.c)
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
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiMarkPteDirty @ 0x14030529C (MiMarkPteDirty.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x1403084AC (MiDeleteSystemPageTables.c)
 *     MiRelockFaultState @ 0x14030FFF8 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiUnlockPoolCommitWs @ 0x140316558 (MiUnlockPoolCommitWs.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1403183BC (MiIsCfgBitMapPageShared.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
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
 *     MiMakeProtoPrivate @ 0x140547C24 (MiMakeProtoPrivate.c)
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
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036C3C0 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
      v5 = &dword_140C4F7C0;
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
