/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x1404CC5F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x1404CC554 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1)
{
  return HalpInterruptPowerChange(a1, 1);
}
