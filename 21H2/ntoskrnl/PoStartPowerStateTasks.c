/*
 * XREFs of PoStartPowerStateTasks @ 0x1407FE79C
 * Callers:
 *     PoPowerOffMonitor @ 0x14038B628 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x140A68674 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
