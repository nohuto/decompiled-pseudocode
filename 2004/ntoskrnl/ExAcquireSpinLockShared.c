/*
 * XREFs of ExAcquireSpinLockShared @ 0x140228470
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     MiEndingOffsetWithLock @ 0x1402245D4 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x1402246C8 (MiStartingOffsetNeedLock.c)
 *     MmIsFileObjectAPagingFile @ 0x140227A0C (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140227FA0 (IoSetDiskIoAttributionFromThread.c)
 *     PfSnGetFileInformation @ 0x1402280F0 (PfSnGetFileInformation.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     MiGetControlAreaPtes @ 0x14024959C (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x14024A460 (MiLocateSubsectionNode.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x14024C9E0 (ExReferenceCallBackBlock.c)
 *     MiFindLastSubsection @ 0x140265FD4 (MiFindLastSubsection.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140269674 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExProtectPoolEx @ 0x14027033C (ExProtectPoolEx.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140278610 (PopPepGetDevicePlatformStateDependents.c)
 *     IopFindDiskIoAttribution @ 0x14027A1E0 (IopFindDiskIoAttribution.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402961C0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x140296A80 (PsGetWorkOnBehalfThread.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C844C (IopReferenceIoAttributionFromProcess.c)
 *     RtlpHpAcquireLockShared @ 0x1402CB544 (RtlpHpAcquireLockShared.c)
 *     PopPepLockActivityLink @ 0x1402CF340 (PopPepLockActivityLink.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402D8ECC (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x1402D9B88 (RtlpCSparseBitmapLock.c)
 *     MiGetPageFromSlabAllocator @ 0x1402E10BC (MiGetPageFromSlabAllocator.c)
 *     MiFindFreePageFileSpace @ 0x14030F5B4 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14030FD08 (MiPageFileLargestBitmapsRun.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTrimSection @ 0x14031E730 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x14032106C (MiReferencePfBackedSection.c)
 *     MiIsProbeActive @ 0x140335290 (MiIsProbeActive.c)
 *     ExRemovePoolTag @ 0x140337BD8 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x14033844C (MiLookupIoPageNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033B124 (MiSystemImageHasPrivateFixups.c)
 *     PsGetNextPartitionUnsafe @ 0x140343E98 (PsGetNextPartitionUnsafe.c)
 *     MiGetPrototypePteRanges @ 0x1403584E8 (MiGetPrototypePteRanges.c)
 *     MiAllocateCombineProto @ 0x140365B80 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036D044 (PopFxLockDevice.c)
 *     MiFreePageToSlabAllocator @ 0x140372E60 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140373690 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037B010 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x1403897A4 (MiKernelStackVaToStackNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C54E0 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CB88C (HalpQueryNumaRangeTableInformation.c)
 *     MmUnmapReservedMapping @ 0x14052C7C0 (MmUnmapReservedMapping.c)
 *     MiGenerateAccessViolation @ 0x140543090 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x14054DAC0 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x1405527E0 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x14055290C (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x140557D84 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x140558120 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x14056F170 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x14056F268 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x14056F340 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14056F450 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14057007C (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140570964 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x14057CA00 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14057CDE4 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14059251C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14059D160 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x1405AE688 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B00C4 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409AFDF4 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140329910 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B06F4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
