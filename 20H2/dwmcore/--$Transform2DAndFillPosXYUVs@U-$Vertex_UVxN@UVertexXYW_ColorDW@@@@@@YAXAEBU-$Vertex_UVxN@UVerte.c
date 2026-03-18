/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x180065280
 * Callers:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001D6A8 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800625D0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A81A0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A8258 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A8310 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 * Callees:
 *     sqrtf_0 @ 0x1800EE99B (sqrtf_0.c)
 */

float *__fastcall Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
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
  float v12; // xmm7_4
  __int64 v13; // rsi
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm7_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm10_4
  float *result; // rax
  __int64 v24; // rbx
  float v25; // xmm8_4
  signed __int64 v26; // rcx
  __int64 v27; // rdx
  float v28; // xmm1_4

  v8 = a1[1] - *(float *)(a2 + 4);
  v9 = a4[1];
  v10 = *a1 - *(float *)a2;
  v11 = a4[5];
  v12 = a4[4];
  v13 = a3;
  v14 = v11 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2));
  v15 = (float)(v12 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))) + (float)(*a4 * COERCE_FLOAT(*(_QWORD *)a2));
  v16 = v12 * v8;
  v17 = v11 * v8;
  v18 = *(float *)&FLOAT_1_0;
  v19 = v15 + a4[12];
  v20 = v16 + (float)(*a4 * v10);
  v21 = v17 + (float)(v9 * v10);
  v22 = (float)(v14 + (float)(v9 * COERCE_FLOAT(*(_QWORD *)a2))) + a4[13];
  if ( v20 != 0.0 || v21 != 0.0 )
    v18 = *(float *)(a2 + 8) / sqrtf_0((float)(v21 * v21) + (float)(v20 * v20));
  result = a6;
  *a6 = v19;
  a6[1] = v22;
  *a5 = (float)(v20 * v18) + v19;
  a5[1] = (float)(v21 * v18) + v22;
  if ( v18 > 1.0 && *(float *)(a2 + 12) == 0.0 )
    v18 = *(float *)&FLOAT_1_0;
  if ( (_DWORD)v13 )
  {
    v24 = a2 - (_QWORD)a1;
    v25 = 1.0 - v18;
    v26 = (char *)a5 - (char *)a1;
    result = a1 + 5;
    v27 = v13;
    do
    {
      v28 = (float)(v25 * *(float *)((char *)result + v24)) + (float)(v18 * *result);
      *(float *)((char *)result + v26 - 4) = (float)(v25 * *(float *)((char *)result + v24 - 4))
                                           + (float)(v18 * *(result - 1));
      *(float *)((char *)result + v26) = v28;
      result += 2;
      --v27;
    }
    while ( v27 );
  }
  return result;
}
