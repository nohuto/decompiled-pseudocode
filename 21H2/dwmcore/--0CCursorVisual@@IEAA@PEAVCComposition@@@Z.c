/*
 * XREFs of ??0CCursorVisual@@IEAA@PEAVCComposition@@@Z @ 0x180211A6C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180088200 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CCursorVisual *__fastcall CCursorVisual::CCursorVisual(CCursorVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *((_BYTE *)this + 736) = 1;
  *(_QWORD *)this = &CCursorVisual::`vftable';
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_BYTE *)this + 760) = 0;
  return this;
}
