/*
 * XREFs of EtwWriteEx @ 0x140256C70
 * Callers:
 *     PoTraceSystemTimerResolutionUpdate @ 0x140202B8C (PoTraceSystemTimerResolutionUpdate.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140236BC8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140237034 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402373C0 (PopDiagTraceFxDevicePowered.c)
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x140256C30 (EtwWriteTransfer.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14026DBE0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14026E720 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14026EAE0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeIntSteerPeriodic @ 0x140277270 (KeIntSteerPeriodic.c)
 *     PpmCheckStart @ 0x140277FD0 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x1402785D0 (PpmCheckRun.c)
 *     PpmCheckComputeEnergy @ 0x140278FA0 (PpmCheckComputeEnergy.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopPepWork @ 0x1402D7D28 (PopPepWork.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402D8118 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PpmPerfRecordUtility @ 0x1402E7020 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1402E72D0 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x1402E8470 (PpmPerfSelectProcessorState.c)
 *     IoReuseIrp @ 0x1402EB1A0 (IoReuseIrp.c)
 *     MiAllocateContiguousMemory @ 0x1402F8FFC (MiAllocateContiguousMemory.c)
 *     SeLogAccessFailure @ 0x14030A578 (SeLogAccessFailure.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14030AF7C (PoTraceSystemTimerResolutionKernel.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14031B8DC (PpmEventTraceFailedPerfCheckStart.c)
 *     EtwpTiFillVadEventWrite @ 0x14031CF04 (EtwpTiFillVadEventWrite.c)
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     PopTraceSystemIdleTimeReset @ 0x140320394 (PopTraceSystemIdleTimeReset.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032274C (_tlgWriteEx_EtwWriteEx.c)
 *     PopThermalTraceRundownEvents @ 0x14033C340 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x14033C5FC (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTracePowerRequestChange @ 0x14033D6A4 (PopDiagTracePowerRequestChange.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14033DC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     MiAllocatePagesForMdl @ 0x140342ADC (MiAllocatePagesForMdl.c)
 *     EtwTraceMemoryAcg @ 0x1403579C4 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceIdleCheck @ 0x14035C494 (PopDiagTraceIdleCheck.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x14035D024 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x14035D080 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14035D30C (PopDiagTraceSystemLatencyUpdate.c)
 *     PnpDiagnosticTraceObject @ 0x14036206C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1403621E4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PpmMediaBufferingWorker @ 0x140369670 (PpmMediaBufferingWorker.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036CD94 (McGenEventWrite_EtwWriteTransfer.c)
 *     PopDiagTraceIrpStart @ 0x14036D504 (PopDiagTraceIrpStart.c)
 *     KsepLogEtwMessage @ 0x14036E568 (KsepLogEtwMessage.c)
 *     _tlgWriteAgg @ 0x1403727B4 (_tlgWriteAgg.c)
 *     KiIntSteerLogState @ 0x140374D84 (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x140377E34 (PopDiagTraceIrpFinish.c)
 *     PnpDiagnosticTrace @ 0x140379698 (PnpDiagnosticTrace.c)
 *     PoLatencySensitivityHint @ 0x14037AE20 (PoLatencySensitivityHint.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140388408 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038A8E0 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14038F78C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14038F830 (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14038F8BC (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     IopLogEventIoMgrMountBegin @ 0x14038FA10 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x14038FB08 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140390814 (IopLogEventIoMgrMountFailed.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140395328 (PopDiagTraceDeviceAcquireIrp.c)
 *     PpmEventProcessorPerfStateChange @ 0x140395988 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140395A28 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140395D9C (PopDiagTraceDeviceReleaseIrp.c)
 *     IoTransferActivityId @ 0x140395E60 (IoTransferActivityId.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140396448 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventDomainPerfStateChange @ 0x140397108 (PpmEventDomainPerfStateChange.c)
 *     BapdWriteEtwEvents @ 0x140397B08 (BapdWriteEtwEvents.c)
 *     HalpTscAdvSynchLeader @ 0x140399774 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x1403999B4 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x140399E94 (HalpTscTraceProcessorSynchronization.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039C8CC (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceSetSystemState @ 0x1403A2BBC (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A2D64 (PopDiagTraceFxComponentIdleState.c)
 *     HalpIommuLogEarlyFault @ 0x1403A9108 (HalpIommuLogEarlyFault.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1403B34EC (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1403B35B8 (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x1403B4CC0 (EtwpTraceFileName.c)
 *     WheaLogInternalEvent @ 0x1403B6A80 (WheaLogInternalEvent.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C3BF4 (EtwTraceJobServerSiloMonitorCallback.c)
 *     KsepEvntLogFlagsApplied @ 0x1403C5164 (KsepEvntLogFlagsApplied.c)
 *     HalpTscTraceStatus @ 0x1404BC1C0 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x1404C498C (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1404E8E08 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1404F46D4 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x1404FB1F4 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140502EF8 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140502F3C (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140502FD8 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140503104 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x140503290 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x1405033D0 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x140503500 (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x140503640 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x140503740 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x140503880 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140503A44 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x140503B70 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140503C5C (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140503D04 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140503D68 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140503EA8 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140503FE8 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140504040 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140504098 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x1405040F8 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x1405041B0 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14050424C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x1405043C0 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140504444 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1405044D8 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140504530 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x140504588 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     SecureDump_LogErrorEvent @ 0x140504E60 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14051CD1C (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x14052142C (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x140521F18 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140522044 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140522140 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140522224 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14052233C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x14052243C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140522510 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1405225CC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1405226DC (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1405227D8 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405228BC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405229A0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x140522A9C (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x140522B74 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x140522C7C (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x140522EFC (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140522FFC (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14056A09C (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14056A194 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x14056A238 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x14056A350 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x14056B044 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x14056B0E4 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14056B1F8 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14056B2F0 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14056B4EC (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14056B64C (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14056BB04 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x14056BBE0 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x14056BCA0 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x14056BFF8 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x14056C0B4 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x14056C1AC (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14056C29C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14056C38C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14056C484 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14056C7D0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x14056C8D4 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x14056C9B4 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14056CBAC (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x14056CCEC (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x14056CDFC (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x14056CEF0 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14056CFD8 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14056D088 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14056D144 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14056D2EC (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x14056D38C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceRegisterSystemState @ 0x14056D42C (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x14056D4F4 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x14056D5E4 (PopDiagTraceSleepStudyBlocker.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140572040 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x140573810 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140573968 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140573A88 (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x140573B7C (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140573D14 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140573E1C (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x140573F24 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x14057408C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x14057414C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x14057423C (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x140574358 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x140574438 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x140574558 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x140574630 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x14057483C (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x14057494C (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x140574BA8 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140574D04 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x140574E00 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x140574FAC (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x140575074 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x1405750D8 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140575310 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x1405755B0 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventVpQosChange @ 0x1405757A8 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405770B8 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1405771C0 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x140579678 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x14057A74C (SshpWriteBlocker.c)
 *     SSHSupportEtwWrite @ 0x14057B270 (SSHSupportEtwWrite.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x140597D30 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x140597DFC (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140597F34 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140598000 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140598620 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x14059A5AC (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x1405A2CB4 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x1405A2FF8 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x1405A31D8 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1405A3368 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x1405A372C (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405A48F0 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x1405A4C14 (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x1405B3980 (KitLogFeatureUsage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1405B7958 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1405B7A38 (WheapLogProcessTerminateEvent.c)
 *     EtwpPsProvTraceImage @ 0x14063982C (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x1409267C4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1409268D4 (SmKmEtwLogStoreStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409AE464 (PopDiagTraceFirmwareS3Stats.c)
 *     BapdpRecordIumStatus @ 0x140A3E04C (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x140A46978 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A6F0F8 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x140A91008 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x14026EA90 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v10; // r14d
  NTSTATUS v12; // r9d
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // r10
  unsigned __int64 Keyword; // r8
  unsigned __int8 v18; // al
  __int64 v19; // rax
  unsigned __int8 v21; // r10
  __int64 v22; // r11
  char v23; // r10
  unsigned __int8 v24; // r10
  int v25; // r11d
  PEVENT_DATA_DESCRIPTOR v26; // r14
  unsigned __int8 v27; // r10
  __int64 v28; // r11
  __int64 v29; // [rsp+98h] [rbp-80h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-68h]

  v29 = 0LL;
  v10 = Filter;
  v12 = 0;
  v30 = 0LL;
  v31 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 104);
  v14 = *(unsigned __int8 *)(RegHandle + 100);
  v15 = v13 + 28;
  if ( !v13 )
    v15 = 0LL;
  if ( (_BYTE)v14 )
  {
    v16 = *(_QWORD *)(RegHandle + 32);
    Keyword = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v16 + 96) )
    {
      v18 = *(_BYTE *)(v16 + 100);
      if ( (EventDescriptor->Level <= v18 || !v18)
        && ((*(_DWORD *)(v16 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v16 + 112)) != 0 && (Keyword & *(_QWORD *)(v16 + 120)) == *(_QWORD *)(v16 + 120)) )
      {
        v12 = EtwpEventWriteFull(
                v16,
                v14,
                v10,
                Flags,
                (__int64)EventDescriptor,
                0,
                0,
                (__int64)ActivityId,
                (__int64)RelatedActivityId,
                UserDataCount,
                (__int64)UserData,
                0LL,
                (__int64)&v30,
                0LL,
                *(_WORD *)(RegHandle + 98),
                v15,
                (__int64)&v29);
      }
    }
  }
  if ( *(_BYTE *)(RegHandle + 101)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(RegHandle + 40) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
            *(_QWORD *)(RegHandle + 32),
            v21,
            v10,
            Flags,
            (__int64)EventDescriptor,
            0,
            0,
            (__int64)ActivityId,
            (__int64)RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            0LL,
            (__int64)&v30,
            v22,
            *(_WORD *)(RegHandle + 98),
            v15,
            (__int64)&v29);
  }
  v19 = *(_QWORD *)(RegHandle + 32);
  if ( *(_QWORD *)(v19 + 400) )
  {
    v23 = *(_BYTE *)(RegHandle + 102);
    v30 = 0LL;
    v31 = 0LL;
    if ( v23 )
    {
      v26 = UserData;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(v19 + 400) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword) )
        v12 = EtwpEventWriteFull(
                v25,
                v24,
                0,
                Flags,
                (__int64)EventDescriptor,
                0,
                0,
                (__int64)ActivityId,
                (__int64)RelatedActivityId,
                UserDataCount,
                (__int64)UserData,
                0LL,
                (__int64)&v30,
                0LL,
                *(_WORD *)(RegHandle + 98),
                v15,
                (__int64)&v29);
    }
    else
    {
      v26 = UserData;
    }
    if ( *(_BYTE *)(RegHandle + 103) )
    {
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 400LL) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword) )
        return EtwpEventWriteFull(
                 *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 400LL),
                 v27,
                 0,
                 Flags,
                 (__int64)EventDescriptor,
                 0,
                 0,
                 (__int64)ActivityId,
                 (__int64)RelatedActivityId,
                 UserDataCount,
                 (__int64)v26,
                 0LL,
                 (__int64)&v30,
                 v28,
                 *(_WORD *)(RegHandle + 98),
                 v15,
                 (__int64)&v29);
    }
  }
  return v12;
}
