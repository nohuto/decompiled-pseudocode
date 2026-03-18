/*
 * XREFs of ExAcquireSpinLockShared @ 0x1402D2DC0
 * Callers:
 *     PsGetWorkOnBehalfThread @ 0x14020890C (PsGetWorkOnBehalfThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022ABD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiGetControlAreaPtes @ 0x14022D05C (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x14022E700 (MiLocateSubsectionNode.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140233690 (ExReferenceCallBackBlock.c)
 *     ExProtectPoolEx @ 0x140238434 (ExProtectPoolEx.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14024923C (IopReferenceIoAttributionFromProcess.c)
 *     MmIsFileObjectAPagingFile @ 0x14024E4A8 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14024E710 (IoSetDiskIoAttributionFromThread.c)
 *     MiIsProbeActive @ 0x14025EA90 (MiIsProbeActive.c)
 *     MiLookupIoPageNode @ 0x14025F87C (MiLookupIoPageNode.c)
 *     ExRemovePoolTag @ 0x140260FA4 (ExRemovePoolTag.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiEndingOffsetWithLock @ 0x140297080 (MiEndingOffsetWithLock.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     MiStartingOffsetNeedLock @ 0x1402A0754 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     RtlpHpAcquireLockShared @ 0x1402D1620 (RtlpHpAcquireLockShared.c)
 *     PfSnGetFileInformation @ 0x1402D2A40 (PfSnGetFileInformation.c)
 *     PopPepLockActivityLink @ 0x1402D4288 (PopPepLockActivityLink.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402E3574 (SepGetSingletonEntryFromIndexNumber.c)
 *     IopFindDiskIoAttribution @ 0x1402EED50 (IopFindDiskIoAttribution.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140307164 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x140307E20 (RtlpCSparseBitmapLock.c)
 *     MiSystemImageHasPrivateFixups @ 0x14030DB7C (MiSystemImageHasPrivateFixups.c)
 *     MiGetPrototypePteRanges @ 0x140319788 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x14031F7A0 (MiReferencePfBackedSection.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140329544 (PopPepGetDevicePlatformStateDependents.c)
 *     MiGetPageFromSlabAllocator @ 0x140332F1C (MiGetPageFromSlabAllocator.c)
 *     MiFindFreePageFileSpace @ 0x14033A15C (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14033A8B0 (MiPageFileLargestBitmapsRun.c)
 *     PsGetNextPartitionUnsafe @ 0x14033B998 (PsGetNextPartitionUnsafe.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiTrimSection @ 0x1403545B0 (MiTrimSection.c)
 *     MiFindLastSubsection @ 0x140355FCC (MiFindLastSubsection.c)
 *     MiAllocateCombineProto @ 0x140367B60 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036FC44 (PopFxLockDevice.c)
 *     MiFreePageToSlabAllocator @ 0x140375520 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140375D50 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037CD40 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038BA44 (MiKernelStackVaToStackNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C7ED0 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CE4AC (HalpQueryNumaRangeTableInformation.c)
 *     MmUnmapReservedMapping @ 0x140530190 (MmUnmapReservedMapping.c)
 *     MiGenerateAccessViolation @ 0x140546A60 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x140551490 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x1405561B0 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x1405562DC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x14055B754 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x14055BAF0 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x140572BA0 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x140572C98 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140572D70 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140572E80 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x140573AAC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140574394 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140580430 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140580814 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140595FBC (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405A0C00 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x1405B21E8 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B3C24 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409B5D64 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v4; // rcx
  signed __int32 v5; // ett
  _DWORD *v7; // rcx
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  int v10; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = CurrentPrcb->SchedulerAssist;
    if ( v4 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = v4[6];
        v4[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v7[6] - 1;
          v7[6] = v10;
          if ( !v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
