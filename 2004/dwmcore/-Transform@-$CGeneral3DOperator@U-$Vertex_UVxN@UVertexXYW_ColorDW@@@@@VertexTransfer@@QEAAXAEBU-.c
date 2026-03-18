/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x180012B20
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180012694 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180012A4C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A9820 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 * Callees:
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180012DEC (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     sqrtf_0 @ 0x1800EECEB (sqrtf_0.c)
 */

float *__fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_POINT_2F *a3,
        unsigned int a4,
        CMILMatrix *a5,
        char *a6)
{
  __int64 v8; // r14
  unsigned int v10; // r9d
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm14_4
  float v14; // xmm15_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  unsigned int v17; // r9d
  float v18; // xmm0_4
  float v19; // xmm6_4
  unsigned int v20; // r9d
  float v21; // xmm4_4
  float *result; // rax
  signed __int64 v23; // rdi
  float v24; // xmm7_4
  signed __int64 v25; // rbx
  __int64 v26; // rcx
  float v27; // xmm1_4
  signed __int64 v28; // rdi
  float v29; // xmm7_4
  signed __int64 v30; // rbx
  __int64 v31; // rcx
  float v32; // xmm1_4
  struct D2D_POINT_2F v33; // [rsp+28h] [rbp-99h] BYREF
  float v34; // [rsp+34h] [rbp-8Dh]
  float v35; // [rsp+38h] [rbp-89h] BYREF
  float v36; // [rsp+3Ch] [rbp-85h]
  float v37; // [rsp+44h] [rbp-7Dh]
  float v38; // [rsp+48h] [rbp-79h] BYREF
  float v39; // [rsp+4Ch] [rbp-75h]
  float v40; // [rsp+54h] [rbp-6Dh]

  v8 = a4;
  CMILMatrix::TransformIgnoreZW(a5, a2, (struct MilPoint4F *)&v33, a4);
  CMILMatrix::TransformIgnoreZW(a5, a3, (struct MilPoint4F *)&v38, v10);
  v11 = v38;
  v12 = v39;
  v13 = v38 / v40;
  v14 = v39 / v40;
  v15 = (float)(v33.x / v34) - (float)(v38 / v40);
  v16 = (float)(v33.y / v34) - (float)(v39 / v40);
  v18 = sqrtf_0((float)(v16 * v16) + (float)(v15 * v15));
  v19 = *(float *)&FLOAT_1_0;
  if ( v18 > 0.0 )
    v19 = a3[1].x / v18;
  v33.x = (float)(v15 * v19) + v13;
  v33.y = (float)(v16 * v19) + v14;
  CMILMatrix::TransformIgnoreZW(this, &v33, (struct MilPoint4F *)&v35, v17);
  v33.y = v36 / v37;
  v33.x = v35 / v37;
  CMILMatrix::TransformIgnoreZW(a5, &v33, (struct MilPoint4F *)&v35, v20);
  v21 = v37;
  if ( v37 <= 0.0 )
  {
    v21 = v40;
  }
  else
  {
    v11 = v35;
    v12 = v36;
  }
  *(float *)a6 = v11;
  *((float *)a6 + 1) = v12;
  *((float *)a6 + 2) = v21;
  result = (float *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
  if ( (_BYTE)result )
  {
    if ( v19 > 1.0 && a3[1].y == 0.0 )
      v19 = *(float *)&FLOAT_1_0;
    if ( (_DWORD)v8 )
    {
      v23 = (char *)a3 - (char *)a2;
      v24 = 1.0 - v19;
      v25 = a6 - (char *)a2;
      result = &a2[2].y;
      v26 = v8;
      do
      {
        v27 = (float)(v24 * *(float *)((char *)result + v23)) + (float)(v19 * *result);
        *(float *)((char *)result + v25 - 4) = (float)(v24 * *(float *)((char *)result + v23 - 4))
                                             + (float)(v19 * *(result - 1));
        *(float *)((char *)result + v25) = v27;
        result += 2;
        --v26;
      }
      while ( v26 );
    }
  }
  else if ( (_DWORD)v8 )
  {
    v28 = (char *)a3 - (char *)a2;
    v29 = 1.0 - v19;
    v30 = a6 - (char *)a2;
    result = &a2[2].y;
    v31 = v8;
    do
    {
      v32 = (float)(v29 * *(float *)((char *)result + v28)) + (float)(v19 * *result);
      *(float *)((char *)result + v30 - 4) = (float)(v29 * *(float *)((char *)result + v28 - 4))
                                           + (float)(v19 * *(result - 1));
      *(float *)((char *)result + v30) = v32;
      result += 2;
      --v31;
    }
    while ( v31 );
  }
  return result;
}
