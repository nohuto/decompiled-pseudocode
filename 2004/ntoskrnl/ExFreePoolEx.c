/*
 * XREFs of ExFreePoolEx @ 0x14034AE00
 * Callers:
 *     PopFreeWakeSource @ 0x1408E3458 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}
