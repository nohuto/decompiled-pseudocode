/*
 * XREFs of ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B4D08
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801AD254 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x1801BF1BC (-EnsureMask@CDropShadow@@AEAAJXZ.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CColorBrush *__fastcall CColorBrush::CColorBrush(CColorBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CColorBrush *result; // rax

  *((_QWORD *)this + 7) = &CMaskBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 16) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 15) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 16) + 4LL) + 128) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)v2 = &CColorBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 56);
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CMaskBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CColorBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 48;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  result = (CColorBrush *)v2;
  *(_DWORD *)(v5 + v2 + 52) = v5 - 64;
  return result;
}
