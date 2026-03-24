/*
 * XREFs of PoStartPowerStateTasks @ 0x1407741A4
 * Callers:
 *     PoPowerOffMonitor @ 0x140382864 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x1409AE210 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14067E9C8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
