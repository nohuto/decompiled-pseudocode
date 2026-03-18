/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140993E68
 * Callers:
 *     PoInitializeBroadcast @ 0x140765258 (PoInitializeBroadcast.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IoBuildPoDeviceNotifyList @ 0x140993F60 (IoBuildPoDeviceNotifyList.c)
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
