/*
 * XREFs of PoBlockConsoleSwitch @ 0x1407FE7DC
 * Callers:
 *     PoPowerOffMonitor @ 0x14038B628 (PoPowerOffMonitor.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopBlockSessionSwitch @ 0x1407FE700 (PopBlockSessionSwitch.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14098C0DC (PopDirectedDripsNotifyAppsAndServices.c)
 *     PnprQuiesceDevices @ 0x140A68674 (PnprQuiesceDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  int ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId != -1 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( (int)PopDispatchStateCallout(a1, &ActiveConsoleId) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return RtlGetActiveConsoleId();
}
