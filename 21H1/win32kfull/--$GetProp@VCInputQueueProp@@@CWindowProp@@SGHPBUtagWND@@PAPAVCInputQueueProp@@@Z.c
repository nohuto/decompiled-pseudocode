/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z @ 0x6ECB4
 * Callers:
 *     ?SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z @ 0x11AF6 (-SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z.c)
 *     ?DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z @ 0xA9AA0 (-DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z.c)
 *     ?AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z @ 0xB3874 (-AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     ?HasFallbackInteractionSink@@YGHPBUtagWND@@@Z @ 0x14D31F (-HasFallbackInteractionSink@@YGHPBUtagWND@@@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

BOOL __fastcall CWindowProp::GetProp<CInputQueueProp>(int a1, int *a2)
{
  int Prop; // eax

  Prop = _GetProp(a1, CInputQueueProp::s_atom, 1);
  *a2 = Prop;
  return Prop != 0;
}
