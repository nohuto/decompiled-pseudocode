/*
 * XREFs of ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009D34C
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180008190 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014AB0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800640C0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180064AF0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180073DEC (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18009DA34 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B5EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800C1574 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D638 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BB7E0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C39B0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DF874 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802093A0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18025ED4C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18009D418 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B6928 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E6818 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 */

void __fastcall CDrawListCache::Update(CDrawListCache *this, struct CDrawingContext *a2, struct CDrawListEntry ***a3)
{
  int v3; // eax
  bool v6; // al
  enum D2D1_ANTIALIAS_MODE v7; // r10d
  unsigned __int64 v8; // rdx
  _BYTE v9[64]; // [rsp+40h] [rbp-58h] BYREF
  int v10; // [rsp+80h] [rbp-18h]

  v3 = *((_DWORD *)a2 + 240);
  v6 = v3 && *(_DWORD *)(84LL * (unsigned int)(v3 - 1) + *((_QWORD *)a2 + 117) + 8);
  v7 = *((_DWORD *)a2 + 69) != 0;
  v8 = 0LL;
  if ( g_pComposition )
    v8 = *((_QWORD *)g_pComposition + 44);
  CDrawListCache::Update(this, v8, a3[5], a3[6] - a3[5], v7, *((_DWORD *)a3 + 24) != 0, v6);
  if ( (*((_BYTE *)this + 88) & 0x40) != 0 )
  {
    v10 = 0;
    CDrawingContext::GetWorldTransform(a2, (struct CMILMatrix *)v9);
    if ( !(unsigned __int8)CMILMatrix::Get2DScaleDimensionsWithPerspective(
                             v9,
                             (char *)this + 56,
                             (char *)this + 60,
                             0LL) )
      *((_DWORD *)this + 22) |= 0x100u;
  }
  if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 608LL) )
    *((_BYTE *)this + 102) = 1;
}
