/*
 * XREFs of ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180009D48
 * Callers:
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x180007FA8 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000993C (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180009A48 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004F560 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180050408 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?EstimatedArea@@YAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800530EC (-EstimatedArea@@YAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800D7EE8 (-IsCloseRealZero@@YA_NMM@Z.c)
 */

char __fastcall D2DMatrixHelper::Is2DAxisAlignedPreserving(D2DMatrixHelper *this, const struct D2D_MATRIX_3X2_F *a2)
{
  float *v2; // rcx
  char v3; // dl
  __int64 v4; // rcx

  if ( IsCloseRealZero(*((float *)this + 1), 0.000081380211) && IsCloseRealZero(v2[2], 0.000081380211)
    || IsCloseRealZero(*v2, 0.000081380211) && IsCloseRealZero(*(float *)(v4 + 12), 0.000081380211) )
  {
    return 1;
  }
  return v3;
}
