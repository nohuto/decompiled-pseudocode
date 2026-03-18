/*
 * XREFs of ??$RemoveProp@VCSwapChainProp@@@CWindowProp@@SGHPAUtagWND@@PAPAVCSwapChainProp@@@Z @ 0xC2DFC
 * Callers:
 *     _UserRemoveWindowedSwapChain@8 @ 0xC2A82 (_UserRemoveWindowedSwapChain@8.c)
 * Callees:
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

BOOL __fastcall CWindowProp::RemoveProp<CSwapChainProp>(int a1, int *a2)
{
  int v3; // eax

  v3 = InternalRemoveProp(a1, (__int16)WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 1);
  *a2 = v3;
  if ( v3 )
    *(_DWORD *)(v3 + 4) = 0;
  return v3 != 0;
}
