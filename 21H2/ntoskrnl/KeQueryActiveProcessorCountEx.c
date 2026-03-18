/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140348830
 * Callers:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140259B30 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     KiOutSwapKernelStacks @ 0x140299FBC (KiOutSwapKernelStacks.c)
 *     PopCheckForIdleness @ 0x1402D66F0 (PopCheckForIdleness.c)
 *     KiGenericCallDpcWorker @ 0x1402D9F70 (KiGenericCallDpcWorker.c)
 *     KdpSetCommonState @ 0x1402DAB78 (KdpSetCommonState.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x140302930 (KiUpdateProcessConcurrencyCounts.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140304A20 (PpmCheckSnapAllDeliveredPerformance.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140397F20 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140398D58 (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     HalpPowerStateCallback @ 0x1403B60E0 (HalpPowerStateCallback.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403B6AC0 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403BC8C4 (HalpTimerStallExecutionProcessor.c)
 *     KiAssignProcessorNumberToPrcb @ 0x1403C2378 (KiAssignProcessorNumberToPrcb.c)
 *     KeBalanceSetManager @ 0x1403C81D0 (KeBalanceSetManager.c)
 *     CcInitializePartition @ 0x1403D0FE0 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403D4EC8 (KeInitializePriQueue.c)
 *     HalpTscSynchronization @ 0x1403DD730 (HalpTscSynchronization.c)
 *     KeQueryActiveProcessorCount @ 0x1403DF670 (KeQueryActiveProcessorCount.c)
 *     HalpMceHandlerWithRendezvous @ 0x1405079C8 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050DC38 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050F964 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050F9E0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1405213F0 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x140521670 (EmonRemoveProfileSource.c)
 *     Amd64InitializeUncoreProfiling @ 0x14052BFC0 (Amd64InitializeUncoreProfiling.c)
 *     Amd64RemoveProfileSource @ 0x14052C660 (Amd64RemoveProfileSource.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x14053C908 (CcInitializePrivateVolumeCacheMap.c)
 *     DbgkpLkmdSnapGlobals @ 0x1405402EC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x14054A188 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x14054C880 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x140551F78 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 *     KiDynamicProcessorInitialization @ 0x14056918C (KiDynamicProcessorInitialization.c)
 *     KeCheckForTimer @ 0x14056DBFC (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x14056F980 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140573670 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x140590CF0 (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1405C8B90 (PpmSetPlatformIdleDurationHint.c)
 *     ExProcessorCounterSetCallback @ 0x1406D0CB0 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14084A618 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x140865194 (PopCheckSkipTick.c)
 *     HalAllocateHardwareCounters @ 0x1409084C0 (HalAllocateHardwareCounters.c)
 *     HalpCmcWorkerRoutine @ 0x140908680 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x14090A1A0 (HalpLoadMicrocode.c)
 *     HalpLoadMicrocodeSerialized @ 0x14090A314 (HalpLoadMicrocodeSerialized.c)
 *     HalpLbrConfigurationWorker @ 0x14090B0BC (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14092EB58 (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x1409339DC (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x140960D50 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x1409EB100 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140A06B80 (NtStartProfile.c)
 *     HalpBuildResumeStructures @ 0x140A522B8 (HalpBuildResumeStructures.c)
 *     KeRestoreMtrrBroadcast @ 0x140A5A248 (KeRestoreMtrrBroadcast.c)
 *     HalpInitializeMce @ 0x140A5A6CC (HalpInitializeMce.c)
 *     HalpMceInit @ 0x140A5A7C8 (HalpMceInit.c)
 *     HalpCmciInit @ 0x140A5AAF0 (HalpCmciInit.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A5B7B4 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A61424 (HalpHandlePreviousMcaErrors.c)
 *     KdpSysReadControlSpace @ 0x140A70AE0 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140A70C44 (KdpSysWriteControlSpace.c)
 *     KdpGetStateChange @ 0x140A70CEC (KdpGetStateChange.c)
 *     KdpAllowDisable @ 0x140A746D0 (KdpAllowDisable.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     IntpAllocateProcessorContext @ 0x140B01F80 (IntpAllocateProcessorContext.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B02040 (KiIntSteerDetermineSteeringEnabled.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_140D06E48[GroupNumber] - (((unsigned __int64)qword_140D06E48[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
