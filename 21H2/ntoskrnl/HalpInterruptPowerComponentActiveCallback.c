/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x1404D1C50
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x1404D1BB4 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1)
{
  return HalpInterruptPowerChange(a1, 1);
}
