/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140992828
 * Callers:
 *     PoInitializeBroadcast @ 0x140763838 (PoInitializeBroadcast.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IoBuildPoDeviceNotifyList @ 0x140992920 (IoBuildPoDeviceNotifyList.c)
 */

void __fastcall PopBuildDeviceNotifyList(void *a1)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-49h] BYREF
  struct _KTIMER Timer; // [rsp+50h] [rbp-29h] BYREF
  struct _KDPC Dpc; // [rsp+90h] [rbp+17h] BYREF

  memset(&Dpc, 0, sizeof(Dpc));
  memset(&Event, 0, sizeof(Event));
  memset(&Timer, 0, sizeof(Timer));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimerEx(&Timer, NotificationTimer);
  KeInitializeDpc(&Dpc, PopBuildDeviceNotifyListWatchdog, &Event);
  if ( (_DWORD)PopWatchdogSleepTimeout )
    KiSetTimerEx((__int64)&Timer, -10000000LL * (int)PopWatchdogSleepTimeout, 0, 0, (__int64)&Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    if ( !KeCancelTimer(&Timer) )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
