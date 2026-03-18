/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@PEAUD2D_POINT_2F@@@Z @ 0x1801ACF90
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801ACC34 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801ACD5C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801ACD5C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801ACE84 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801ACE84.c)
 * Callees:
 *     sqrtf_0 @ 0x1800EBD3B (sqrtf_0.c)
 */

float *__fastcall Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        float *a1,
        __int64 a2,
        unsigned int a3,
        float *a4,
        float *a5,
        float *a6)
{
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  __int64 v12; // rsi
  float v13; // xmm0_4
  float v14; // xmm9_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm10_4
  float v19; // xmm6_4
  float *result; // rax
  signed __int64 v21; // rcx
  float v22; // xmm8_4
  __int64 v23; // rbx
  __int64 v24; // rdx
  float v25; // xmm1_4

  v8 = a1[1] - *(float *)(a2 + 4);
  v9 = a4[1];
  v10 = *a1 - *(float *)a2;
  v11 = a4[5];
  v12 = a3;
  v13 = v11 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2));
  v14 = (float)((float)(*a4 * COERCE_FLOAT(*(_QWORD *)a2)) + (float)(a4[4] * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))))
      + a4[12];
  v15 = v11 * v8;
  v16 = (float)(a4[4] * v8) + (float)(*a4 * v10);
  v17 = *(float *)&FLOAT_1_0;
  v18 = (float)((float)(v9 * COERCE_FLOAT(*(_QWORD *)a2)) + v13) + a4[13];
  v19 = v15 + (float)(v9 * v10);
  if ( v16 != 0.0 || v19 != 0.0 )
    v17 = *(float *)(a2 + 8) / sqrtf_0((float)(v19 * v19) + (float)(v16 * v16));
  result = a6;
  *a6 = v14;
  a6[1] = v18;
  *a5 = (float)(v16 * v17) + v14;
  a5[1] = (float)(v19 * v17) + v18;
  if ( (_DWORD)v12 )
  {
    v21 = (char *)a5 - (char *)a1;
    v22 = 1.0 - v17;
    v23 = a2 - (_QWORD)a1;
    result = a1 + 5;
    v24 = v12;
    do
    {
      v25 = (float)(v22 * *(float *)((char *)result + v23)) + (float)(v17 * *result);
      *(float *)((char *)result + v21 + 28) = (float)(v22 * *(float *)((char *)result + v23 - 4))
                                            + (float)(v17 * *(result - 1));
      *(float *)((char *)result + v21 + 32) = v25;
      result += 2;
      --v24;
    }
    while ( v24 );
  }
  return result;
}
