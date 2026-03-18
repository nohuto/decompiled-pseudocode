/*
 * XREFs of ??0CCompositionTextLine@@QEAA@PEAVCComposition@@@Z @ 0x18016BE54
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTextObject@@QEAA@PEAVCComposition@@@Z @ 0x18016CDEC (--0CTextObject@@QEAA@PEAVCComposition@@@Z.c)
 */

CCompositionTextLine *__fastcall CCompositionTextLine::CCompositionTextLine(
        CCompositionTextLine *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CCompositionTextLine *result; // rax

  *((_QWORD *)this + 7) = &CCompositionTextLine::`vbtable'{for `CContent'};
  *((_QWORD *)this + 18) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 17) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CTextObject::CTextObject(this, a2);
  *(_QWORD *)v2 = &CCompositionTextLine::`vftable';
  v3 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CHwndBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CCompositionTextLine::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 64;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  result = (CCompositionTextLine *)v2;
  *(_DWORD *)(v5 + v2 + 52) = v5 - 80;
  *(_QWORD *)(v2 + 104) = 0LL;
  return result;
}
