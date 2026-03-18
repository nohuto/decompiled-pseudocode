/*
 * XREFs of ACPIDeviceCompleteInterpreterRequest @ 0x1C004F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 */

void __fastcall ACPIDeviceCompleteInterpreterRequest(__int64 a1)
{
  ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
}
