/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A79B4
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800845B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x180014098 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180019D3C (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?BlendStraightColorDW@@YAKKM@Z @ 0x1801A67D0 (-BlendStraightColorDW@@YAKKM@Z.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        float *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  float v7; // xmm6_4
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  _OWORD v14[4]; // [rsp+30h] [rbp-C8h] BYREF
  int i; // [rsp+70h] [rbp-88h]
  __int64 v16; // [rsp+80h] [rbp-78h] BYREF

  v4 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)&v16, a2);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = 0;
  v7 = *(float *)(a1 + 44);
  v8 = *(_OWORD *)(v4 + 16);
  v14[0] = *(_OWORD *)v4;
  v14[1] = v8;
  v9 = *(_OWORD *)(v4 + 32);
  v10 = *(_OWORD *)(v4 + 48);
  result = *(unsigned int *)(v4 + 64);
  v14[2] = v9;
  v14[3] = v10;
  for ( i = result; v6 < v5; *(_DWORD *)(v13 + 12) = result )
  {
    v12 = *(_QWORD *)(a1 + 8) + (int)(v6 * *(_DWORD *)(a1 + 16));
    v13 = *(_QWORD *)(a1 + 56) + (int)(v6 * *(_DWORD *)(a1 + 64));
    VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      (CMILMatrix *)v14,
      (const struct D2D_POINT_2F *)v12,
      (const struct D2D_POINT_2F *)(*(_QWORD *)(a1 + 24) + (int)(v6 * *(_DWORD *)(a1 + 32))),
      *(_DWORD *)(a1 + 40),
      (CMILMatrix *)a2,
      (char *)v13);
    result = BlendStraightColorDW(*(_DWORD *)(v12 + 12), v7);
    ++v6;
  }
  return result;
}
