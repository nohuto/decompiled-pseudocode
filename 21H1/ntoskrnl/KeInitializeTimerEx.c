/*
 * XREFs of KeInitializeTimerEx @ 0x140355110
 * Callers:
 *     PfSnBeginTrace @ 0x140651FEC (PfSnBeginTrace.c)
 *     EtwpInitLoggerContext @ 0x1406790CC (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1406C7A00 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1406DF33C (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1407617A0 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x140784488 (MiInitializeSections.c)
 *     CmpCmdInit @ 0x140787AC4 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x140788418 (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x14078AE9C (PiDrvDbCreateNode.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407AD2F8 (ExpWorkQueueManagerInitialize.c)
 *     VslpSkStartProfiling @ 0x14088C5E0 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x1408952D4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14089C190 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1408F8E7C (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x14098BDA4 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14098CFE8 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140992828 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140993A80 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1409969E0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14099A064 (KiInitializeProcessor.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A3FF8 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D2C08 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409D7334 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409DDBB8 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F4148 (AnFwProgressIndicatorTransition.c)
 *     CmpInitializeTransactions @ 0x140A502F8 (CmpInitializeTransactions.c)
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
