/*
 * XREFs of ?Delete@CSwapChainProp@@UAEXXZ @ 0xC2B1E
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QAEHXZ @ 0xC2B32 (-ClearCompositionSurfaceObj@CSwapChainProp@@QAEHXZ.c)
 */

void __thiscall CSwapChainProp::Delete(CSwapChainProp *this)
{
  CSwapChainProp::ClearCompositionSurfaceObj(this);
  Win32FreePool(this);
}
