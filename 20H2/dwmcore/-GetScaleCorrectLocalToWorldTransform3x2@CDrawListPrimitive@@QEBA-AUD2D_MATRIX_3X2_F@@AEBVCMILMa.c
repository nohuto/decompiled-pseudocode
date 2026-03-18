/*
 * XREFs of ?GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA?AUD2D_MATRIX_3X2_F@@AEBVCMILMatrix@@@Z @ 0x180021C20
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180021864 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     <none>
 */

struct D2D_MATRIX_3X2_F *__fastcall CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform3x2(
        CDrawListPrimitive *this,
        struct D2D_MATRIX_3X2_F *__return_ptr retstr,
        const struct CMILMatrix *a3)
{
  struct D2D_MATRIX_3X2_F *result; // rax
  FLOAT v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm5_4
  FLOAT v7; // xmm1_4
  FLOAT v8; // xmm3_4
  FLOAT v9; // xmm2_4
  FLOAT v10; // xmm5_4

  result = retstr;
  v4 = *((float *)a3 + 12);
  v5 = 1.0 / *((float *)this + 22);
  v6 = 1.0 / *((float *)this + 23);
  v7 = *((float *)a3 + 13);
  v8 = v5 * *((float *)a3 + 1);
  v9 = v6 * *((float *)a3 + 4);
  v10 = v6 * *((float *)a3 + 5);
  retstr->m11 = v5 * *(float *)a3;
  retstr->m12 = v8;
  retstr->m21 = v9;
  retstr->m22 = v10;
  retstr->dx = v4;
  retstr->dy = v7;
  return result;
}
