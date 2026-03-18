/*
 * XREFs of PoUnblockConsoleSwitch @ 0x14076039C
 * Callers:
 *     PoPowerOffMonitor @ 0x14037FC20 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409AB0CC (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406FDDE0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
