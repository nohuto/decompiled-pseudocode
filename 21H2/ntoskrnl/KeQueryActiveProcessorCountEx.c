/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x14027B610
 * Callers:
 *     KeStallExecutionProcessor @ 0x14022A880 (KeStallExecutionProcessor.c)
 *     PopCheckForIdleness @ 0x140280EE0 (PopCheckForIdleness.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AFA30 (KeQueryLogicalProcessorRelationship.c)
 *     KeInitializeQueue @ 0x1402B95A0 (KeInitializeQueue.c)
 *     KiGenericCallDpcWorker @ 0x1402BC4D0 (KiGenericCallDpcWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402D04DC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KiOutSwapKernelStacks @ 0x1402E4740 (KiOutSwapKernelStacks.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14038B3E0 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x14038D81C (KeAdjustInterruptTime.c)
 *     PpmIdleSelectStates @ 0x140395580 (PpmIdleSelectStates.c)
 *     KeIpiGenericCall @ 0x1403A4B20 (KeIpiGenericCall.c)
 *     HalpPowerStateCallback @ 0x1403A6EF0 (HalpPowerStateCallback.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A78A4 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AA2D8 (HalpTimerStallExecutionProcessor.c)
 *     KiAddProcessorToGroupDatabase @ 0x1403B5AD8 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x1403B90E0 (KeBalanceSetManager.c)
 *     CcInitializePartition @ 0x1403C2964 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403C6D54 (KeInitializePriQueue.c)
 *     HalpTscSynchronization @ 0x1403CE6F0 (HalpTscSynchronization.c)
 *     HalpMceHandlerWithRendezvous @ 0x1404BAF18 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404C1698 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404C3544 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C35C0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1404D41E0 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x1404D4430 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404DE020 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x1404EE1AC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F84C8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1404FAAC0 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x140501AF8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140505040 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x1405113DC (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x14051243C (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x1405154C0 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x140515AFC (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140519D70 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x14051DB00 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x14053632C (MiStackTheftFreezeProcessors.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054452C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140567758 (PpmSetPlatformIdleDurationHint.c)
 *     ExProcessorCounterSetCallback @ 0x14064DC60 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     HalpDispatchPnp @ 0x140764F80 (HalpDispatchPnp.c)
 *     PopInitializeHeteroProcessors @ 0x1407BAC0C (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407BB808 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1407D5470 (PopCheckSkipTick.c)
 *     HalAllocateHardwareCounters @ 0x140864280 (HalAllocateHardwareCounters.c)
 *     HalpCmcWorkerRoutine @ 0x140864440 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140866020 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x140866DBC (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14088C10C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140890D68 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1408BAEA0 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x1409357BC (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x14093E88C (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x14095ADD0 (NtStartProfile.c)
 *     HaliLocateHiberRanges @ 0x140996620 (HaliLocateHiberRanges.c)
 *     HalpFreeResumeStructures @ 0x1409982DC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099835C (HalpBuildResumeStructures.c)
 *     KeRestoreMtrrBroadcast @ 0x14099F414 (KeRestoreMtrrBroadcast.c)
 *     HalpInitializeMce @ 0x1409A0E1C (HalpInitializeMce.c)
 *     HalpMceInit @ 0x1409A0F1C (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A1244 (HalpCmciInit.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x1409A17F4 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A6CB0 (HalpHandlePreviousMcaErrors.c)
 *     KdpAllowDisable @ 0x1409B9DD0 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1409B9E1C (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1409B9F1C (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409BA008 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4D1CC (KiIntSteerInit.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
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
    v2 = qword_140CFC848[GroupNumber] - (((unsigned __int64)qword_140CFC848[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
