/*
 * XREFs of PoBlockConsoleSwitch @ 0x1407211BC
 * Callers:
 *     PoPowerOffMonitor @ 0x140382220 (PoPowerOffMonitor.c)
 *     PopAcquireAdaptiveLock @ 0x1407210F0 (PopAcquireAdaptiveLock.c)
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PopBlockSessionSwitch @ 0x140775DB0 (PopBlockSessionSwitch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E5E08 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PnprQuiesceDevices @ 0x1409B1310 (PnprQuiesceDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x1403637A0 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x1407205B8 (PopDispatchStateCallout.c)
 */

ULONG __fastcall PoBlockConsoleSwitch(_DWORD *a1)
{
  ULONG ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId != -1 )
    {
      a1[4] = 0;
      if ( (int)PopDispatchStateCallout(a1, (__int64)&ActiveConsoleId) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return RtlGetActiveConsoleId();
}
