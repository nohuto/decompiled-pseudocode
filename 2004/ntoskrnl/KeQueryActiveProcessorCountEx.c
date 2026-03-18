/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x1402DE560
 * Callers:
 *     KeStallExecutionProcessor @ 0x14021F3B0 (KeStallExecutionProcessor.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402DD500 (KeQueryLogicalProcessorRelationship.c)
 *     KeInitializeQueue @ 0x1402DE500 (KeInitializeQueue.c)
 *     PopCheckForIdleness @ 0x1402DE700 (PopCheckForIdleness.c)
 *     KiOutSwapKernelStacks @ 0x1402E51AC (KiOutSwapKernelStacks.c)
 *     KiGenericCallDpcWorker @ 0x140349550 (KiGenericCallDpcWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14035DCDC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1403889F0 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x14038ADFC (KeAdjustInterruptTime.c)
 *     PpmIdleSelectStates @ 0x140392C50 (PpmIdleSelectStates.c)
 *     KeIpiGenericCall @ 0x1403A1D90 (KeIpiGenericCall.c)
 *     HalpPowerStateCallback @ 0x1403A4210 (HalpPowerStateCallback.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A4BE4 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403ADD38 (HalpTimerStallExecutionProcessor.c)
 *     KiAddProcessorToGroupDatabase @ 0x1403B1AE8 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x1403B5C40 (KeBalanceSetManager.c)
 *     CcInitializePartition @ 0x1403BE89C (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403C3BF4 (KeInitializePriQueue.c)
 *     HalpTscSynchronization @ 0x1403CB010 (HalpTscSynchronization.c)
 *     HalpMceHandlerWithRendezvous @ 0x1404B6038 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404BC7A8 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404BE654 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BE6D0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1404CF270 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x1404CF4C0 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404D9080 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x1404E903C (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F30B8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1404F5690 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x1404FC6A8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1404FFBF0 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x14050BF7C (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x14050CFDC (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x140510050 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x14051068C (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140514900 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140518650 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x140530E5C (MiStackTheftFreezeProcessors.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14053F05C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1405622A8 (PpmSetPlatformIdleDurationHint.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1406A6580 (ExProcessorCounterSetCallback.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     HalpDispatchPnp @ 0x1407530D0 (HalpDispatchPnp.c)
 *     PopInitializeHeteroProcessors @ 0x1407A7F88 (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407A8B84 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1407C27F0 (PopCheckSkipTick.c)
 *     HalAllocateHardwareCounters @ 0x140860C60 (HalAllocateHardwareCounters.c)
 *     HalpCmcWorkerRoutine @ 0x140860E20 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x1408629F0 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x14086378C (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14088901C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x14088DC48 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1408B7DA0 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x1409321BC (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x14093B28C (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140957790 (NtStartProfile.c)
 *     HaliLocateHiberRanges @ 0x1409933F0 (HaliLocateHiberRanges.c)
 *     HalpFreeResumeStructures @ 0x140994F8C (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099500C (HalpBuildResumeStructures.c)
 *     KeRestoreMtrrBroadcast @ 0x14099BA40 (KeRestoreMtrrBroadcast.c)
 *     HalpInitializeMce @ 0x14099D4FC (HalpInitializeMce.c)
 *     HalpMceInit @ 0x14099D5FC (HalpMceInit.c)
 *     HalpCmciInit @ 0x14099D924 (HalpCmciInit.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x14099DED4 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A3E88 (HalpHandlePreviousMcaErrors.c)
 *     KdpAllowDisable @ 0x1409B6DD0 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1409B6E1C (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1409B6F1C (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409B7008 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4598C (KiIntSteerInit.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
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
