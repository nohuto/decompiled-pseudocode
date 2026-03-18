/*
 * XREFs of PoEndPartitionReplace @ 0x1408E2F04
 * Callers:
 *     PnprWakeDevices @ 0x1409AB0CC (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406FDDE0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPartitionReplace(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 11;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
