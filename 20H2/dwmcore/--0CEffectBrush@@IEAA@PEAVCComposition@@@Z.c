/*
 * XREFs of ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800CB300
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A9D44 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CEffectBrush *__fastcall CEffectBrush::CEffectBrush(CEffectBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx
  CEffectBrush *result; // rax

  *((_QWORD *)this + 7) = &CSurfaceBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 24) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 23) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 24) + 4LL) + 192) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)v2 = &CEffectBrush::`vftable'{for `CBrush'};
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = &CEffectBrush::`vftable'{for `CPropertySet::IValueChangeListener'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 4LL) + v2 + 56) = &CEffectBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CEffectBrush::`vftable'{for `IContent'};
  v3 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v3 + v2 + 52) = v3 - 112;
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 128;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = v2 + 144;
  *(_QWORD *)(v2 + 120) = v2 + 144;
  *(_DWORD *)(v2 + 128) = 2;
  *(_QWORD *)(v2 + 132) = 2LL;
  result = (CEffectBrush *)v2;
  *(_BYTE *)(v2 + 72) = 1;
  return result;
}
