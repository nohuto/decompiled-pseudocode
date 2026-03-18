/*
 * XREFs of ??0CCompositionGlyphRun@@QEAA@PEAVCComposition@@@Z @ 0x18016BD9C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTextObject@@QEAA@PEAVCComposition@@@Z @ 0x18016CDEC (--0CTextObject@@QEAA@PEAVCComposition@@@Z.c)
 */

CCompositionGlyphRun *__fastcall CCompositionGlyphRun::CCompositionGlyphRun(
        CCompositionGlyphRun *this,
        struct CComposition *a2)
{
  CCompositionGlyphRun *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  CCompositionGlyphRun *result; // rax

  *((_QWORD *)this + 7) = &CClipBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 17) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 16) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 17) + 4LL) + 136) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CTextObject::CTextObject(this, a2);
  *((_QWORD *)v2 + 11) = 0LL;
  *((_QWORD *)v2 + 12) = 0LL;
  *(_QWORD *)v2 = &CCompositionGlyphRun::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 4LL) + 56) = &CCompositionGlyphRun::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 8LL) + 56) = &CCompositionGlyphRun::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)v2 + 7) + 4LL);
  *(_DWORD *)((char *)v2 + v3 + 52) = v3 - 56;
  v4 = *(int *)(*((_QWORD *)v2 + 7) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v4 + 52) = v4 - 72;
  return result;
}
