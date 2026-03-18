/*
 * XREFs of ?EstimatedArea@@YAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800BB998
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180052854 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180012AF0 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

float __fastcall EstimatedArea(const struct D2D_RECT_F *a1, struct D2D_MATRIX_3X2_F *a2)
{
  float left; // xmm5_4
  float top; // xmm6_4
  float right; // xmm7_4
  float bottom; // xmm8_4
  float *v7; // rdx
  float *v8; // r8

  left = a1->left;
  top = a1->top;
  right = a1->right;
  bottom = a1->bottom;
  if ( !a2 )
    return (float)(fmaxf(left, right) - fminf(left, right)) * (float)(fmaxf(top, bottom) - fminf(top, bottom));
  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)a2, a2) )
  {
    left = (float)(*v7 * *v8) + (float)(v7[2] * top);
    right = (float)(*v7 * v8[2]) + (float)(v7[2] * bottom);
    top = (float)(v7[1] * *v8) + (float)(v7[3] * top);
    bottom = (float)(v7[1] * v8[2]) + (float)(v7[3] * bottom);
    return (float)(fmaxf(left, right) - fminf(left, right)) * (float)(fmaxf(top, bottom) - fminf(top, bottom));
  }
  return 0.0;
}
