/*
 * XREFs of KeInitializeTimerEx @ 0x1402F9130
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405C9694 (ExpInitializeTimeChangeWorker.c)
 *     NtCreateTimer @ 0x1406AC2A0 (NtCreateTimer.c)
 *     PfSnBeginTrace @ 0x1406BBAB0 (PfSnBeginTrace.c)
 *     EtwpInitLoggerContext @ 0x1406CB22C (EtwpInitLoggerContext.c)
 *     PfSnAsyncContextInitialize @ 0x1407020CC (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x140763080 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x140781420 (MiInitializeSections.c)
 *     CmpCmdInit @ 0x1407820A4 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407829F8 (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x14078CD6C (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407B0458 (ExpWorkQueueManagerInitialize.c)
 *     VslpSkStartProfiling @ 0x14088D900 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x1408965F4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14089D4B0 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1408FA16C (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x14098C548 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14098D800 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140993E68 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x1409950C0 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140997DB0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14099B800 (KiInitializeProcessor.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A4E38 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D2C68 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409D7394 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409DDC18 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F4148 (AnFwProgressIndicatorTransition.c)
 *     CmpInitializeTransactions @ 0x140A55FF8 (CmpInitializeTransactions.c)
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
