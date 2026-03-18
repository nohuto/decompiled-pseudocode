/*
 * XREFs of PoFxCompleteDirectedPowerDown @ 0x140567550
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x140568D24 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PoFxCompleteDirectedPowerDown(ULONG_PTR a1)
{
  return PopFxDerefAndCompleteDirectedPowerTransition(a1);
}
