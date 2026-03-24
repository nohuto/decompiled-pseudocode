/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x1404D1A10
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x1404D1974 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1)
{
  return HalpInterruptPowerChange(a1, 1);
}
