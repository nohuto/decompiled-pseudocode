/*
 * XREFs of PoStartPowerStateTasks @ 0x1407702D4
 * Callers:
 *     PoPowerOffMonitor @ 0x140382220 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x1409B1310 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407205B8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
