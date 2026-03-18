/*
 * XREFs of ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0150EE0
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C0150BE8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C01536E0 (UserRemoveWindowedSwapChain.c)
 *     ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C023E380 (-Delete@CSwapChainProp@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::ClearCompositionSurfaceObj(CSwapChainProp *this)
{
  unsigned int v2; // ebx
  void *v3; // rcx

  v2 = 0;
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    DxgkReleaseCompositionObjectReference(v3);
    *((_QWORD *)this + 2) = 0LL;
    return 1;
  }
  return v2;
}
