/*
 * XREFs of HalpTimerPowerComponentIdleCallback @ 0x1403DED10
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x14024E680 (PoFxCompleteIdleCondition.c)
 */

__int64 __fastcall HalpTimerPowerComponentIdleCallback(__int64 a1, ULONG_PTR a2)
{
  return PoFxCompleteIdleCondition(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL), a2);
}
