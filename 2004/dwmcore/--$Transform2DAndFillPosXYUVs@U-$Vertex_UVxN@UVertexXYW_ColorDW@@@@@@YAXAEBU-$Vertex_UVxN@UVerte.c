/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800C2828
 * Callers:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001DC00 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x180054600 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AA00C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AA0C8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801AA184 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     sqrtf_0 @ 0x1800EECEB (sqrtf_0.c)
 */

float *__fastcall Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
        float *a1,
        __int64 a2,
        unsigned int a3,
        float *a4,
        float *a5,
        float *a6)
{
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  __int64 v12; // rbp
  float v13; // xmm10_4
  float v14; // xmm9_4
  float v15; // xmm11_4
  float v16; // xmm8_4
  float *result; // rax
  __int64 v18; // rdi
  float v19; // xmm7_4
  signed __int64 v20; // rbx
  __int64 v21; // rcx
  float v22; // xmm1_4
  __int64 v23; // rdi
  float v24; // xmm7_4
  signed __int64 v25; // rbx
  __int64 v26; // rcx
  float v27; // xmm1_4

  v8 = a4[1];
  v9 = *a1 - *(float *)a2;
  v10 = a1[1] - *(float *)(a2 + 4);
  v11 = *(float *)&FLOAT_1_0;
  v12 = a3;
  v13 = (float)((float)(*a4 * COERCE_FLOAT(*(_QWORD *)a2)) + (float)(a4[4] * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))))
      + a4[12];
  v14 = (float)(a4[4] * v10) + (float)(*a4 * v9);
  v15 = (float)((float)(v8 * COERCE_FLOAT(*(_QWORD *)a2)) + (float)(a4[5] * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))))
      + a4[13];
  v16 = (float)(a4[5] * v10) + (float)(v8 * v9);
  if ( v14 != 0.0 || v16 != 0.0 )
    v11 = *(float *)(a2 + 8) / sqrtf_0((float)(v16 * v16) + (float)(v14 * v14));
  *a6 = v13;
  a6[1] = v15;
  *a5 = (float)(v14 * v11) + v13;
  a5[1] = (float)(v16 * v11) + v15;
  result = (float *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
  if ( (_BYTE)result )
  {
    if ( v11 > 1.0 && *(float *)(a2 + 12) == 0.0 )
      v11 = *(float *)&FLOAT_1_0;
    if ( (_DWORD)v12 )
    {
      v18 = a2 - (_QWORD)a1;
      v19 = 1.0 - v11;
      v20 = (char *)a5 - (char *)a1;
      result = a1 + 5;
      v21 = v12;
      do
      {
        v22 = (float)(v19 * *(float *)((char *)result + v18)) + (float)(v11 * *result);
        *(float *)((char *)result + v20 - 4) = (float)(v19 * *(float *)((char *)result + v18 - 4))
                                             + (float)(v11 * *(result - 1));
        *(float *)((char *)result + v20) = v22;
        result += 2;
        --v21;
      }
      while ( v21 );
    }
  }
  else if ( (_DWORD)v12 )
  {
    v23 = a2 - (_QWORD)a1;
    v24 = 1.0 - v11;
    v25 = (char *)a5 - (char *)a1;
    result = a1 + 5;
    v26 = v12;
    do
    {
      v27 = (float)(v24 * *(float *)((char *)result + v23)) + (float)(v11 * *result);
      *(float *)((char *)result + v25 - 4) = (float)(v24 * *(float *)((char *)result + v23 - 4))
                                           + (float)(v11 * *(result - 1));
      *(float *)((char *)result + v25) = v27;
      result += 2;
      --v26;
    }
    while ( v26 );
  }
  return result;
}
