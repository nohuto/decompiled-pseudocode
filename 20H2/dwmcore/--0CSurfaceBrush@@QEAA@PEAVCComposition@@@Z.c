/*
 * XREFs of ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x18006D008
 * Callers:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18001E734 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A9D44 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CSurfaceBrush *__fastcall CSurfaceBrush::CSurfaceBrush(CSurfaceBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CSurfaceBrush *result; // rax

  *((_QWORD *)this + 7) = &CSurfaceBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 24) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 23) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 24) + 4LL) + 192) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)v2 = &CSurfaceBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CEffectBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CSurfaceBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 112;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v5 + v2 + 52) = v5 - 128;
  *(_DWORD *)(v2 + 80) = 1056964608;
  *(_DWORD *)(v2 + 84) = 1056964608;
  result = (CSurfaceBrush *)v2;
  *(_DWORD *)(v2 + 88) = 2;
  *(_DWORD *)(v2 + 92) = 1;
  *(_QWORD *)(v2 + 112) = 1065353216LL;
  *(_DWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 124) = 1065353216LL;
  *(_QWORD *)(v2 + 132) = 0LL;
  *(_QWORD *)(v2 + 140) = 0LL;
  *(_DWORD *)(v2 + 148) = 0;
  return result;
}
