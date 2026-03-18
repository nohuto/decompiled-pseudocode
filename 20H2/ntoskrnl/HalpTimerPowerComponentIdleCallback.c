/*
 * XREFs of HalpTimerPowerComponentIdleCallback @ 0x1403CF090
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x140323130 (PoFxCompleteIdleCondition.c)
 */

__int64 __fastcall HalpTimerPowerComponentIdleCallback(__int64 a1, ULONG_PTR a2)
{
  return PoFxCompleteIdleCondition(*(_QWORD **)(*(_QWORD *)(a1 + 288) + 40LL), a2);
}
