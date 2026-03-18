/*
 * XREFs of PoUnblockConsoleSwitch @ 0x1407FE774
 * Callers:
 *     PoPowerOffMonitor @ 0x14038B628 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x140A6927C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 16) = 7;
  return PopDispatchStateCallout(a1, &v3);
}
