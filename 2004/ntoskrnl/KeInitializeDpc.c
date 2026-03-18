/*
 * XREFs of KeInitializeDpc @ 0x1402E3AC0
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405C9694 (ExpInitializeTimeChangeWorker.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x140698AB0 (ObpProcessRemoveObjectQueue.c)
 *     PspThreadDelete @ 0x14069AB30 (PspThreadDelete.c)
 *     NtCreateTimer @ 0x1406AC2A0 (NtCreateTimer.c)
 *     PfSnBeginTrace @ 0x1406BBAB0 (PfSnBeginTrace.c)
 *     EtwpInitLoggerContext @ 0x1406CB22C (EtwpInitLoggerContext.c)
 *     PfSnAsyncContextInitialize @ 0x1407020CC (PfSnAsyncContextInitialize.c)
 *     IopConnectInterrupt @ 0x14074EDFC (IopConnectInterrupt.c)
 *     PoUserShutdownInitiated @ 0x140763080 (PoUserShutdownInitiated.c)
 *     PopUserPresentSetWorker @ 0x14077C770 (PopUserPresentSetWorker.c)
 *     CmpCmdInit @ 0x1407820A4 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407829F8 (CmpInitializeLazyWriters.c)
 *     KeInitializeTimerTable @ 0x140787904 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140787A50 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x14078CD6C (PiDrvDbCreateNode.c)
 *     VslpSkStartProfiling @ 0x14088D900 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x1408965F4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14089D4B0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14089E440 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1408B8770 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1408E43C0 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1408FA16C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x1409321BC (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093ED28 (EtwpCovSampCaptureContextStart.c)
 *     PopCaptureTimeOnProcZero @ 0x14098D698 (PopCaptureTimeOnProcZero.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14098D800 (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x1409930F0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140993E68 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x1409950C0 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140997DB0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x140998E28 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x14099A314 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x14099A8B4 (PoInitializePrcb.c)
 *     HalpMcaInitializePcrContext @ 0x14099C91C (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A4E38 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A8E30 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AB904 (PnprQuiesceProcessors.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D2C68 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409D7394 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409DDC18 (VfWdInit.c)
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
