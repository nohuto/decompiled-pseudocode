/*
 * XREFs of ACPIDeviceCompleteInterpreterRequest @ 0x1C0050510
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FC80 (ACPIDeviceCompleteGenericPhase.c)
 */

void __fastcall ACPIDeviceCompleteInterpreterRequest(__int64 a1)
{
  ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
}
