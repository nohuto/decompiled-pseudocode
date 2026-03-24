/*
 * XREFs of PoEndPowerStateTasks @ 0x140774184
 * Callers:
 *     PoPowerOffMonitor @ 0x140382864 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409AED9C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14067E9C8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
