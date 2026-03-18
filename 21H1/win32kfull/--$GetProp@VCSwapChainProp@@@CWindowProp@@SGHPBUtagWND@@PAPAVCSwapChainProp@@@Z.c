/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z @ 0xCC5E2
 * Callers:
 *     _UserRemoveWindowedSwapChain@8 @ 0xC2A82 (_UserRemoveWindowedSwapChain@8.c)
 *     _UserSetWindowedSwapChain@12 @ 0xC2B6E (_UserSetWindowedSwapChain@12.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

BOOL __fastcall CWindowProp::GetProp<CSwapChainProp>(int a1, int *a2)
{
  int Prop; // eax

  Prop = _GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp), 1);
  *a2 = Prop;
  return Prop != 0;
}
