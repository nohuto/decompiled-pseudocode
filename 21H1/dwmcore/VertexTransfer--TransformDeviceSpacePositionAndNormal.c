/*
 * XREFs of VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x1800150E4
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180014F9C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801AC31C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801AC31C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801AC47C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801AC47C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801AC744 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801AC840 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801AC840.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801AC93C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801AC93C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801ACC34 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801ACD5C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801ACD5C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801ACE84 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801ACE84.c)
 * Callees:
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x1800157C8 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800228B4 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

unsigned __int16 __fastcall VertexTransfer::TransformDeviceSpacePositionAndNormal(
        struct D2D_POINT_2F *a1,
        CMILMatrix *this,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm1_4
  DirectX::PackedVector *v6; // rcx
  float v7; // xmm5_4
  float v8; // xmm4_4
  __int64 v9; // r9
  _DWORD *v10; // r11
  unsigned __int16 result; // ax
  unsigned __int16 *v12; // r9
  __int64 v13; // r11
  _DWORD v14[3]; // [rsp+20h] [rbp-28h] BYREF
  float v15; // [rsp+2Ch] [rbp-1Ch]

  v6 = 0LL;
  if ( this )
  {
    CMILMatrix::TransformIgnoreZW(this, a1, (struct MilPoint4F *)v14, a4);
    v7 = v15;
    v8 = *(float *)v14;
    v4 = *(float *)&v14[2] / v15;
    *(float *)(v9 + 20) = *(float *)&v14[1] / v15;
    *(float *)(v9 + 24) = v4;
    *(float *)(v9 + 16) = v8 / v7;
    *(_DWORD *)(v9 + 32) = *v10;
    *(_DWORD *)(v9 + 36) = v10[1];
    *(_DWORD *)(v9 + 40) = v10[2];
    *(_DWORD *)(v9 + 44) = v10[3];
  }
  else
  {
    *(FLOAT *)(a4 + 16) = a1->x;
    *(_QWORD *)(a4 + 20) = LODWORD(a1->y);
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_DWORD *)(a4 + 40) = 0;
    *(_DWORD *)(a4 + 44) = 1065353216;
  }
  do
  {
    result = DirectX::PackedVector::XMConvertFloatToHalf(v6, v4);
    *v12 = result;
  }
  while ( v13 != 1 );
  return result;
}
