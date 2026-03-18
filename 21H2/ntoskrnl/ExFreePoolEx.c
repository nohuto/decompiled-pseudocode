/*
 * XREFs of ExFreePoolEx @ 0x140246BB0
 * Callers:
 *     PopFreeWakeSource @ 0x14098F2F8 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}
