/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C004C97C
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C003C030 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C004C7DC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010D5F8 (UserDetachQueueFromInputWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1E08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C01D87DC (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CInputQueueProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
