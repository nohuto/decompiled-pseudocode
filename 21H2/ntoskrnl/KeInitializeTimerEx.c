/*
 * XREFs of KeInitializeTimerEx @ 0x140266A80
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     PfSnAsyncContextInitialize @ 0x1406126DC (PfSnAsyncContextInitialize.c)
 *     NtCreateTimer @ 0x140641B80 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1406B4C60 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x1406C859C (PfSnBeginTrace.c)
 *     PoUserShutdownInitiated @ 0x1407757F0 (PoUserShutdownInitiated.c)
 *     CmpInitializeLazyWriters @ 0x140790998 (CmpInitializeLazyWriters.c)
 *     CmpCmdInit @ 0x140790E60 (CmpCmdInit.c)
 *     MiInitializeSections @ 0x14079CD94 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x1407A3BCC (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2CB8 (ExpWorkQueueManagerInitialize.c)
 *     VslpSkStartProfiling @ 0x140890B80 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x1408999D4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A0710 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1408FD68C (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x140990D94 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409917F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x1409981B8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140999410 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14099C370 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x1409A0104 (KiInitializeProcessor.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A8B98 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D6C78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DB3A4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409E1C28 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F5370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F5784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F8148 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     CmpInitializeTransactions @ 0x140A58C9C (CmpInitializeTransactions.c)
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
