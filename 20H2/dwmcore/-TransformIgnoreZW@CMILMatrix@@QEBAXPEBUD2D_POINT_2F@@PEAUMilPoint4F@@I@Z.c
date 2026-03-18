/*
 * XREFs of ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x1800142E0
 * Callers:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x180013BC8 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180013D7C (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x180014098 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::TransformIgnoreZW(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct MilPoint4F *a3)
{
  float x; // xmm2_4
  float *v4; // rax
  float y; // xmm3_4
  __int64 v6; // r8
  __int64 v7; // rcx

  x = a2->x;
  v4 = (float *)((char *)this + 48);
  y = a2->y;
  v6 = a3 - this;
  v7 = 4LL;
  do
  {
    *(float *)((char *)v4 + v6 - 48) = (float)((float)(y * *(v4 - 8)) + (float)(x * *(v4 - 12))) + *v4;
    ++v4;
    --v7;
  }
  while ( v7 );
}
