/*
 * XREFs of KeInitializeDpc @ 0x140269650
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405E2E40 (ObpProcessRemoveObjectQueue.c)
 *     PfSnAsyncContextInitialize @ 0x1406126DC (PfSnAsyncContextInitialize.c)
 *     NtCreateTimer @ 0x140641B80 (NtCreateTimer.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140683580 (PspThreadDelete.c)
 *     EtwpInitLoggerContext @ 0x1406B4C60 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x1406C859C (PfSnBeginTrace.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 *     PoUserShutdownInitiated @ 0x1407757F0 (PoUserShutdownInitiated.c)
 *     PopUserPresentSetWorker @ 0x14078ED00 (PopUserPresentSetWorker.c)
 *     CmpInitializeLazyWriters @ 0x140790998 (CmpInitializeLazyWriters.c)
 *     CmpCmdInit @ 0x140790E60 (CmpCmdInit.c)
 *     KeInitializeTimerTable @ 0x14079FD34 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14079FE80 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x1407A3BCC (PiDrvDbCreateNode.c)
 *     VslpSkStartProfiling @ 0x140890B80 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x1408999D4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A0710 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408A16A0 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1408BB9D0 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1408E7930 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1408FD68C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x14093598C (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 *     PopCaptureTimeOnProcZero @ 0x140991688 (PopCaptureTimeOnProcZero.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409917F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x1409981B8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140999410 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14099C370 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x14099D788 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x14099F010 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x14099F5B0 (PoInitializePrcb.c)
 *     HalpMcaInitializePcrContext @ 0x1409A116C (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A8B98 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ACBD0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AF6A4 (PnprQuiesceProcessors.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D6C78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DB3A4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409E1C28 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F5370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F5784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F8148 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
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
