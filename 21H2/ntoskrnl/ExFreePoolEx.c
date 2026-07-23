/*
 * XREFs of ExFreePoolEx @ 0x14023C600
 * Callers:
 *     PopFreeWakeSource @ 0x1408E6BF8 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}
