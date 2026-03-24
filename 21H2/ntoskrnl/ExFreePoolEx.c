/*
 * XREFs of ExFreePoolEx @ 0x1402BDFC0
 * Callers:
 *     PopFreeWakeSource @ 0x1408E6A98 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}
