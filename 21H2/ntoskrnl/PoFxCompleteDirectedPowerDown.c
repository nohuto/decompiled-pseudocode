/*
 * XREFs of PoFxCompleteDirectedPowerDown @ 0x1405CA710
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1405CBF94 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PoFxCompleteDirectedPowerDown(ULONG_PTR a1)
{
  return PopFxDerefAndCompleteDirectedPowerTransition(a1);
}
