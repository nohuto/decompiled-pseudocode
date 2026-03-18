/*
 * XREFs of ExFreePoolEx @ 0x14030D920
 * Callers:
 *     PopFreeWakeSource @ 0x1408E21D8 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}
