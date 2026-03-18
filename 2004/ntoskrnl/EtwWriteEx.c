/*
 * XREFs of EtwWriteEx @ 0x1402934F0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140214B90 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402156D0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140215A90 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeIntSteerPeriodic @ 0x14021E220 (KeIntSteerPeriodic.c)
 *     PpmCheckStart @ 0x14021EF80 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x14021F580 (PpmCheckRun.c)
 *     PpmCheckComputeEnergy @ 0x14021FF50 (PpmCheckComputeEnergy.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagTracePowerRequestChange @ 0x1402763B4 (PopDiagTracePowerRequestChange.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140277254 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140278478 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140278680 (PopThermalTraceRundownEvents.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x1402934B0 (EtwWriteTransfer.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402C99F8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1402C9E64 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402CA1F0 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1402DEF14 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1402DEF70 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1402DF1FC (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTraceIdleCheck @ 0x1402DF384 (PopDiagTraceIdleCheck.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1402E18D0 (PoTraceSystemTimerResolutionUpdate.c)
 *     PopPepWork @ 0x1402E3E30 (PopPepWork.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402E4228 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402F2E40 (PoTraceSystemTimerResolutionKernel.c)
 *     EtwTraceMemoryAcg @ 0x1402FB9E4 (EtwTraceMemoryAcg.c)
 *     MiAllocatePagesForMdl @ 0x14031379C (MiAllocatePagesForMdl.c)
 *     PpmPerfRecordUtility @ 0x140321CA0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140321F50 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x1403230F0 (PpmPerfSelectProcessorState.c)
 *     IoReuseIrp @ 0x140324AD0 (IoReuseIrp.c)
 *     MiAllocateContiguousMemory @ 0x14033602C (MiAllocateContiguousMemory.c)
 *     SeLogAccessFailure @ 0x140346E78 (SeLogAccessFailure.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1403594AC (PpmEventTraceFailedPerfCheckStart.c)
 *     EtwpTiFillVadEventWrite @ 0x14035AAE4 (EtwpTiFillVadEventWrite.c)
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 *     PopTraceSystemIdleTimeReset @ 0x14035DFB4 (PopTraceSystemIdleTimeReset.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14036005C (_tlgWriteEx_EtwWriteEx.c)
 *     PnpDiagnosticTraceObject @ 0x140362B50 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140362CD4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PpmMediaBufferingWorker @ 0x14036A030 (PpmMediaBufferingWorker.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036C65C (McGenEventWrite_EtwWriteTransfer.c)
 *     PopDiagTraceIrpStart @ 0x14036D1A4 (PopDiagTraceIrpStart.c)
 *     KsepLogEtwMessage @ 0x14036F198 (KsepLogEtwMessage.c)
 *     _tlgWriteAgg @ 0x1403735C4 (_tlgWriteAgg.c)
 *     KiIntSteerLogState @ 0x140375B94 (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x140378C44 (PopDiagTraceIrpFinish.c)
 *     PnpDiagnosticTrace @ 0x14037A540 (PnpDiagnosticTrace.c)
 *     PoLatencySensitivityHint @ 0x14037BBA0 (PoLatencySensitivityHint.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140389378 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038B454 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1403902FC (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x1403903A0 (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14039042C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     IopLogEventIoMgrMountBegin @ 0x140390580 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140390678 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140391384 (IopLogEventIoMgrMountFailed.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140395EF8 (PopDiagTraceDeviceAcquireIrp.c)
 *     PpmEventProcessorPerfStateChange @ 0x140396558 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x1403965F8 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x14039696C (PopDiagTraceDeviceReleaseIrp.c)
 *     IoTransferActivityId @ 0x140396A30 (IoTransferActivityId.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140397058 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventDomainPerfStateChange @ 0x140397D18 (PpmEventDomainPerfStateChange.c)
 *     HalpTscAdvSynchLeader @ 0x140399F04 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14039A144 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039A624 (HalpTscTraceProcessorSynchronization.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039D05C (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceSetSystemState @ 0x1403A334C (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A34F4 (PopDiagTraceFxComponentIdleState.c)
 *     BapdWriteEtwEvents @ 0x1403A4FCC (BapdWriteEtwEvents.c)
 *     HalpIommuLogEarlyFault @ 0x1403B01C8 (HalpIommuLogEarlyFault.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1403B4010 (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1403B40DC (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x1403B5AF0 (EtwpTraceFileName.c)
 *     WheaLogInternalEvent @ 0x1403B78B0 (WheaLogInternalEvent.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C4AB4 (EtwTraceJobServerSiloMonitorCallback.c)
 *     KsepEvntLogFlagsApplied @ 0x1403C60D4 (KsepEvntLogFlagsApplied.c)
 *     HalpTscTraceStatus @ 0x1404BC8A0 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x1404C4E3C (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1404E9438 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1404F4D24 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x1404FB844 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140503548 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x14050358C (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140503628 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140503754 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x1405038E0 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140503A20 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x140503B50 (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x140503C90 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x140503D90 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x140503ED0 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140504094 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x1405041C0 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405042AC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140504354 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x1405043B8 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x1405044F8 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140504638 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140504690 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1405046E8 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140504748 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140504800 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14050489C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140504A10 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140504A94 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x140504B28 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140504B80 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x140504BD8 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     SecureDump_LogErrorEvent @ 0x1405054B0 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14051D36C (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x140521A7C (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x140522568 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140522694 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140522790 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140522874 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14052298C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x140522A8C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140522B60 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x140522C1C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x140522D2C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x140522E28 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x140522F0C (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x140522FF0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405230EC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405231C4 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405232CC (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14052354C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14052364C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14056A6EC (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14056A7E4 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x14056A888 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x14056A9A0 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x14056B694 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x14056B734 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14056B848 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14056B940 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14056BB3C (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14056BC9C (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14056C154 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x14056C230 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x14056C2F0 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x14056C648 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x14056C704 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x14056C7FC (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14056C8EC (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14056C9DC (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14056CAD4 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14056CE20 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x14056CF24 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x14056D004 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14056D1FC (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x14056D33C (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x14056D44C (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x14056D540 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14056D628 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14056D6D8 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14056D794 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14056D93C (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x14056D9DC (PopDiagTraceIrpPended.c)
 *     PopDiagTraceRegisterSystemState @ 0x14056DA7C (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x14056DB44 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x14056DC34 (PopDiagTraceSleepStudyBlocker.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140572690 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x140573E60 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140573FB8 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x1405740D8 (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1405741CC (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140574364 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x14057446C (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x140574574 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x1405746DC (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x14057479C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x14057488C (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1405749A8 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x140574A88 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x140574BA8 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x140574C80 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x140574E8C (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x140574F9C (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x1405751F8 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140575354 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x140575450 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x1405755FC (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1405756C4 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x140575728 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140575960 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x140575C00 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventVpQosChange @ 0x140575DF8 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x140577708 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x140577810 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x140579CB8 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x14057AD8C (SshpWriteBlocker.c)
 *     SSHSupportEtwWrite @ 0x14057B8B0 (SSHSupportEtwWrite.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x140598420 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1405984EC (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140598624 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1405986F0 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140598D10 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x14059AC9C (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x1405A33A4 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x1405A36E8 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x1405A38C8 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1405A3A58 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x1405A3E1C (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405A4FE0 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x1405A5304 (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x1405B40A0 (KitLogFeatureUsage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1405B8078 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1405B8158 (WheapLogProcessTerminateEvent.c)
 *     EtwpPsProvTraceImage @ 0x1406047EC (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x140927A74 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140927B84 (SmKmEtwLogStoreStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409AF2C4 (PopDiagTraceFirmwareS3Stats.c)
 *     BapdpRecordIumStatus @ 0x140A43900 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x140A61E04 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A6FB1C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x140A90610 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140215A40 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
    && EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 96LL, EventDescriptor->Level, EventDescriptor->Keyword) )
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
      if ( EtwpLevelKeywordEnabled(*(_QWORD *)(v19 + 400) + 96LL, EventDescriptor->Level, EventDescriptor->Keyword) )
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
      if ( EtwpLevelKeywordEnabled(
             *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 400LL) + 96LL,
             EventDescriptor->Level,
             EventDescriptor->Keyword) )
      {
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
  }
  return v12;
}
