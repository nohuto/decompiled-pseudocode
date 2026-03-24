/*
 * XREFs of ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18001899C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180020854 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180079820 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // xmm11
  __int128 v5; // xmm6
  float v6; // xmm9_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm9_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm13_4
  float v14; // xmm4_4
  float v15; // xmm3_4

  result = a2;
  v4 = *(_OWORD *)(a3 + 48);
  v5 = *(_OWORD *)(a3 + 32);
  v6 = 1.0 / *(float *)(a1 + 88);
  v7 = v6 * *(float *)(a3 + 12);
  v8 = v6 * *(float *)(a3 + 8);
  v9 = v6 * *(float *)a3;
  v10 = (float)(1.0 / *(float *)(a1 + 88)) * *(float *)(a3 + 4);
  v11 = 1.0 / *(float *)(a1 + 92);
  v12 = v11 * *(float *)(a3 + 28);
  v13 = v11 * *(float *)(a3 + 16);
  v14 = v11 * *(float *)(a3 + 24);
  v15 = (float)(1.0 / *(float *)(a1 + 92)) * *(float *)(a3 + 20);
  *(_DWORD *)(a2 + 64) = 0;
  *(float *)a2 = v9;
  *(float *)(a2 + 16) = v13;
  *(_OWORD *)(a2 + 32) = v5;
  *(_OWORD *)(a2 + 48) = v4;
  *(float *)(a2 + 4) = v10;
  *(float *)(a2 + 8) = v8;
  *(float *)(a2 + 12) = v7;
  *(float *)(a2 + 20) = v15;
  *(float *)(a2 + 24) = v14;
  *(float *)(a2 + 28) = v12;
  return result;
}
