/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00804F0
 * Callers:
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C01532E8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0156010 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
