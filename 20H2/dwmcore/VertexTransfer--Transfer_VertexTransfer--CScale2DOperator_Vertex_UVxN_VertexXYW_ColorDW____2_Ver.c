/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A8258
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800845B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x180065280 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ?BlendStraightColorDW@@YAKKM@Z @ 0x1801A67D0 (-BlendStraightColorDW@@YAKKM@Z.c)
 */

_UNKNOWN **__fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        float *a2)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  float i; // xmm6_4
  __int64 v8; // rdi
  __int64 v9; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  float v11; // [rsp+78h] [rbp+20h] BYREF

  result = &retaddr;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = 0;
  for ( i = *(float *)(a1 + 44); v4 < v3; *(_DWORD *)(v9 + 12) = (_DWORD)result )
  {
    v8 = *(_QWORD *)(a1 + 8) + (int)(v4 * *(_DWORD *)(a1 + 16));
    v9 = *(_QWORD *)(a1 + 56) + (int)(v4 * *(_DWORD *)(a1 + 64));
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
      (float *)v8,
      *(_QWORD *)(a1 + 24) + (int)(v4 * *(_DWORD *)(a1 + 32)),
      *(_DWORD *)(a1 + 40),
      a2,
      (float *)v9,
      &v11);
    *(_DWORD *)(v9 + 8) = 1065353216;
    result = (_UNKNOWN **)BlendStraightColorDW(*(_DWORD *)(v8 + 12), i);
    ++v4;
  }
  return result;
}
