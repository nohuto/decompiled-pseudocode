/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x1404D1A30
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x1402C42D0 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x1404D1974 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2)
{
  HalpInterruptPowerChange(a1, 0);
  return PoFxCompleteIdleCondition(*(_QWORD **)(a1 + 344), a2);
}
