/*
 * XREFs of ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800A7084
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180035E30 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800A67B0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801A1E48 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BF640 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x18004C638 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::GetCpuClip(
        const struct CVisualTree **this,
        struct CMILMatrix *a2,
        struct CCpuClip *a3)
{
  CScopedClipStack *v3; // rdi
  CVisual *CurrentVisual; // rax
  __int64 v7; // rsi
  int TopCpuClipInScope; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  struct CShape *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (CScopedClipStack *)(this + 117);
  if ( *((_BYTE *)this[117] + 84 * (unsigned int)(*((_DWORD *)this + 240) - 1) + 80) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 3));
    v7 = *((_QWORD *)CVisual::FindTreeData(CurrentVisual, this[741]) + 27);
    TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v3, &v12);
    v10 = TopCpuClipInScope;
    if ( TopCpuClipInScope < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, TopCpuClipInScope, 0x21Eu, 0LL);
      return v10;
    }
    CShapePtr::Release((struct CCpuClip *)((char *)a3 + 16));
    *(_QWORD *)a3 = v12;
    *((_BYTE *)a3 + 32) = 0;
    *((_QWORD *)a3 + 1) = v7;
  }
  return 0;
}
