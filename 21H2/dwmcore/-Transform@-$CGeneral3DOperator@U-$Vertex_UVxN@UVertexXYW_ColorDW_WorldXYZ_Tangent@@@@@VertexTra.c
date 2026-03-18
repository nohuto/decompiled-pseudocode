/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011344E
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801EEB6C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801EECCC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801EECCC.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801EEE2C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801EEE2C.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x1800091A4 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 */

float *__fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_POINT_2F *a3,
        unsigned int a4,
        CMILMatrix *a5,
        __int64 a6)
{
  __int64 v8; // r14
  float v10; // xmm11_4
  float v11; // xmm12_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  __int64 v16; // xmm0_8
  float *result; // rax
  __int64 v18; // rbx
  float v19; // xmm7_4
  signed __int64 v20; // rdi
  __int64 v21; // rcx
  float v22; // xmm1_4
  struct D2D_POINT_2F v23; // [rsp+28h] [rbp-79h] BYREF
  float v24; // [rsp+30h] [rbp-71h]
  __int64 v25; // [rsp+38h] [rbp-69h] BYREF
  float v26; // [rsp+40h] [rbp-61h]
  __int64 v27; // [rsp+48h] [rbp-59h] BYREF
  float v28; // [rsp+50h] [rbp-51h]

  v8 = a4;
  CMILMatrix::Transform(a5, a2, (struct HomogeneousPoint2D *)&v23);
  CMILMatrix::Transform(a5, a3, (struct HomogeneousPoint2D *)&v27);
  v10 = *(float *)&v27 / v28;
  v11 = *((float *)&v27 + 1) / v28;
  v12 = (float)(v23.x / v24) - (float)(*(float *)&v27 / v28);
  v13 = (float)(v23.y / v24) - (float)(*((float *)&v27 + 1) / v28);
  v14 = o_sqrtf_0((float)(v13 * v13) + (float)(v12 * v12));
  v15 = *(float *)&FLOAT_1_0;
  if ( v14 > 0.0 )
    v15 = a3[1].x / v14;
  v23.x = (float)(v12 * v15) + v10;
  v23.y = (float)(v13 * v15) + v11;
  CMILMatrix::Transform(this, &v23, (struct HomogeneousPoint2D *)&v25);
  v23.x = *(float *)&v25 / v26;
  v23.y = *((float *)&v25 + 1) / v26;
  CMILMatrix::Transform(a5, &v23, (struct HomogeneousPoint2D *)&v25);
  if ( v26 <= 0.0 )
  {
    v16 = v27;
    result = (float *)LODWORD(v28);
  }
  else
  {
    v16 = v25;
    result = (float *)LODWORD(v26);
  }
  *(_QWORD *)a6 = v16;
  *(_DWORD *)(a6 + 8) = (_DWORD)result;
  if ( v15 > 1.0 && a3[1].y == 0.0 )
    v15 = *(float *)&FLOAT_1_0;
  if ( (_DWORD)v8 )
  {
    v18 = a6 - (_QWORD)a2;
    v19 = 1.0 - v15;
    v20 = (char *)a3 - (char *)a2;
    result = &a2[2].y;
    v21 = v8;
    do
    {
      v22 = (float)(v19 * *(float *)((char *)result + v20)) + (float)(v15 * *result);
      *(float *)((char *)result + v18 + 28) = (float)(v19 * *(float *)((char *)result + v20 - 4))
                                            + (float)(v15 * *(result - 1));
      *(float *)((char *)result + v18 + 32) = v22;
      result += 2;
      --v21;
    }
    while ( v21 );
  }
  return result;
}
