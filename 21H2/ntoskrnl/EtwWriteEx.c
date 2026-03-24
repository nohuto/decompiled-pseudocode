/*
 * XREFs of EtwWriteEx @ 0x14025DD10
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14021BC90 (PsImpersonateContainerOfThread.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14021FCD0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140220810 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140220BD0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeIntSteerPeriodic @ 0x140229480 (KeIntSteerPeriodic.c)
 *     PpmCheckStart @ 0x14022A450 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x14022AA50 (PpmCheckRun.c)
 *     PpmCheckComputeEnergy @ 0x14022B420 (PpmCheckComputeEnergy.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x14025DCD0 (EtwWriteTransfer.c)
 *     EtwTraceMemoryAcg @ 0x14025F7E8 (EtwTraceMemoryAcg.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140260C10 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140261084 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x1402614FC (PopPepWork.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402626D8 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14026354C (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1402816F4 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x140281750 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1402819DC (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTraceIdleCheck @ 0x140281E10 (PopDiagTraceIdleCheck.c)
 *     PopDiagTracePowerRequestChange @ 0x140282394 (PopDiagTracePowerRequestChange.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402832F4 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopTraceSystemIdleTimeReset @ 0x140283DBC (PopTraceSystemIdleTimeReset.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140284394 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopThermalTraceRundownEvents @ 0x14028459C (PopThermalTraceRundownEvents.c)
 *     PpmPerfRecordUtility @ 0x1402893F0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1402896A0 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x14028E7D0 (PpmPerfSelectProcessorState.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140293068 (PoTraceSystemTimerResolutionKernel.c)
 *     MiAllocateContiguousMemory @ 0x140294F3C (MiAllocateContiguousMemory.c)
 *     SeLogAccessFailure @ 0x1402BAB40 (SeLogAccessFailure.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1402CB14C (PpmEventTraceFailedPerfCheckStart.c)
 *     EtwpTiFillVadEventWrite @ 0x1402CCB54 (EtwpTiFillVadEventWrite.c)
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402D2F3C (_tlgWriteEx_EtwWriteEx.c)
 *     MiAllocatePagesForMdl @ 0x1402E33F4 (MiAllocatePagesForMdl.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1402ECD00 (PoTraceSystemTimerResolutionUpdate.c)
 *     IoReuseIrp @ 0x1402EDC30 (IoReuseIrp.c)
 *     PnpDiagnosticTraceObject @ 0x140364C6C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364DE4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PpmMediaBufferingWorker @ 0x14036C640 (PpmMediaBufferingWorker.c)
 *     PopDiagTraceIrpStart @ 0x14036E3E4 (PopDiagTraceIrpStart.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036EE44 (McGenEventWrite_EtwWriteTransfer.c)
 *     KsepLogEtwMessage @ 0x1403717D8 (KsepLogEtwMessage.c)
 *     _tlgWriteAgg @ 0x140375E94 (_tlgWriteAgg.c)
 *     KiIntSteerLogState @ 0x140377FB4 (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x14037AB74 (PopDiagTraceIrpFinish.c)
 *     PnpDiagnosticTrace @ 0x14037C3D8 (PnpDiagnosticTrace.c)
 *     PoLatencySensitivityHint @ 0x14037DC60 (PoLatencySensitivityHint.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14038BD68 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038DE38 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140392C2C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140392CD0 (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140392D5C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     IopLogEventIoMgrMountBegin @ 0x140392EB0 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140392FA8 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140393CB4 (IopLogEventIoMgrMountFailed.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140398828 (PopDiagTraceDeviceAcquireIrp.c)
 *     PpmEventProcessorPerfStateChange @ 0x140398E88 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140398F28 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x14039929C (PopDiagTraceDeviceReleaseIrp.c)
 *     IoTransferActivityId @ 0x140399360 (IoTransferActivityId.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140399948 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventDomainPerfStateChange @ 0x14039A608 (PpmEventDomainPerfStateChange.c)
 *     BapdWriteEtwEvents @ 0x14039B028 (BapdWriteEtwEvents.c)
 *     HalpTscAdvSynchLeader @ 0x14039CC94 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14039CED4 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039D3B4 (HalpTscTraceProcessorSynchronization.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039FDEC (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceSetSystemState @ 0x1403A5FCC (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A6184 (PopDiagTraceFxComponentIdleState.c)
 *     HalpIommuLogEarlyFault @ 0x1403AC768 (HalpIommuLogEarlyFault.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1403B823C (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1403B8308 (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x1403B8EE0 (EtwpTraceFileName.c)
 *     WheaLogInternalEvent @ 0x1403BAD50 (WheaLogInternalEvent.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C82F0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     KsepEvntLogFlagsApplied @ 0x1403C9704 (KsepEvntLogFlagsApplied.c)
 *     HalpTscTraceStatus @ 0x1404C1790 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x1404C9D3C (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1404EE5A8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1404FA134 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x140500C9C (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140508A88 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140508ACC (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140508B68 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140508C94 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x140508E20 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140508F60 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x140509090 (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x1405091D0 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x1405092D0 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x140509410 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1405095D4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x140509700 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405097EC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140509894 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x1405098F8 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140509A38 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140509B78 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140509BD0 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140509C28 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140509C88 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140509D40 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x140509DDC (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140509F50 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140509FD4 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14050A068 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14050A0C0 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14050A118 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     SecureDump_LogErrorEvent @ 0x14050A9F0 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14052281C (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x140526F2C (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x140527A18 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140527B44 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140527C40 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140527D24 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x140527E3C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x140527F3C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140528010 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1405280CC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1405281DC (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1405282D8 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405283BC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405284A0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x14052859C (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x140528674 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x14052877C (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1405289FC (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140528AFC (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14056FB2C (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14056FC24 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x14056FCC8 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x14056FDE0 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x140570AD4 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x140570B74 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140570C88 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x140570D80 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140570F7C (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1405710DC (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x140571594 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x140571670 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x140571730 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x140571A88 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140571B44 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x140571C3C (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x140571D2C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x140571E1C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140571F14 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140572260 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140572364 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140572444 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14057263C (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x14057277C (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x14057288C (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140572980 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140572A68 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140572B18 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140572BD4 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140572D7C (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x140572E1C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceRegisterSystemState @ 0x140572EBC (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x140572F84 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140573074 (PopDiagTraceSleepStudyBlocker.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140577AD0 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x1405792A0 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1405793F8 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140579518 (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x14057960C (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1405797A4 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x1405798AC (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x1405799B4 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x140579B1C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x140579BDC (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140579CCC (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x140579DE8 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x140579EC8 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x140579FE8 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x14057A0C0 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x14057A2CC (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x14057A3DC (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x14057A638 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14057A794 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14057A890 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x14057AA3C (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14057AB04 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x14057AB68 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14057ADA0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14057B040 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventVpQosChange @ 0x14057B238 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x14057CB48 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057CC50 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x14057F0F8 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x1405801CC (SshpWriteBlocker.c)
 *     SSHSupportEtwWrite @ 0x140580CF0 (SSHSupportEtwWrite.c)
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x14059D8F0 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14059D9BC (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14059DAF4 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x14059DBC0 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x14059E1E0 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1405A016C (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x1405A8874 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x1405A8BB8 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x1405A8D98 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1405A8F28 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x1405A92EC (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405AA4B0 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x1405AA7D4 (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x1405B9630 (KitLogFeatureUsage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1405BD628 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1405BD708 (WheapLogProcessTerminateEvent.c)
 *     EtwpPsProvTraceImage @ 0x140628F68 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x14092B06C (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14092B17C (SmKmEtwLogStoreStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B2134 (PopDiagTraceFirmwareS3Stats.c)
 *     BapdpRecordIumStatus @ 0x140A41AAC (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x140A428C8 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A72FBC (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x140A93168 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140220B80 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
