/*
 * XREFs of HalpTimerPowerCriticalTransitionCallback @ 0x1404BB4B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerPowerChange @ 0x1404BB3E4 (HalpTimerPowerChange.c)
 */

__int64 __fastcall HalpTimerPowerCriticalTransitionCallback(ULONG_PTR a1, __int64 a2, char a3)
{
  LOBYTE(a2) = a3;
  return HalpTimerPowerChange(a1, a2);
}
