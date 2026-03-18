/*
 * XREFs of ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8
 * Callers:
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B660 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180062B10 (-GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180062E10 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062FA0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800633F8 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180065138 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008A438 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18008C388 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C7B0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18008CE74 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEAVCVisual@@PEBV1@@Z @ 0x1800954A0 (-UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEAVCVisual@@PEBV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800961B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8310 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x1800CF7BC (--1CGeometry@@MEAA@XZ.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800D361C (--0CCpuClip@@QEAA@XZ.c)
 *     ??1CCpuClippingData@@QEAA@XZ @ 0x1800D3694 (--1CCpuClippingData@@QEAA@XZ.c)
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1800D36C0 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800DECC0 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1800E2C04 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800E8684 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?SetCachedTotalCpuClip@CCpuClippingData@@QEAAX$$QEAVCShapePtr@@@Z @ 0x1800ECF38 (-SetCachedTotalCpuClip@CCpuClippingData@@QEAAX$$QEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800EDC70 (-GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800F6330 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800F8B30 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801B0B14 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801B3068 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1801B41E0 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x1801B78E0 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1801E4B0C (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1801E4BF0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801F8BF0 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F8EF0 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801FA760 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180201E44 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180216F30 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180224340 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x18022EC94 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180244228 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802442B0 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1802443C8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802445C0 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9A0C (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CShapePtr::Release(CShapePtr *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  if ( *((_BYTE *)this + 8) )
  {
    v2 = *(void (__fastcall ****)(_QWORD, __int64))this;
    if ( v2 )
      (**v2)(v2, 1LL);
  }
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 0;
}
