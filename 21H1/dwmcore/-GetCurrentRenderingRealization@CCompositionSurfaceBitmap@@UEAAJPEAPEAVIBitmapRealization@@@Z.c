/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800AC350
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180015E64 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004E030 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006EEB4 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x1801B6850 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagR.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801BCECC (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801BD14C (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801BE9FC (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1801F57E0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18020C660 (-DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    *a2 = (struct IBitmapRealization *)v4;
    if ( v4 )
    {
      v6 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + v4 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      return 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304309, 0xBAu, 0LL);
      return 2291662987LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0xBFu, 0LL);
    return 2291674884LL;
  }
}
