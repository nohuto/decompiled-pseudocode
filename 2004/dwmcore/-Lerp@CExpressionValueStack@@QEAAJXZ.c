/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x1801FDAC4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  unsigned int v1; // r11d
  CExpressionValueStack *v2; // r10
  __int64 v3; // rdx
  float v4; // xmm8_4
  unsigned int v5; // ebx
  __m128 v6; // xmm4
  __m128 v7; // xmm15
  __m128 v8; // xmm1
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __m128 v11; // xmm14
  float v12; // xmm0_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm0_4
  float v16; // xmm9_4
  float v17; // xmm11_4
  float v18; // xmm0_4
  float v19; // xmm10_4
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm0_4
  __m128 v25; // xmm6
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  __m128 v30; // xmm7
  __m128 v31; // xmm6
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  __m128 v38; // xmm5
  __m128 v39; // xmm4
  float v40; // xmm3_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  unsigned int v51; // [rsp+28h] [rbp-E0h]
  float v52; // [rsp+38h] [rbp-D0h]
  __int64 v53; // [rsp+38h] [rbp-D0h]
  float v54; // [rsp+40h] [rbp-C8h]
  __m128 v55; // [rsp+48h] [rbp-C0h]
  __int128 v56; // [rsp+48h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-C0h]
  float v58; // [rsp+50h] [rbp-B8h]
  __int64 v59; // [rsp+58h] [rbp-B0h]
  __int32 v60; // [rsp+60h] [rbp-A8h]
  float v61[42]; // [rsp+70h] [rbp-98h]

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 3 )
  {
    v51 = 2979;
LABEL_20:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v51,
      0LL);
    return v5;
  }
  v3 = *((_QWORD *)this + 3);
  this = (CExpressionValueStack *)*(unsigned int *)(v3 + 80LL * (v1 - 3) + 72);
  v4 = *(float *)(v3 + 80LL * (v1 - 1));
  if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) != 18 || (v5 = 0, (_DWORD)this != *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72)) )
  {
    v51 = 3005;
    goto LABEL_20;
  }
  switch ( (_DWORD)this )
  {
    case 0x12:
      v49 = *(float *)(v3 + 80LL * (v1 - 2)) - *(float *)(v3 + 80LL * (v1 - 3));
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 18;
      *(float *)(v3 + 80LL * (v1 - 3)) = (float)(fmaxf(0.0, fminf(v4, 1.0)) * v49) + *(float *)(v3 + 80LL * (v1 - 3));
      break;
    case 0x23:
      v45 = *(float *)(v3 + 80LL * (v1 - 2)) - *(float *)(v3 + 80LL * (v1 - 3));
      v46 = *(float *)(v3 + 80LL * (v1 - 2) + 4) - *(float *)(v3 + 80LL * (v1 - 3) + 4);
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 35;
      v47 = fmaxf(0.0, fminf(v4, 1.0));
      v48 = (float)(v46 * v47) + *(float *)(v3 + 80LL * (v1 - 3) + 4);
      *(float *)(v3 + 80LL * (v1 - 3)) = (float)(v45 * v47) + *(float *)(v3 + 80LL * (v1 - 3));
      *(float *)(v3 + 80LL * (v1 - 3) + 4) = v48;
      break;
    case 0x34:
      v53 = *(_QWORD *)(v3 + 80LL * (v1 - 3));
      v57 = *(_QWORD *)(v3 + 80LL * (v1 - 2));
      v44 = fmaxf(0.0, fminf(v4, 1.0));
      v54 = *(float *)(v3 + 80LL * (v1 - 3) + 8);
      v58 = *(float *)(v3 + 80LL * (v1 - 2) + 8);
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 52;
      *(float *)(v3 + 80LL * (v1 - 3)) = (float)((float)(*(float *)&v57 - *(float *)&v53) * v44) + *(float *)&v53;
      *(float *)(v3 + 80LL * (v1 - 3) + 4) = (float)((float)(*((float *)&v57 + 1) - *((float *)&v53 + 1)) * v44)
                                           + *((float *)&v53 + 1);
      *(float *)(v3 + 80LL * (v1 - 3) + 8) = (float)((float)(v58 - v54) * v44) + v54;
      break;
    case 0x45:
      v38 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 80LL * (v1 - 2)));
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 69;
      v39 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 80LL * (v1 - 3)));
      v40 = fmaxf(0.0, fminf(v4, 1.0));
      *(float *)&v56 = (float)((float)(v38.m128_f32[0] - v39.m128_f32[0]) * v40) + v39.m128_f32[0];
      v41 = _mm_shuffle_ps(v39, v39, 85).m128_f32[0];
      v42 = (float)((float)(_mm_shuffle_ps(v38, v38, 85).m128_f32[0] - v41) * v40) + v41;
      v43 = _mm_shuffle_ps(v39, v39, 170).m128_f32[0];
      v39.m128_f32[0] = _mm_shuffle_ps(v39, v39, 255).m128_f32[0];
      *((float *)&v56 + 1) = v42;
      *((float *)&v56 + 2) = (float)((float)(_mm_shuffle_ps(v38, v38, 170).m128_f32[0] - v43) * v40) + v43;
      *((float *)&v56 + 3) = (float)((float)(_mm_shuffle_ps(v38, v38, 255).m128_f32[0] - v39.m128_f32[0]) * v40)
                           + v39.m128_f32[0];
      *(_OWORD *)(v3 + 80LL * (v1 - 3)) = v56;
      break;
    case 0x68:
      v30 = *(__m128 *)(v3 + 80LL * (v1 - 3));
      v31 = *(__m128 *)(v3 + 80LL * (v1 - 2));
      *(_QWORD *)v61 = *(_QWORD *)(v3 + 80LL * (v1 - 3) + 16);
      v59 = *(_QWORD *)(v3 + 80LL * (v1 - 2) + 16);
      v32 = _mm_shuffle_ps(v30, v30, 85).m128_f32[0];
      v33 = fmaxf(0.0, fminf(v4, 1.0));
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 104;
      v34 = (float)((float)(_mm_shuffle_ps(v31, v31, 85).m128_f32[0] - v32) * v33) + v32;
      v35 = _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
      v36 = (float)((float)(_mm_shuffle_ps(v31, v31, 170).m128_f32[0] - v35) * v33) + v35;
      v37 = _mm_shuffle_ps(v30, v30, 255).m128_f32[0];
      *(float *)(v3 + 80LL * (v1 - 3)) = (float)((float)(v31.m128_f32[0] - v30.m128_f32[0]) * v33) + v30.m128_f32[0];
      *(float *)(v3 + 80LL * (v1 - 3) + 4) = v34;
      *(float *)(v3 + 80LL * (v1 - 3) + 8) = v36;
      *(float *)(v3 + 80LL * (v1 - 3) + 12) = (float)((float)(_mm_shuffle_ps(v31, v31, 255).m128_f32[0] - v37) * v33)
                                            + v37;
      *(float *)(v3 + 80LL * (v1 - 3) + 16) = (float)((float)(*(float *)&v59 - v61[0]) * v33) + v61[0];
      *(float *)(v3 + 80LL * (v1 - 3) + 20) = (float)((float)(*((float *)&v59 + 1) - v61[1]) * v33) + v61[1];
      break;
    case 0x109:
      v6 = *(__m128 *)(v3 + 80LL * (v1 - 3));
      v7 = *(__m128 *)(v3 + 80LL * (v1 - 2));
      v8 = *(__m128 *)(v3 + 80LL * (v1 - 3) + 16);
      v9 = *(__m128 *)(v3 + 80LL * (v1 - 2) + 16);
      v10 = *(__m128 *)(v3 + 80LL * (v1 - 3) + 32);
      v11 = *(__m128 *)(v3 + 80LL * (v1 - 3) + 48);
      v55 = *(__m128 *)(v3 + 80LL * (v1 - 2) + 48);
      v12 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
      v13 = fmaxf(0.0, fminf(v4, 1.0));
      v14 = (float)((float)(_mm_shuffle_ps(v7, v7, 85).m128_f32[0] - v12) * v13) + v12;
      v15 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
      v16 = (float)((float)(v9.m128_f32[0] - v8.m128_f32[0]) * v13) + v8.m128_f32[0];
      v17 = (float)((float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] - v15) * v13) + v15;
      v18 = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
      v19 = (float)((float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] - v18) * v13) + v18;
      v20 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
      v21 = (float)((float)(_mm_shuffle_ps(v9, v9, 85).m128_f32[0] - v20) * v13) + v20;
      v22 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
      v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
      v23 = (float)((float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v22) * v13) + v22;
      v24 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
      v9.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] - v8.m128_f32[0]) * v13) + v8.m128_f32[0];
      v25 = *(__m128 *)(v3 + 80LL * (v1 - 2) + 32);
      v6.m128_f32[0] = _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
      v8.m128_f32[0] = _mm_shuffle_ps(v25, v25, 255).m128_f32[0];
      v60 = v9.m128_i32[0];
      v26 = (float)((float)(_mm_shuffle_ps(v25, v25, 85).m128_f32[0] - v24) * v13) + v24;
      v27 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
      v25.m128_f32[0] = (float)((float)(v25.m128_f32[0] - v10.m128_f32[0]) * v13) + v10.m128_f32[0];
      v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 255).m128_f32[0];
      v6.m128_f32[0] = (float)((float)(v6.m128_f32[0] - v27) * v13) + v27;
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 265;
      v28 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
      v52 = (float)((float)(v8.m128_f32[0] - v10.m128_f32[0]) * v13) + v10.m128_f32[0];
      v9.m128_f32[0] = (float)((float)(v55.m128_f32[0] - v11.m128_f32[0]) * v13) + v11.m128_f32[0];
      v10.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v55, v55, 85).m128_f32[0] - v28) * v13) + v28;
      v29 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
      v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
      *(float *)(v3 + 80LL * (v1 - 3)) = (float)((float)(v7.m128_f32[0] - COERCE_FLOAT(*(_OWORD *)(v3 + 80LL * (v1 - 3))))
                                               * v13)
                                       + COERCE_FLOAT(*(_OWORD *)(v3 + 80LL * (v1 - 3)));
      *(float *)(v3 + 80LL * (v1 - 3) + 4) = v14;
      *(float *)(v3 + 80LL * (v1 - 3) + 8) = v17;
      *(float *)(v3 + 80LL * (v1 - 3) + 12) = v19;
      *(float *)(v3 + 80LL * (v1 - 3) + 16) = v16;
      *(float *)(v3 + 80LL * (v1 - 3) + 20) = v21;
      *(float *)(v3 + 80LL * (v1 - 3) + 24) = v23;
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 28) = v60;
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 32) = v25.m128_i32[0];
      *(float *)(v3 + 80LL * (v1 - 3) + 36) = v26;
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 40) = v6.m128_i32[0];
      *(float *)(v3 + 80LL * (v1 - 3) + 44) = v52;
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 48) = v9.m128_i32[0];
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 52) = v10.m128_i32[0];
      *(float *)(v3 + 80LL * (v1 - 3) + 56) = (float)((float)(_mm_shuffle_ps(v55, v55, 170).m128_f32[0] - v29) * v13)
                                            + v29;
      *(float *)(v3 + 80LL * (v1 - 3) + 60) = (float)((float)(_mm_shuffle_ps(v55, v55, 255).m128_f32[0] - v11.m128_f32[0])
                                                    * v13)
                                            + v11.m128_f32[0];
      break;
    default:
      v51 = 3114;
      goto LABEL_20;
  }
  *(_BYTE *)(v3 + 80LL * (v1 - 3) + 76) = 1;
  *((_DWORD *)v2 + 4) -= 2;
  return v5;
}
