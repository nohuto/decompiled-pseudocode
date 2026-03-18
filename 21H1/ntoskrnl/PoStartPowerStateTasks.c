/*
 * XREFs of PoStartPowerStateTasks @ 0x1407603E4
 * Callers:
 *     PoPowerOffMonitor @ 0x14037FC20 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x1409AA540 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406FDDE0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
