/*
 * XREFs of ExFreePoolEx @ 0x14031BDC0
 * Callers:
 *     PopFreeWakeSource @ 0x1408E9298 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}
