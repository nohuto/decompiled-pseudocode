/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x1402695B0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14022DD90 (KeQueryLogicalProcessorRelationship.c)
 *     KeInitializeQueue @ 0x1402377B0 (KeInitializeQueue.c)
 *     KiGenericCallDpcWorker @ 0x14023AA60 (KiGenericCallDpcWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14024E85C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     PopCheckForIdleness @ 0x14026F120 (PopCheckForIdleness.c)
 *     KiOutSwapKernelStacks @ 0x140295A90 (KiOutSwapKernelStacks.c)
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14038B530 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x14038D96C (KeAdjustInterruptTime.c)
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 *     KeIpiGenericCall @ 0x1403A4C70 (KeIpiGenericCall.c)
 *     HalpPowerStateCallback @ 0x1403A7040 (HalpPowerStateCallback.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A79F4 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AB068 (HalpTimerStallExecutionProcessor.c)
 *     KiAddProcessorToGroupDatabase @ 0x1403B5C48 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x1403B9250 (KeBalanceSetManager.c)
 *     CcInitializePartition @ 0x1403C2D94 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403C6EF4 (KeInitializePriQueue.c)
 *     HalpTscSynchronization @ 0x1403CE860 (HalpTscSynchronization.c)
 *     HalpMceHandlerWithRendezvous @ 0x1404BB158 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404C18D8 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404C3784 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3800 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1404D4420 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x1404D4670 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404DE260 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x1404EE3EC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F8448 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1404FAA40 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x140501A78 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140504FC0 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x14051161C (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x14051267C (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x140515700 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x140515D3C (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140519FB0 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x14051DD40 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x14053656C (MiStackTheftFreezeProcessors.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054476C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140567998 (PpmSetPlatformIdleDurationHint.c)
 *     ExProcessorCounterSetCallback @ 0x140642A80 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     HalpDispatchPnp @ 0x140765140 (HalpDispatchPnp.c)
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407BBF98 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1407D55E0 (PopCheckSkipTick.c)
 *     HalAllocateHardwareCounters @ 0x1408643E0 (HalAllocateHardwareCounters.c)
 *     HalpCmcWorkerRoutine @ 0x1408645A0 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140866180 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x140866F1C (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14088C26C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140890EC8 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1408BB000 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x14093598C (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x14093EA5C (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x14095AFA0 (NtStartProfile.c)
 *     HaliLocateHiberRanges @ 0x140997620 (HaliLocateHiberRanges.c)
 *     HalpFreeResumeStructures @ 0x1409992DC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099935C (HalpBuildResumeStructures.c)
 *     KeRestoreMtrrBroadcast @ 0x1409A0344 (KeRestoreMtrrBroadcast.c)
 *     HalpInitializeMce @ 0x1409A1D4C (HalpInitializeMce.c)
 *     HalpMceInit @ 0x1409A1E4C (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A2174 (HalpCmciInit.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x1409A2724 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A7BE0 (HalpHandlePreviousMcaErrors.c)
 *     KdpAllowDisable @ 0x1409BADD0 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1409BAE1C (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1409BAF1C (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409BB008 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4E1CC (KiIntSteerInit.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
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
