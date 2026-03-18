/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801EEE2C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000D1D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000D6E4 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180012A48 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011344E (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x1801F0A94 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        float *a2,
        CMILMatrix *a3)
{
  struct D2D_POINT_2F *v3; // rbp
  __int64 v6; // rax
  CMILMatrix *v7; // rdx
  CMILMatrix *v8; // r8
  CMILMatrix *v9; // r9
  unsigned int v10; // r12d
  unsigned int v11; // esi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  struct D2DQuaternion *result; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int128 v18; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v19[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+80h] [rbp-88h]
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF

  v3 = *(struct D2D_POINT_2F **)a1;
  v6 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)&v21, a2);
  v10 = *(_DWORD *)(a1 + 20);
  v11 = 0;
  v12 = *(_OWORD *)(v6 + 16);
  v19[0] = *(_OWORD *)v6;
  v19[1] = v12;
  v13 = *(_OWORD *)(v6 + 32);
  v14 = *(_OWORD *)(v6 + 48);
  result = (struct D2DQuaternion *)*(unsigned int *)(v6 + 64);
  v19[2] = v13;
  v19[3] = v14;
  v20 = (int)result;
  v18 = _xmm;
  if ( v8 && v9 )
  {
    result = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v18, (__int64)v3, (__int64 *)(a1 + 8), v8, v9);
    v7 = (CMILMatrix *)a2;
    v18 = *(_OWORD *)result;
  }
  if ( v10 )
  {
    do
    {
      v16 = *(_QWORD *)(a1 + 8) + (int)(v11 * *(_DWORD *)(a1 + 16));
      v17 = *(_QWORD *)(a1 + 56) + (int)(v11 * *(_DWORD *)(a1 + 64));
      VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (CMILMatrix *)v19,
        (const struct D2D_POINT_2F *)v16,
        (const struct D2D_POINT_2F *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v11)),
        *(_DWORD *)(a1 + 40),
        v7,
        v17);
      *(_DWORD *)(v17 + 12) = *(_DWORD *)(v16 + 12);
      result = (struct D2DQuaternion *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v3, a3);
      v7 = (CMILMatrix *)a2;
      ++v3;
      ++v11;
    }
    while ( v11 < v10 );
  }
  return result;
}
