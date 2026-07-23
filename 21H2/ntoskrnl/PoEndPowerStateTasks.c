/*
 * XREFs of PoEndPowerStateTasks @ 0x140774344
 * Callers:
 *     PoPowerOffMonitor @ 0x140382A14 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409AFCCC (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140672878 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
