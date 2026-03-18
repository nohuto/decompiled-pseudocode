/*
 * XREFs of ?ClearCompositionSurfaceObj@CSwapChainProp@@QAEHXZ @ 0xC2B32
 * Callers:
 *     _UserRemoveWindowedSwapChain@8 @ 0xC2A82 (_UserRemoveWindowedSwapChain@8.c)
 *     ?Delete@CSwapChainProp@@UAEXXZ @ 0xC2B1E (-Delete@CSwapChainProp@@UAEXXZ.c)
 *     _UserSetWindowedSwapChain@12 @ 0xC2B6E (_UserSetWindowedSwapChain@12.c)
 * Callees:
 *     <none>
 */

int __thiscall CSwapChainProp::ClearCompositionSurfaceObj(void **this)
{
  int v2; // esi

  v2 = 0;
  if ( this[2] )
  {
    DxgkReleaseCompositionObjectReference(this[2]);
    this[2] = 0;
    return 1;
  }
  return v2;
}
