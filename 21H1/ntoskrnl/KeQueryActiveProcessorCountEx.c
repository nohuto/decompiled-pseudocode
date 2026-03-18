/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140328380
 * Callers:
 *     KeStallExecutionProcessor @ 0x140278400 (KeStallExecutionProcessor.c)
 *     KiGenericCallDpcWorker @ 0x14030B850 (KiGenericCallDpcWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140320100 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140327220 (KeQueryLogicalProcessorRelationship.c)
 *     KeInitializeQueue @ 0x140328320 (KeInitializeQueue.c)
 *     KiOutSwapKernelStacks @ 0x14032A2DC (KiOutSwapKernelStacks.c)
 *     PopCheckForIdleness @ 0x14035C8C0 (PopCheckForIdleness.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140387A80 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140389D8C (KeAdjustInterruptTime.c)
 *     PpmIdleSelectStates @ 0x140392080 (PpmIdleSelectStates.c)
 *     KeIpiGenericCall @ 0x1403A1600 (KeIpiGenericCall.c)
 *     HalpPowerStateCallback @ 0x1403A3AB0 (HalpPowerStateCallback.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A4464 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403A6C78 (HalpTimerStallExecutionProcessor.c)
 *     KiAddProcessorToGroupDatabase @ 0x1403ABE68 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x1403B4E10 (KeBalanceSetManager.c)
 *     CcInitializePartition @ 0x1403BD90C (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403C2D34 (KeInitializePriQueue.c)
 *     HalpTscSynchronization @ 0x1403CA230 (HalpTscSynchronization.c)
 *     HalpMceHandlerWithRendezvous @ 0x1404B5958 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404BC0C8 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404BDF74 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BDFF0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1404CEDC0 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x1404CF010 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404D8B70 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x1404E8A0C (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F2A68 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1404F5040 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x1404FC058 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1404FF5A0 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x14050B92C (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x14050C98C (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x14050FA00 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x14051003C (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1405142B0 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140518000 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x14053080C (MiStackTheftFreezeProcessors.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14053EA0C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140561C58 (PpmSetPlatformIdleDurationHint.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1406F0210 (ExProcessorCounterSetCallback.c)
 *     HalpDispatchPnp @ 0x14074EA40 (HalpDispatchPnp.c)
 *     PopInitializeHeteroProcessors @ 0x1407A5838 (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407A6144 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1407BF2F0 (PopCheckSkipTick.c)
 *     HalAllocateHardwareCounters @ 0x14085F910 (HalAllocateHardwareCounters.c)
 *     HalpCmcWorkerRoutine @ 0x14085FAD0 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x1408616D0 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x14086246C (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x140887CFC (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x14088C928 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1408B6A80 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x140930F0C (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x140939FEC (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x1409560C0 (NtStartProfile.c)
 *     HaliLocateHiberRanges @ 0x140991DB0 (HaliLocateHiberRanges.c)
 *     HalpFreeResumeStructures @ 0x14099394C (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x1409939CC (HalpBuildResumeStructures.c)
 *     KeRestoreMtrrBroadcast @ 0x14099A2A4 (KeRestoreMtrrBroadcast.c)
 *     HalpInitializeMce @ 0x14099BD5C (HalpInitializeMce.c)
 *     HalpMceInit @ 0x14099BE5C (HalpMceInit.c)
 *     HalpCmciInit @ 0x14099C184 (HalpCmciInit.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x14099C734 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A3048 (HalpHandlePreviousMcaErrors.c)
 *     KdpAllowDisable @ 0x1409B6DD0 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1409B6E1C (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1409B6F1C (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409B7008 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A40168 (KiIntSteerInit.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
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
    v2 = qword_140CFC838[GroupNumber] - (((unsigned __int64)qword_140CFC838[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
