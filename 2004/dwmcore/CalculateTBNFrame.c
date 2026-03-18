/*
 * XREFs of CalculateTBNFrame @ 0x180023B0C
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1800233AC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateTBNFrame(float **a1, _QWORD *a2, float *a3, float *a4, __int64 a5)
{
  float *v5; // r10
  float *v6; // rax
  float *v7; // rcx
  float v8; // xmm11_4
  float v9; // xmm13_4
  float v10; // xmm12_4
  float v11; // xmm14_4
  float *v12; // rax
  float v13; // xmm9_4
  float v14; // xmm3_4
  float *v15; // rax
  float v16; // xmm9_4
  float v17; // xmm3_4
  float v18; // xmm10_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  __m128 v21; // xmm4
  float v22; // xmm8_4
  __m128 v23; // xmm0
  float v24; // xmm7_4
  __m128 v25; // xmm1
  float v26; // xmm6_4
  unsigned __int64 v27; // xmm9_8
  __int64 result; // rax
  float v29; // xmm2_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  float v32; // [rsp+8h] [rbp-A0h]

  v5 = a1[1];
  v6 = *a1;
  v7 = a1[2];
  v8 = *v5 - *v6;
  v9 = *v7 - *v6;
  v10 = v5[1] - v6[1];
  v11 = v7[1] - v6[1];
  v12 = (float *)a2[1];
  v13 = *v12;
  v14 = v12[1];
  v15 = (float *)a2[2];
  v16 = v13 - *(float *)*a2;
  v17 = v14 - *(float *)(*a2 + 4LL);
  v18 = *v15 - *(float *)*a2;
  v19 = v15[1] - *(float *)(*a2 + 4LL);
  v20 = (float)(v19 * v16) - (float)(v18 * v17);
  if ( COERCE_FLOAT(LODWORD(v20) & _xmm) < 0.0000011920929 )
  {
    v22 = *(float *)&FLOAT_1_0;
    v32 = 0.0;
    v24 = 0.0;
    v26 = 0.0;
    v27 = _mm_unpacklo_ps((__m128)0LL, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  }
  else
  {
    v21 = (__m128)(unsigned int)FLOAT_1_0;
    v21.m128_f32[0] = 1.0 / v20;
    v22 = (float)((float)(v19 * v8) - (float)(v17 * v9)) * (float)(1.0 / v20);
    v23 = v21;
    v24 = (float)((float)(v19 * v10) - (float)(v17 * v11)) * (float)(1.0 / v20);
    v23.m128_f32[0] = (float)(1.0 / v20) * (float)((float)(v16 * v9) - (float)(v18 * v8));
    v25 = v21;
    v26 = (float)((float)(v19 * 0.0) - (float)(v17 * 0.0)) * (float)(1.0 / v20);
    v25.m128_f32[0] = (float)(1.0 / v20) * (float)((float)(v16 * v11) - (float)(v18 * v10));
    v32 = (float)(1.0 / v20) * (float)((float)(v16 * 0.0) - (float)(v18 * 0.0));
    v27 = _mm_unpacklo_ps(v23, v25).m128_u64[0];
  }
  result = LODWORD(v32);
  v29 = (float)((float)(*a3 * v22) + (float)(a3[1] * v24)) + (float)(a3[2] * v26);
  v30 = v24 - (float)(a3[1] * v29);
  v31 = v26 - (float)(a3[2] * v29);
  *a4 = v22 - (float)(*a3 * v29);
  a4[1] = v30;
  a4[2] = v31;
  *(_QWORD *)a5 = v27;
  *(float *)(a5 + 8) = v32;
  return result;
}
