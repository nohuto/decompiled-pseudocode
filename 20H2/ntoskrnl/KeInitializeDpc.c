/*
 * XREFs of KeInitializeDpc @ 0x14033E040
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405CF690 (ExpInitializeTimeChangeWorker.c)
 *     PfSnBeginTrace @ 0x1405D858C (PfSnBeginTrace.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140666EA0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B0C90 (ObpProcessRemoveObjectQueue.c)
 *     PfSnAsyncContextInitialize @ 0x1406D572C (PfSnAsyncContextInitialize.c)
 *     NtCreateTimer @ 0x1406F8AA0 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x140713360 (EtwpInitLoggerContext.c)
 *     IopConnectInterrupt @ 0x14075D9DC (IopConnectInterrupt.c)
 *     PoUserShutdownInitiated @ 0x140771690 (PoUserShutdownInitiated.c)
 *     PopUserPresentSetWorker @ 0x14078AD70 (PopUserPresentSetWorker.c)
 *     CmpInitializeLazyWriters @ 0x14078FCF8 (CmpInitializeLazyWriters.c)
 *     CmpCmdInit @ 0x1407901C0 (CmpCmdInit.c)
 *     KeInitializeTimerTable @ 0x140795614 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140795760 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x1407994AC (PiDrvDbCreateNode.c)
 *     VslpSkStartProfiling @ 0x140893450 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x14089C2A4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A2FE0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408A3F70 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1408BE390 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1408E9FD0 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1408FFD7C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x140937FEC (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
 *     PopCaptureTimeOnProcZero @ 0x140993688 (PopCaptureTimeOnProcZero.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409937F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140999250 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140999FC8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x14099B220 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14099DDF0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x14099EE68 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x1409A0420 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x1409A09C0 (PoInitializePrcb.c)
 *     HalpMcaInitializePcrContext @ 0x1409A2A1C (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409AAD98 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     IopLiveDumpCorralProcessors @ 0x1409AEDA0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409B1874 (PnprQuiesceProcessors.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D8C88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DD3B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409E3C38 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F7784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409FA148 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
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
