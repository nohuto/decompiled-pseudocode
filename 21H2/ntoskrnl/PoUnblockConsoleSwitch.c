/*
 * XREFs of PoUnblockConsoleSwitch @ 0x14077415C
 * Callers:
 *     PoPowerOffMonitor @ 0x140382864 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409AED9C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14067E9C8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
