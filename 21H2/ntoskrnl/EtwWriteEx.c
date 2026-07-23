/*
 * XREFs of EtwWriteEx @ 0x14027F840
 * Callers:
 *     PpmPerfRecordUtility @ 0x140206590 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140206840 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x14020B970 (PpmPerfSelectProcessorState.c)
 *     IoReuseIrp @ 0x14020D600 (IoReuseIrp.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140210FD8 (PoTraceSystemTimerResolutionKernel.c)
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 *     SeLogAccessFailure @ 0x140238D50 (SeLogAccessFailure.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140249A3C (PpmEventTraceFailedPerfCheckStart.c)
 *     EtwpTiFillVadEventWrite @ 0x14024B1B4 (EtwpTiFillVadEventWrite.c)
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 *     PopTraceSystemIdleTimeReset @ 0x14024EB34 (PopTraceSystemIdleTimeReset.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x14026F934 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x14026F990 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14026FC1C (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTraceIdleCheck @ 0x140270050 (PopDiagTraceIdleCheck.c)
 *     PopDiagTracePowerRequestChange @ 0x1402705D4 (PopDiagTracePowerRequestChange.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140271504 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1402729EC (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140272BF4 (PopThermalTraceRundownEvents.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwTraceMemoryAcg @ 0x14027E69C (EtwTraceMemoryAcg.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x14027F800 (EtwWriteTransfer.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402820E0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140282554 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x1402829CC (PopPepWork.c)
 *     PopDiagTraceFxDevicePowered @ 0x140283BA8 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14028498C (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14029E050 (PoTraceSystemTimerResolutionUpdate.c)
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402C45D0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402C5110 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeIntSteerPeriodic @ 0x1402CDD80 (KeIntSteerPeriodic.c)
 *     PpmCheckStart @ 0x1402CED00 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x1402CF300 (PpmCheckRun.c)
 *     PpmCheckComputeEnergy @ 0x1402CFCD0 (PpmCheckComputeEnergy.c)
 *     PnpDiagnosticTraceObject @ 0x140364E1C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364F94 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PpmMediaBufferingWorker @ 0x14036C7F0 (PpmMediaBufferingWorker.c)
 *     PopDiagTraceIrpStart @ 0x14036E594 (PopDiagTraceIrpStart.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036EFF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     KsepLogEtwMessage @ 0x140371328 (KsepLogEtwMessage.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     KiIntSteerLogState @ 0x140377B04 (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x14037A6C4 (PopDiagTraceIrpFinish.c)
 *     PnpDiagnosticTrace @ 0x14037BF28 (PnpDiagnosticTrace.c)
 *     PoLatencySensitivityHint @ 0x14037D7B0 (PoLatencySensitivityHint.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14038BEB8 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038DF88 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140392D7C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140392E20 (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140392EAC (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     IopLogEventIoMgrMountBegin @ 0x140393000 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x1403930F8 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140393E04 (IopLogEventIoMgrMountFailed.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140398978 (PopDiagTraceDeviceAcquireIrp.c)
 *     PpmEventProcessorPerfStateChange @ 0x140398FD8 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140399078 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x1403993EC (PopDiagTraceDeviceReleaseIrp.c)
 *     IoTransferActivityId @ 0x1403994B0 (IoTransferActivityId.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140399A98 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventDomainPerfStateChange @ 0x14039A758 (PpmEventDomainPerfStateChange.c)
 *     BapdWriteEtwEvents @ 0x14039B178 (BapdWriteEtwEvents.c)
 *     HalpTscAdvSynchLeader @ 0x14039CDE4 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14039D024 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039D504 (HalpTscTraceProcessorSynchronization.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039FF3C (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceSetSystemState @ 0x1403A611C (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A62D4 (PopDiagTraceFxComponentIdleState.c)
 *     HalpIommuLogEarlyFault @ 0x1403AD4F8 (HalpIommuLogEarlyFault.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1403B83AC (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1403B8478 (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x1403B9050 (EtwpTraceFileName.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C8490 (EtwTraceJobServerSiloMonitorCallback.c)
 *     KsepEvntLogFlagsApplied @ 0x1403C98A4 (KsepEvntLogFlagsApplied.c)
 *     HalpTscTraceStatus @ 0x1404C19D0 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x1404C9F7C (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1404EE7E8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1404FA0B4 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x140500C1C (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140508CC4 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140508D08 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140508DA4 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140508ED0 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x14050905C (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14050919C (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x1405092CC (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14050940C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14050950C (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14050964C (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140509810 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14050993C (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140509A28 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140509AD0 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140509B34 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140509C74 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140509DB4 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140509E0C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140509E64 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140509EC4 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140509F7C (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14050A018 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x14050A18C (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14050A210 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14050A2A4 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14050A2FC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14050A354 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     SecureDump_LogErrorEvent @ 0x14050AC30 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x140522A5C (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x14052716C (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x140527C58 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140527D84 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140527E80 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140527F64 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14052807C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x14052817C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140528250 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x14052830C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x14052841C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x140528518 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405285FC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405286E0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405287DC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405288B4 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405289BC (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x140528C3C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140528D3C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14056FD6C (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14056FE64 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x14056FF08 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x140570020 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x140570D14 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x140570DB4 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140570EC8 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x140570FC0 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1405711BC (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14057131C (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405717D4 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1405718B0 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x140571970 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x140571CC8 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140571D84 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x140571E7C (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x140571F6C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14057205C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140572154 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405724A0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1405725A4 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140572684 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14057287C (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1405729BC (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x140572ACC (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140572BC0 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140572CA8 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140572D58 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140572E14 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140572FBC (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x14057305C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceRegisterSystemState @ 0x1405730FC (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x1405731C4 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1405732B4 (PopDiagTraceSleepStudyBlocker.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140577D10 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x1405794E0 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140579638 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140579758 (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x14057984C (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1405799E4 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140579AEC (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x140579BF4 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x140579D5C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x140579E1C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140579F0C (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x14057A028 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x14057A108 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x14057A228 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x14057A300 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x14057A50C (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x14057A61C (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x14057A878 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14057A9D4 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14057AAD0 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x14057AC7C (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14057AD44 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x14057ADA8 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14057AFE0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14057B280 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventVpQosChange @ 0x14057B478 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x14057CD88 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057CE90 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x14057F338 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x14058040C (SshpWriteBlocker.c)
 *     SSHSupportEtwWrite @ 0x140580F30 (SSHSupportEtwWrite.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x14059DB20 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14059DBEC (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14059DD24 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x14059DDF0 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x14059E410 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1405A039C (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x1405A8AA4 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x1405A8DE8 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x1405A8FC8 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1405A9158 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x1405A951C (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405AA6E0 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x1405AAA04 (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x1405B9860 (KitLogFeatureUsage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1405BD858 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1405BD938 (WheapLogProcessTerminateEvent.c)
 *     EtwpPsProvTraceImage @ 0x140690814 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x14092B1CC (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14092B2DC (SmKmEtwLogStoreStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B3064 (PopDiagTraceFirmwareS3Stats.c)
 *     BapdpRecordIumStatus @ 0x140A42AAC (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x140A438C8 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A73FBC (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x140A94168 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
