/*
 * XREFs of PoUnblockConsoleSwitch @ 0x14077431C
 * Callers:
 *     PoPowerOffMonitor @ 0x140382A14 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409AFCCC (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140672878 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
