/*
 * XREFs of PoStartPowerStateTasks @ 0x140761CC4
 * Callers:
 *     PoPowerOffMonitor @ 0x140380460 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x1409AB3A0 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
