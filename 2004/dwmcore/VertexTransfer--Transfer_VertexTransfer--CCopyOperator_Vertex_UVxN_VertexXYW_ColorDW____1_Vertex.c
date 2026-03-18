/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A832C
 * Callers:
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801A8658 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 * Callees:
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801A857C (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 */

int __fastcall VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned int v2; // r14d
  unsigned int v3; // ebp
  float i; // xmm6_4
  unsigned int *v6; // rdi
  _DWORD *v7; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  for ( i = *(float *)(a1 + 44); v3 < v2; v7[3] = (_DWORD)v1 )
  {
    v6 = (unsigned int *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
    v7 = (_DWORD *)(*(_QWORD *)(a1 + 56) + (int)(v3 * *(_DWORD *)(a1 + 64)));
    memcpy_0(v7, v6, (unsigned int)(8 * *(_DWORD *)(a1 + 40) + 16));
    LODWORD(v1) = BlendPremultipliedColorDW(v6[3], i);
    ++v3;
  }
  return (int)v1;
}
