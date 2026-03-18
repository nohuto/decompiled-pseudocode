/*
 * XREFs of HalpInterruptPowerCriticalTransitionCallback @ 0x14051E020
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x14051DF24 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerCriticalTransitionCallback(ULONG_PTR a1, __int64 a2, char a3)
{
  return HalpInterruptPowerChange(a1, a3);
}
