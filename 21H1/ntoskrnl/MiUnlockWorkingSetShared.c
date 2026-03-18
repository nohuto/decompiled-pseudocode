/*
 * XREFs of MiUnlockWorkingSetShared @ 0x14020EC60
 * Callers:
 *     MmQueryWorkingSetInformation @ 0x1402041E4 (MmQueryWorkingSetInformation.c)
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14021AAC0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x1402263A0 (MiDeleteKernelStack.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiQueryAddressSpan @ 0x1402A4720 (MiQueryAddressSpan.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1402AEF74 (MiIsCfgBitMapPageShared.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiUnlockPoolCommitWs @ 0x1402B1A28 (MiUnlockPoolCommitWs.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MiMarkPteDirty @ 0x1402BD9E0 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x1402BDA7C (MiDirtySystemCachePte.c)
 *     MiEncodeProtoFill @ 0x1402BE9B4 (MiEncodeProtoFill.c)
 *     MiInitializeWorkingSetList @ 0x1402C1FF4 (MiInitializeWorkingSetList.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x1402F5EE0 (MiComparePteProtections.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReleaseWalkLocks @ 0x1402FC23C (MiReleaseWalkLocks.c)
 *     MiConvertAndFlushWsleVas @ 0x140305480 (MiConvertAndFlushWsleVas.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140307EA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiMakeProtoLeafValid @ 0x14030BB74 (MiMakeProtoLeafValid.c)
 *     MiEmptyWorkingSetInitiate @ 0x14030C2FC (MiEmptyWorkingSetInitiate.c)
 *     MiDeleteSystemPageTables @ 0x14030FF24 (MiDeleteSystemPageTables.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140311CD0 (MmQuerySystemWorkingSetInformation.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     MmQueryCommitReleaseState @ 0x1403145B8 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x140314A40 (MiLockProtoPage.c)
 *     MiUnlockFaultWorkingSet @ 0x14031667C (MiUnlockFaultWorkingSet.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x14031949C (MiLockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x14031B1B0 (MmCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x14032085C (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x140321C94 (MmStoreDecommitVirtualMemory.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
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
 *     MiMakeProtoPrivate @ 0x140541EC4 (MiMakeProtoPrivate.c)
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
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14030C55C (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0124 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
      v5 = &dword_140C4F6C0;
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
