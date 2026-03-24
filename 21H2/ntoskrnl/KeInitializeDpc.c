/*
 * XREFs of KeInitializeDpc @ 0x14027B6B0
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140619920 (PspThreadDelete.c)
 *     NtCreateTimer @ 0x14064CD60 (NtCreateTimer.c)
 *     ObpProcessRemoveObjectQueue @ 0x140684B90 (ObpProcessRemoveObjectQueue.c)
 *     PfSnAsyncContextInitialize @ 0x1406B350C (PfSnAsyncContextInitialize.c)
 *     EtwpInitLoggerContext @ 0x1406DD980 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x14071A8AC (PfSnBeginTrace.c)
 *     IopConnectInterrupt @ 0x1407621CC (IopConnectInterrupt.c)
 *     PoUserShutdownInitiated @ 0x140775630 (PoUserShutdownInitiated.c)
 *     PopUserPresentSetWorker @ 0x14078EB40 (PopUserPresentSetWorker.c)
 *     CmpInitializeLazyWriters @ 0x14078F3E8 (CmpInitializeLazyWriters.c)
 *     CmpCmdInit @ 0x14078F8B0 (CmpCmdInit.c)
 *     KeInitializeTimerTable @ 0x14079FB34 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14079FC80 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x1407A39CC (PiDrvDbCreateNode.c)
 *     VslpSkStartProfiling @ 0x140890A20 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x140899874 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A05B0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408A1540 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1408BB870 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1408E77D0 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1408FD52C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x1409357BC (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409422B8 (EtwpCovSampCaptureContextStart.c)
 *     PopCaptureTimeOnProcZero @ 0x140990688 (PopCaptureTimeOnProcZero.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409907F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140996250 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x1409971B8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140998410 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14099B370 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x14099C788 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x14099E0E0 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x14099E680 (PoInitializePrcb.c)
 *     HalpMcaInitializePcrContext @ 0x1409A023C (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7C68 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ABCA0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AE774 (PnprQuiesceProcessors.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D5C78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DA3A4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409E0C28 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F7148 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
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
