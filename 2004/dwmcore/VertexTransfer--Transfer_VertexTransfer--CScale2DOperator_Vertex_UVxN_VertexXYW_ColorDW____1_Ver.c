/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AA00C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180065760 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800C2828 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801A857C (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 */

_UNKNOWN **VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        float *a2,
        __int64 a3,
        ...)
{
  _UNKNOWN **result; // rax
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  float i; // xmm6_4
  __int64 v9; // rdi
  __int64 v10; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  result = &retaddr;
  v4 = *(_DWORD *)(a1 + 20);
  v5 = 0;
  for ( i = *(float *)(a1 + 44); v5 < v4; *(_DWORD *)(v10 + 12) = (_DWORD)result )
  {
    v9 = *(_QWORD *)(a1 + 8) + (int)(v5 * *(_DWORD *)(a1 + 16));
    v10 = *(_QWORD *)(a1 + 56) + (int)(v5 * *(_DWORD *)(a1 + 64));
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
      (float *)v9,
      *(_QWORD *)(a1 + 24) + (int)(v5 * *(_DWORD *)(a1 + 32)),
      *(_DWORD *)(a1 + 40),
      a2,
      (float *)v10,
      (float *)va);
    *(_DWORD *)(v10 + 8) = 1065353216;
    result = (_UNKNOWN **)BlendPremultipliedColorDW(*(_DWORD *)(v9 + 12), i);
    ++v5;
  }
  return result;
}
