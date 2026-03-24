/*
 * XREFs of KeInitializeTimerEx @ 0x140278AE0
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     NtCreateTimer @ 0x14064CD60 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1406B350C (PfSnAsyncContextInitialize.c)
 *     EtwpInitLoggerContext @ 0x1406DD980 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x14071A8AC (PfSnBeginTrace.c)
 *     PoUserShutdownInitiated @ 0x140775630 (PoUserShutdownInitiated.c)
 *     CmpInitializeLazyWriters @ 0x14078F3E8 (CmpInitializeLazyWriters.c)
 *     CmpCmdInit @ 0x14078F8B0 (CmpCmdInit.c)
 *     MiInitializeSections @ 0x14079CB94 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x1407A39CC (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2798 (ExpWorkQueueManagerInitialize.c)
 *     VslpSkStartProfiling @ 0x140890A20 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x140899874 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A05B0 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1408FD52C (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x14098F2E0 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409907F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x1409971B8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140998410 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14099B370 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14099F1D4 (KiInitializeProcessor.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7C68 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D5C78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DA3A4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409E0C28 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F7148 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     CmpInitializeTransactions @ 0x140A57C9C (CmpInitializeTransactions.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
}
