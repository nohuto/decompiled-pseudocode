/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801A8FD4
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180020854 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x1800124F8 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180021798 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@PEAUD2D_POINT_2F@@@Z @ 0x1801A90E0 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU-$V.c)
 */

__int16 __fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        __int64 a2,
        CMILMatrix *a3,
        CMILMatrix *a4)
{
  struct D2DQuaternion *v4; // rax
  struct D2D_POINT_2F *v6; // r15
  unsigned int v7; // esi
  unsigned int v8; // r12d
  int v9; // r8d
  __int64 v11; // rdi
  __int64 v12; // rbx
  _OWORD v14[4]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  char v16; // [rsp+80h] [rbp+8h] BYREF
  __int64 v17; // [rsp+88h] [rbp+10h]

  v4 = (struct D2DQuaternion *)&retaddr;
  v17 = a2;
  v6 = *(struct D2D_POINT_2F **)a1;
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 20);
  v9 = a2;
  v14[0] = _xmm;
  if ( a3 && a4 )
  {
    v4 = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)v14, (__int64)v6, (__int64 *)(a1 + 8), a3, a4);
    v9 = v17;
    v14[0] = *(_OWORD *)v4;
  }
  if ( v8 )
  {
    do
    {
      v11 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v7);
      v12 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v7);
      Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v7,
        *(_DWORD *)(a1 + 24) + v7 * *(_DWORD *)(a1 + 32),
        *(_DWORD *)(a1 + 40),
        v9,
        v12,
        (__int64)&v16);
      *(_DWORD *)(v12 + 8) = 1065353216;
      *(_DWORD *)(v12 + 12) = *(_DWORD *)(v11 + 12);
      LOWORD(v4) = VertexTransfer::TransformDeviceSpacePositionAndNormal(v6, a3, (__int64)v14, v12);
      v9 = v17;
      ++v6;
      ++v7;
    }
    while ( v7 < v8 );
  }
  return (__int16)v4;
}
