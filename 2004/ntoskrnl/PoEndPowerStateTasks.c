/*
 * XREFs of PoEndPowerStateTasks @ 0x140761CA4
 * Callers:
 *     PoPowerOffMonitor @ 0x140380460 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409ABF2C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
