/*
 * XREFs of EtwWriteEx @ 0x14020E0B0
 * Callers:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x14020E070 (EtwWriteTransfer.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402460C4 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140246660 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140246AD4 (PopDiagTraceFxComponentLogicalCondition.c)
 *     MiAllocateContiguousMemory @ 0x14025FFCC (MiAllocateContiguousMemory.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14027F600 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140280140 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140280500 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeIntSteerPeriodic @ 0x140287F00 (KeIntSteerPeriodic.c)
 *     PpmCheckRun @ 0x1402887D0 (PpmCheckRun.c)
 *     PpmCheckStart @ 0x1402888C0 (PpmCheckStart.c)
 *     EtwTraceMemoryAcg @ 0x1402EBFB4 (EtwTraceMemoryAcg.c)
 *     PpmPerfRecordUtility @ 0x1402EDB30 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1402EDDE0 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x1402EF8E0 (PpmPerfSelectProcessorState.c)
 *     IoReuseIrp @ 0x1402F4000 (IoReuseIrp.c)
 *     PpmCheckComputeEnergy @ 0x1402F42F0 (PpmCheckComputeEnergy.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14030BF0C (PpmEventTraceFailedPerfCheckStart.c)
 *     SeLogAccessFailure @ 0x140318300 (SeLogAccessFailure.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140318F4C (PoTraceSystemTimerResolutionKernel.c)
 *     EtwpTiFillVadEventWrite @ 0x14032B6A4 (EtwpTiFillVadEventWrite.c)
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 *     PopDiagTraceIdleCheck @ 0x14032D8F4 (PopDiagTraceIdleCheck.c)
 *     PopThermalTraceRundownEvents @ 0x140330ADC (PopThermalTraceRundownEvents.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140330EEC (_tlgWriteEx_EtwWriteEx.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1403318A8 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     MiAllocatePagesForMdl @ 0x1403342D4 (MiAllocatePagesForMdl.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14033BDD8 (PoTraceSystemTimerResolutionUpdate.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14033EDC4 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopPepWork @ 0x14033EF3C (PopPepWork.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14033F378 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x14033FF14 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x14033FF70 (PopDiagTraceSetDeepSleepConstraint.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140361624 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopDiagTracePowerRequestChange @ 0x140362774 (PopDiagTracePowerRequestChange.c)
 *     PopTraceSystemIdleTimeReset @ 0x140364478 (PopTraceSystemIdleTimeReset.c)
 *     PnpDiagnosticTraceObject @ 0x140364A08 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364B84 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PpmMediaBufferingWorker @ 0x14036C010 (PpmMediaBufferingWorker.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036E63C (McGenEventWrite_EtwWriteTransfer.c)
 *     PopDiagTraceIrpStart @ 0x14036FDA4 (PopDiagTraceIrpStart.c)
 *     KsepLogEtwMessage @ 0x1403710E8 (KsepLogEtwMessage.c)
 *     _tlgWriteAgg @ 0x140375C84 (_tlgWriteAgg.c)
 *     KiIntSteerLogState @ 0x140377B24 (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x14037A974 (PopDiagTraceIrpFinish.c)
 *     PnpDiagnosticTrace @ 0x14037C270 (PnpDiagnosticTrace.c)
 *     PoLatencySensitivityHint @ 0x14037D8D0 (PoLatencySensitivityHint.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14038B618 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038D8C0 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1403927BC (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140392860 (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1403928EC (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     IopLogEventIoMgrMountBegin @ 0x140392A40 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140392B38 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140393844 (IopLogEventIoMgrMountFailed.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x1403983B8 (PopDiagTraceDeviceAcquireIrp.c)
 *     PpmEventProcessorPerfStateChange @ 0x140398A18 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140398AB8 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140398E2C (PopDiagTraceDeviceReleaseIrp.c)
 *     IoTransferActivityId @ 0x140398EF0 (IoTransferActivityId.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403994D8 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventDomainPerfStateChange @ 0x14039A198 (PpmEventDomainPerfStateChange.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039C44C (PopDiagTraceFxDevicePowerState.c)
 *     HalpTscAdvSynchLeader @ 0x14039D054 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14039D294 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039D774 (HalpTscTraceProcessorSynchronization.c)
 *     PopDiagTraceSetSystemState @ 0x1403A570C (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A58C4 (PopDiagTraceFxComponentIdleState.c)
 *     BapdWriteEtwEvents @ 0x1403A73CC (BapdWriteEtwEvents.c)
 *     HalpIommuLogEarlyFault @ 0x1403B27B8 (HalpIommuLogEarlyFault.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1403B6CAC (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1403B6D78 (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x1403B84E0 (EtwpTraceFileName.c)
 *     WheaLogInternalEvent @ 0x1403BA350 (WheaLogInternalEvent.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C7554 (EtwTraceJobServerSiloMonitorCallback.c)
 *     KsepEvntLogFlagsApplied @ 0x1403C8B64 (KsepEvntLogFlagsApplied.c)
 *     HalpTscTraceStatus @ 0x1404BFDC0 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x1404C836C (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1404ECCC8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1404F8594 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x1404FF118 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140506F58 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140506F9C (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140507038 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140507164 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x1405072F0 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140507430 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x140507560 (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x1405076A0 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x1405077A0 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x1405078E0 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140507AA4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x140507BD0 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140507CBC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140507D64 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140507DC8 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140507F08 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140508048 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x1405080A0 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1405080F8 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140508158 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140508210 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x1405082AC (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140508420 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1405084A4 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x140508538 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140508590 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x1405085E8 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     SecureDump_LogErrorEvent @ 0x140508EC0 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x140520D3C (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x14052544C (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x140525F38 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140526064 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140526160 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140526244 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14052635C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x14052645C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140526530 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1405265EC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1405266FC (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1405267F8 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405268DC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405269C0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x140526ABC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x140526B94 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x140526C9C (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x140526F1C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14052701C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14056E11C (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14056E214 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x14056E2B8 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x14056E3D0 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x14056F0C4 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x14056F164 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14056F278 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14056F370 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14056F56C (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14056F6CC (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14056FB84 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x14056FC60 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x14056FD20 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x140570078 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140570134 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x14057022C (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14057031C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14057040C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140570504 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140570850 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140570954 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140570A34 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x140570C2C (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x140570D6C (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x140570E7C (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140570F70 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140571058 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140571108 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1405711C4 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14057136C (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x14057140C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceRegisterSystemState @ 0x1405714AC (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x140571574 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140571664 (PopDiagTraceSleepStudyBlocker.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1405760C0 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x140577890 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1405779E8 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140577B08 (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x140577BFC (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140577D94 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140577E9C (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x140577FA4 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x14057810C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1405781CC (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1405782BC (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1405783D8 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x1405784B8 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x1405785D8 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x1405786B0 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x1405788BC (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x1405789CC (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x140578C28 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140578D84 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x140578E80 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x14057902C (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1405790F4 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x140579158 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140579390 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x140579630 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventVpQosChange @ 0x140579828 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x14057B138 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057B240 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x14057D6E8 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x14057E7BC (SshpWriteBlocker.c)
 *     SSHSupportEtwWrite @ 0x14057F2E0 (SSHSupportEtwWrite.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x14059BEC0 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14059BF8C (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14059C0C4 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x14059C190 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x14059C7B0 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x14059E73C (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x1405A6E44 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x1405A7188 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x1405A7368 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1405A74F8 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x1405A78BC (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405A8A80 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x1405A8DA4 (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x1405B7C00 (KitLogFeatureUsage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1405BBBD8 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1405BBCB8 (WheapLogProcessTerminateEvent.c)
 *     EtwpPsProvTraceImage @ 0x1407218C4 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x14092D89C (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14092D9AC (SmKmEtwLogStoreStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B5234 (PopDiagTraceFirmwareS3Stats.c)
 *     BapdpRecordIumStatus @ 0x140A49BA0 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x140A691C4 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A7603C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x140A962F8 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1402804B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
  __int64 v12; // r9
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
  v12 = 0LL;
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
        v12 = (unsigned int)EtwpEventWriteFull(
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
                          EventDescriptor->Keyword,
                          v12) )
  {
    v12 = (unsigned int)EtwpEventWriteFull(
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
                              EventDescriptor->Keyword,
                              v12) )
        v12 = (unsigned int)EtwpEventWriteFull(
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
                              EventDescriptor->Keyword,
                              v12) )
        LODWORD(v12) = EtwpEventWriteFull(
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
