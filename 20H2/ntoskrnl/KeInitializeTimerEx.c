/*
 * XREFs of KeInitializeTimerEx @ 0x1402D6620
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405CF690 (ExpInitializeTimeChangeWorker.c)
 *     PfSnBeginTrace @ 0x1405D858C (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1406D572C (PfSnAsyncContextInitialize.c)
 *     NtCreateTimer @ 0x1406F8AA0 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x140713360 (EtwpInitLoggerContext.c)
 *     PoUserShutdownInitiated @ 0x140771690 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x14078E938 (MiInitializeSections.c)
 *     CmpInitializeLazyWriters @ 0x14078FCF8 (CmpInitializeLazyWriters.c)
 *     CmpCmdInit @ 0x1407901C0 (CmpCmdInit.c)
 *     PiDrvDbCreateNode @ 0x1407994AC (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407BE398 (ExpWorkQueueManagerInitialize.c)
 *     VslpSkStartProfiling @ 0x140893450 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x14089C2A4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A2FE0 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1408FFD7C (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x1409922E0 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409937F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140999FC8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x14099B220 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14099DDF0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x1409A1900 (KiInitializeProcessor.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409AAD98 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D8C88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DD3B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409E3C38 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F7784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409FA148 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     CmpInitializeTransactions @ 0x140A56678 (CmpInitializeTransactions.c)
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
