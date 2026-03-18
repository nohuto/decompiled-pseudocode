/*
 * XREFs of PoUnblockConsoleSwitch @ 0x140761C7C
 * Callers:
 *     PoPowerOffMonitor @ 0x140380460 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409ABF2C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
