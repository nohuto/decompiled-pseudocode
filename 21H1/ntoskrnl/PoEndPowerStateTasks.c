/*
 * XREFs of PoEndPowerStateTasks @ 0x1407603C4
 * Callers:
 *     PoPowerOffMonitor @ 0x14037FC20 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409AB0CC (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406FDDE0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
