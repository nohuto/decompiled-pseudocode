/*
 * XREFs of ??0CClipBrush@@IEAA@PEAVCComposition@@@Z @ 0x1801B8E64
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801B8FFC (-Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A2234 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CClipBrush *__fastcall CClipBrush::CClipBrush(CClipBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CClipBrush *result; // rax

  *((_QWORD *)this + 7) = &CClipBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 17) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 16) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 17) + 4LL) + 136) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)v2 = &CClipBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CCompositionGlyphRun::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CClipBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 56;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  result = (CClipBrush *)v2;
  *(_DWORD *)(v5 + v2 + 52) = v5 - 72;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_OWORD *)(v2 + 88) = 0LL;
  return result;
}
