/*
 * XREFs of PoStartPowerStateTasks @ 0x140774364
 * Callers:
 *     PoPowerOffMonitor @ 0x140382A14 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x1409AF140 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140672878 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
