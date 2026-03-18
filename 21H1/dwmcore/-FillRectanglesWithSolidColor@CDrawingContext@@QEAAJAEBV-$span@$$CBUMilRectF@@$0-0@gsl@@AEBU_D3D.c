/*
 * XREFs of ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B598
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800502F0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180166768 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18017970C (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017A4B8 (-DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B140 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B814 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18017C81C (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1801949A8 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18003666C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004C834 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800BCD60 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithSolidColor(struct CDrawingContext *a1, _OWORD *a2, __int64 a3)
{
  int v3; // ebx
  CGeometryOnlyDrawListBrush *v7; // rcx
  CGeometryOnlyDrawListBrush *v8; // rax
  CGeometryOnlyDrawListBrush *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r8d
  struct CGeometryOnlyDrawListBrush *v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  CGeometryOnlyDrawListBrush *v15; // [rsp+80h] [rbp+30h] BYREF
  CGeometryOnlyDrawListBrush *v16; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  if ( COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) >= 0.0000011920929 || *((_DWORD *)a1 + 75) || *((_DWORD *)a1 + 70) )
  {
    v15 = 0LL;
    v13 = 0LL;
    v14 = 1;
    v3 = CGeometryOnlyDrawListBrush::Create(&v13);
    if ( v14 )
    {
      v7 = v15;
      v15 = v13;
      if ( v7 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v7, 1, (unsigned int)&v15);
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, v3, 0x864u, 0LL);
    }
    else
    {
      v8 = v15;
      *((_DWORD *)v15 + 12) = 0;
      *((_BYTE *)v8 + 52) = 1;
      *((_OWORD *)v8 + 2) = 0LL;
      v9 = v15;
      v15 = 0LL;
      v16 = v9;
      v3 = CDrawingContext::FillRectanglesWithDrawListBrush(
             a1,
             (struct CMultiPrimitiveDrawListBrush *)&v16,
             a2,
             (__int128 *)a3);
      if ( v16 )
        std::default_delete<CShape>::operator()(v10, (__int64 (__fastcall ***)(_QWORD, __int64))v16);
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x86Eu, 0LL);
    }
    if ( v15 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v15, 1, v11);
  }
  return (unsigned int)v3;
}
