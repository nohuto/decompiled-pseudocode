/*
 * XREFs of KeInitializeDpc @ 0x140204F10
 * Callers:
 *     ObpProcessRemoveObjectQueue @ 0x1405EF5A0 (ObpProcessRemoveObjectQueue.c)
 *     PspThreadDelete @ 0x1405F1620 (PspThreadDelete.c)
 *     PfSnBeginTrace @ 0x140651FEC (PfSnBeginTrace.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     EtwpInitLoggerContext @ 0x1406790CC (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1406C7A00 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1406DF33C (PfSnAsyncContextInitialize.c)
 *     IopConnectInterrupt @ 0x14074A9DC (IopConnectInterrupt.c)
 *     PoUserShutdownInitiated @ 0x1407617A0 (PoUserShutdownInitiated.c)
 *     PopUserPresentSetWorker @ 0x14077A360 (PopUserPresentSetWorker.c)
 *     KeInitializeTimerTable @ 0x140781F80 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x1407820CC (KiInitializeForceIdle.c)
 *     CmpCmdInit @ 0x140787AC4 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x140788418 (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x14078AE9C (PiDrvDbCreateNode.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     VslpSkStartProfiling @ 0x14088C5E0 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x1408952D4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14089C190 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14089D120 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1408B7450 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1408E3140 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1408F8E7C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x140930F0C (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093DAA8 (EtwpCovSampCaptureContextStart.c)
 *     PopCaptureTimeOnProcZero @ 0x14098CE80 (PopCaptureTimeOnProcZero.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14098CFE8 (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140991AB0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140992828 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140993A80 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1409969E0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x140997DC8 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x1409992B4 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x140999854 (PoInitializePrcb.c)
 *     HalpMcaInitializePcrContext @ 0x14099B17C (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A3FF8 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A7FD0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AAAA4 (PnprQuiesceProcessors.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D2C08 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409D7334 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409DDBB8 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F4148 (AnFwProgressIndicatorTransition.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
