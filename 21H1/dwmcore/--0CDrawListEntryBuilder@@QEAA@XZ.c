/*
 * XREFs of ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ADA4
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000FC10 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015A60 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180035E30 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180036970 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003A6C0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??0CDrawingContext@@AEAA@XZ @ 0x180090C80 (--0CDrawingContext@@AEAA@XZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800A67B0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801A1E48 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BFFF0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C81B0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E4074 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020DBA0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18026259C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18003AE98 (-Clear@Mesh@@AEAAXXZ.c)
 */

CDrawListEntryBuilder *__fastcall CDrawListEntryBuilder::CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  char *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  CDrawListEntryBuilder *result; // rax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = (char *)this + 64;
  *((_QWORD *)this + 6) = (char *)this + 64;
  *((_QWORD *)this + 7) = (char *)this + 96;
  *((_DWORD *)this + 24) = 0;
  v1 = (char *)this + 104;
  v1[76] |= 4u;
  *(_QWORD *)v1 = 0LL;
  *((_QWORD *)v1 + 1) = 0LL;
  *((_QWORD *)v1 + 2) = 0LL;
  *((_QWORD *)v1 + 3) = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  Mesh::Clear((Mesh *)v1);
  *(_QWORD *)(v2 + 184) = v3;
  *(_QWORD *)(v2 + 192) = v2 + 224;
  *(_QWORD *)(v2 + 200) = v2 + 224;
  *(_QWORD *)(v2 + 208) = v2 + 1184;
  *(_QWORD *)(v2 + 1184) = v2 + 1216;
  *(_QWORD *)(v2 + 1192) = v2 + 1216;
  *(_QWORD *)(v2 + 1200) = v2 + 2176;
  *(_DWORD *)(v2 + 2176) = v3;
  *(_QWORD *)(v2 + 2184) = v2 + 2208;
  *(_QWORD *)(v2 + 2192) = v2 + 2208;
  *(_QWORD *)(v2 + 2200) = v2 + 2268;
  result = (CDrawListEntryBuilder *)v2;
  *(_QWORD *)(v2 + 2272) = v3;
  *(_QWORD *)(v2 + 2288) = v3;
  *(_WORD *)(v2 + 2296) = v3;
  *(_BYTE *)(v2 + 2298) = v3;
  return result;
}
