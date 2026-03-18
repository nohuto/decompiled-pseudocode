/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x1800091A4
 * Callers:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x180008F70 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011344E (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801EC660 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct HomogeneousPoint2D *a3)
{
  float y; // xmm1_4
  float x; // xmm6_4
  float v6; // xmm0_4
  float v8; // xmm5_4
  float v9; // xmm5_4

  y = a2->y;
  x = a2->x;
  v6 = a2->x;
  LOBYTE(a2) = 1;
  *(float *)a3 = (float)((float)(y * *((float *)this + 4)) + (float)(v6 * *(float *)this)) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)((float)(y * *((float *)this + 5)) + (float)(x * *((float *)this + 1)))
                     + *((float *)this + 13);
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(this, a2) )
    v9 = *(float *)&FLOAT_1_0;
  else
    v9 = (float)((float)(v8 * *((float *)this + 7)) + (float)(x * *((float *)this + 3))) + *((float *)this + 15);
  *((float *)a3 + 2) = v9;
}
