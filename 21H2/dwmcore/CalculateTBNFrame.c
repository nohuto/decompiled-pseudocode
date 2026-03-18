/*
 * XREFs of CalculateTBNFrame @ 0x18000DC2C
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000D6E4 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateTBNFrame(_QWORD *a1, _QWORD *a2, float *a3, float *a4, __int64 a5)
{
  float *v5; // rax
  float v6; // xmm11_4
  float v7; // xmm12_4
  float *v8; // rax
  float v9; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm14_4
  float *v13; // rax
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm9_4
  float *v17; // rax
  __m128 v18; // xmm5
  float v19; // xmm9_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm2_4
  __m128 v23; // xmm10
  __m128 v24; // xmm1
  unsigned __int64 v25; // xmm10_8
  float v26; // xmm8_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  __int64 result; // rax
  float v30; // xmm4_4
  float v31; // xmm6_4
  float v32; // xmm7_4
  float v33; // [rsp+8h] [rbp-A0h]

  v5 = (float *)a1[1];
  v6 = *v5;
  v7 = v5[1];
  v8 = (float *)a1[2];
  v9 = v6 - *(float *)*a1;
  v10 = v7 - *(float *)(*a1 + 4LL);
  v11 = *v8;
  v12 = v8[1];
  v13 = (float *)a2[1];
  v14 = v11 - *(float *)*a1;
  v15 = v12 - *(float *)(*a1 + 4LL);
  v18 = (__m128)*(unsigned int *)v13;
  v16 = v13[1];
  v17 = (float *)a2[2];
  v18.m128_f32[0] = v18.m128_f32[0] - *(float *)*a2;
  v19 = v16 - *(float *)(*a2 + 4LL);
  v20 = *v17 - *(float *)*a2;
  v21 = v17[1] - *(float *)(*a2 + 4LL);
  v22 = (float)(v21 * v18.m128_f32[0]) - (float)(v20 * v19);
  if ( COERCE_FLOAT(LODWORD(v22) & _xmm) < 0.0000011920929 )
  {
    v26 = *(float *)&FLOAT_1_0;
    v33 = 0.0;
    v27 = 0.0;
    v28 = 0.0;
    v25 = _mm_unpacklo_ps((__m128)0LL, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  }
  else
  {
    v23 = v18;
    v24 = v18;
    v23.m128_f32[0] = (float)((float)(v18.m128_f32[0] * v14) - (float)(v20 * v9)) * (float)(1.0 / v22);
    v24.m128_f32[0] = (float)((float)(v18.m128_f32[0] * v15) - (float)(v20 * v10)) * (float)(1.0 / v22);
    v33 = (float)((float)(v18.m128_f32[0] * 0.0) - (float)(v20 * 0.0)) * (float)(1.0 / v22);
    v25 = _mm_unpacklo_ps(v23, v24).m128_u64[0];
    v26 = (float)((float)(v21 * v9) - (float)(v19 * v14)) * (float)(1.0 / v22);
    v27 = (float)((float)(v21 * v10) - (float)(v19 * v15)) * (float)(1.0 / v22);
    v28 = (float)((float)(v21 * 0.0) - (float)(v19 * 0.0)) * (float)(1.0 / v22);
  }
  result = LODWORD(v33);
  v30 = (float)((float)(*a3 * v26) + (float)(a3[1] * v27)) + (float)(a3[2] * v28);
  v31 = v27 - (float)(a3[1] * v30);
  v32 = v28 - (float)(a3[2] * v30);
  *a4 = v26 - (float)(*a3 * v30);
  a4[1] = v31;
  a4[2] = v32;
  *(_QWORD *)a5 = v25;
  *(float *)(a5 + 8) = v33;
  return result;
}
