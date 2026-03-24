/*
 * XREFs of ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800367A8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801BCA84 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(
        CCompositionSurfaceBitmap *this,
        struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vbtable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vbtable';
  *((_QWORD *)this + 29) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 28) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 29) + 4LL) + 232) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 64) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 4LL) + v2 + 72) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)v2 = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *(_QWORD *)(v2 + 64) = &CCompositionSurfaceBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(v2 + 80) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *(_QWORD *)(v2 + 88) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 4LL) + v2 + 56) = &CCompositionSurfaceBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CCompositionSurfaceBitmap::`vftable'{for `IContent'};
  v3 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v3 + v2 + 52) = v3 - 152;
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 168;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 112) = v2 + 120;
  *(_DWORD *)(v2 + 120) = 0;
  return (CCompositionSurfaceBitmap *)v2;
}
