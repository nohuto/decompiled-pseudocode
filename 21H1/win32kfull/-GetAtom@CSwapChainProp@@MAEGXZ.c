/*
 * XREFs of ?GetAtom@CSwapChainProp@@MAEGXZ @ 0xB5222
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 __thiscall CSwapChainProp::GetAtom(CSwapChainProp *this)
{
  return (unsigned __int16)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
}
