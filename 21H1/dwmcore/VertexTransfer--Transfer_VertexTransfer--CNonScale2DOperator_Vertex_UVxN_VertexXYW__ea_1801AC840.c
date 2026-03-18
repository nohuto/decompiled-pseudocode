/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801AC840
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180021BE8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x1800150E4 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180022A84 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?BlendStraightColorDW@@YAKKM@Z @ 0x1801AB050 (-BlendStraightColorDW@@YAKKM@Z.c)
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801ADF44 (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTr.c)
 */

__int16 __fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        int a2,
        CMILMatrix *a3,
        CMILMatrix *a4)
{
  struct D2DQuaternion *v4; // rax
  unsigned int v5; // ebx
  struct D2D_POINT_2F *v6; // rbp
  unsigned int v8; // r14d
  float v11; // xmm6_4
  __int64 v12; // r11
  int v13; // eax
  __int64 v14; // r10
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v4 = (struct D2DQuaternion *)&retaddr;
  v5 = 0;
  v6 = *(struct D2D_POINT_2F **)a1;
  v8 = *(_DWORD *)(a1 + 20);
  v11 = *(float *)(a1 + 44);
  v16 = _xmm;
  if ( a3 && a4 )
  {
    v4 = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v16, (__int64)v6, (__int64 *)(a1 + 8), a3, a4);
    v16 = *(_OWORD *)v4;
  }
  if ( v8 )
  {
    do
    {
      VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        a1,
        *(_DWORD *)(a1 + 8) + v5 * *(_DWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 40),
        a2,
        *(_QWORD *)(a1 + 56) + (int)(v5 * *(_DWORD *)(a1 + 64)));
      v13 = BlendStraightColorDW(*(_DWORD *)(v12 + 12), v11);
      *(_DWORD *)(v14 + 12) = v13;
      LOWORD(v4) = VertexTransfer::TransformDeviceSpacePositionAndNormal(v6++, a3, (__int64)&v16, v14);
      ++v5;
    }
    while ( v5 < v8 );
  }
  return (__int16)v4;
}
