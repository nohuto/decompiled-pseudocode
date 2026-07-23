/*
 * XREFs of PoBlockConsoleSwitch @ 0x1406FDD90
 * Callers:
 *     PoPowerOffMonitor @ 0x14037FC20 (PoPowerOffMonitor.c)
 *     PopAcquireAdaptiveLock @ 0x1406FE7B4 (PopAcquireAdaptiveLock.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PopBlockSessionSwitch @ 0x1407653C0 (PopBlockSessionSwitch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408DED68 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PnprQuiesceDevices @ 0x1409AA540 (PnprQuiesceDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x14035DBC0 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x1406FDDE0 (PopDispatchStateCallout.c)
 */

ULONG __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  ULONG ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
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
