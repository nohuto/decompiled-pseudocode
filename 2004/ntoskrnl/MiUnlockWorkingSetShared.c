/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1402A1770
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemCacheRangeValid @ 0x14022D030 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiQueryAddressSpan @ 0x14024B6F0 (MiQueryAddressSpan.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiRelockFaultState @ 0x140253F1C (MiRelockFaultState.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140255F44 (MiIsCfgBitMapPageShared.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiUnlockPoolCommitWs @ 0x1402589F8 (MiUnlockPoolCommitWs.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     MiMakeSystemCachePteValid @ 0x14026255C (MiMakeSystemCachePteValid.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 *     MiMarkPteDirty @ 0x1402649B0 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x140264A4C (MiDirtySystemCachePte.c)
 *     MiEncodeProtoFill @ 0x140265984 (MiEncodeProtoFill.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MmQueryWorkingSetInformation @ 0x14027D4F4 (MmQueryWorkingSetInformation.c)
 *     MiWalkPageTablesRecursively @ 0x14029DD80 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402AD740 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x1402B9020 (MiDeleteKernelStack.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiUnlockSystemVa @ 0x1402BE18C (MiUnlockSystemVa.c)
 *     MiReleaseSystemCacheView @ 0x1402C220C (MiReleaseSystemCacheView.c)
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     MiAllowProtectionChange @ 0x1402FB894 (MiAllowProtectionChange.c)
 *     MiInitializeWorkingSetList @ 0x1402FDAD4 (MiInitializeWorkingSetList.c)
 *     MiEmptyWorkingSetInitiate @ 0x140311470 (MiEmptyWorkingSetInitiate.c)
 *     MiCountSharedPages @ 0x140312D60 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiClearNonPagedPtes @ 0x14032DB6C (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x140332D80 (MiComparePteProtections.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140337F84 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReleaseWalkLocks @ 0x140339578 (MiReleaseWalkLocks.c)
 *     MiConvertAndFlushWsleVas @ 0x140342ED0 (MiConvertAndFlushWsleVas.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140345CA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiMakeProtoLeafValid @ 0x140349AB4 (MiMakeProtoLeafValid.c)
 *     MiDeleteSystemPageTables @ 0x14034D5B4 (MiDeleteSystemPageTables.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14034F4C0 (MmQuerySystemWorkingSetInformation.c)
 *     MiFlushDirtyBitsToPfn @ 0x1403519CC (MiFlushDirtyBitsToPfn.c)
 *     MmQueryCommitReleaseState @ 0x1403523C4 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x140352790 (MiLockProtoPage.c)
 *     MiUnlockFaultWorkingSet @ 0x1403541F4 (MiUnlockFaultWorkingSet.c)
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
 *     MiMakeProtoPrivate @ 0x140542514 (MiMakeProtoPrivate.c)
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
 *     MiCheckProcessShadow @ 0x1402A1860 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x140311648 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0844 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
      v5 = &dword_140C4F580;
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
