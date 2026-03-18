/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140219190
 * Callers:
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     KeInitializeQueue @ 0x140315F10 (KeInitializeQueue.c)
 *     KiGenericCallDpcWorker @ 0x14031A150 (KiGenericCallDpcWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14032E798 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KiOutSwapKernelStacks @ 0x140335620 (KiOutSwapKernelStacks.c)
 *     PopCheckForIdleness @ 0x140340000 (PopCheckForIdleness.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14035FA70 (KeQueryLogicalProcessorRelationship.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14038AC90 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x14038D0FC (KeAdjustInterruptTime.c)
 *     PpmIdleSelectStates @ 0x140395110 (PpmIdleSelectStates.c)
 *     KeIpiGenericCall @ 0x1403A4260 (KeIpiGenericCall.c)
 *     HalpPowerStateCallback @ 0x1403A6630 (HalpPowerStateCallback.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A6FE4 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B0328 (HalpTimerStallExecutionProcessor.c)
 *     KiAddProcessorToGroupDatabase @ 0x1403B4458 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x1403B86E0 (KeBalanceSetManager.c)
 *     CcInitializePartition @ 0x1403C2114 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403C6364 (KeInitializePriQueue.c)
 *     HalpTscSynchronization @ 0x1403CDC30 (HalpTscSynchronization.c)
 *     HalpMceHandlerWithRendezvous @ 0x1404B9558 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404BFCC8 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404C1B74 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C1BF0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1404D2810 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x1404D2A60 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404DC610 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x1404EC8CC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F6928 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1404F8F20 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x1404FFF78 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1405034C0 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x14050F8AC (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x14051090C (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x140513980 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x140513FBC (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140518230 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x14051C020 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x14053482C (MiStackTheftFreezeProcessors.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x140542A2C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140565C88 (PpmSetPlatformIdleDurationHint.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1406F8CE0 (ExProcessorCounterSetCallback.c)
 *     HalpDispatchPnp @ 0x140761CB0 (HalpDispatchPnp.c)
 *     PopInitializeHeteroProcessors @ 0x1407B5FAC (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407B6BA8 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1407D0FF0 (PopCheckSkipTick.c)
 *     HalAllocateHardwareCounters @ 0x140866680 (HalAllocateHardwareCounters.c)
 *     HalpCmcWorkerRoutine @ 0x140866840 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140868410 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x1408691AC (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14088EB6C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140893798 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1408BD9C0 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x140937FEC (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x1409410BC (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x14095D550 (NtStartProfile.c)
 *     HaliLocateHiberRanges @ 0x140999550 (HaliLocateHiberRanges.c)
 *     HalpFreeResumeStructures @ 0x14099B0EC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099B16C (HalpBuildResumeStructures.c)
 *     KeRestoreMtrrBroadcast @ 0x1409A1B40 (KeRestoreMtrrBroadcast.c)
 *     HalpInitializeMce @ 0x1409A35FC (HalpInitializeMce.c)
 *     HalpMceInit @ 0x1409A36FC (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A3A24 (HalpCmciInit.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x1409A3FD4 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A9DE4 (HalpHandlePreviousMcaErrors.c)
 *     KdpAllowDisable @ 0x1409BCDD0 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1409BCE1C (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1409BCF1C (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409BD008 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4BC2C (KiIntSteerInit.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
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
