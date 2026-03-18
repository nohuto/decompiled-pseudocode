/*
 * XREFs of PoEndPowerStateTasks @ 0x1407702B4
 * Callers:
 *     PoPowerOffMonitor @ 0x140382220 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409B1E9C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407205B8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
