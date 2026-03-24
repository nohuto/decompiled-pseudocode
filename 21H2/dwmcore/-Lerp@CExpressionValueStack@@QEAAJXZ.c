/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x1801FD04C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rsi
  CExpressionValue *v6; // rax
  _OWORD *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  _QWORD *v10; // rdi
  CExpressionValue *v11; // rax
  int v12; // eax
  float v13; // xmm8_4
  unsigned int v14; // esi
  __m128 v15; // xmm4
  __m128 v16; // xmm15
  __m128 v17; // xmm1
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __m128 v20; // xmm14
  float v21; // xmm0_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  float v24; // xmm0_4
  float v25; // xmm9_4
  float v26; // xmm11_4
  float v27; // xmm0_4
  float v28; // xmm10_4
  float v29; // xmm0_4
  float v30; // xmm8_4
  float v31; // xmm0_4
  float v32; // xmm7_4
  float v33; // xmm0_4
  __m128 v34; // xmm6
  float v35; // xmm5_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  __m128 v39; // xmm7
  __m128 v40; // xmm6
  float v41; // xmm0_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm0_4
  float v45; // xmm3_4
  float v46; // xmm0_4
  __m128 v47; // xmm5
  __m128 v48; // xmm4
  float v49; // xmm3_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  unsigned int v62; // [rsp+28h] [rbp-E0h]
  __m128 v63; // [rsp+38h] [rbp-D0h]
  __int128 v64; // [rsp+38h] [rbp-D0h]
  float v65; // [rsp+40h] [rbp-C8h]
  __int64 v66; // [rsp+48h] [rbp-C0h]
  float v67; // [rsp+50h] [rbp-B8h]
  __int64 v68; // [rsp+50h] [rbp-B8h]
  float v69; // [rsp+58h] [rbp-B0h]
  __int32 v70; // [rsp+60h] [rbp-A8h]
  __int64 v71; // [rsp+70h] [rbp-98h]
  _BYTE v72[240]; // [rsp+78h] [rbp-90h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 3 )
  {
    v62 = 2989;
LABEL_29:
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v62,
      0LL);
    return v14;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 3);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_OWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v72);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v72);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v8 = (unsigned int)(v2 - 2);
  if ( (unsigned int)v8 < v3 )
  {
    v10 = (_QWORD *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v72);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v72);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v10 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v72);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v72);
  }
  v12 = *((_DWORD *)v7 + 18);
  v13 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v14 = 0, v12 != *((_DWORD *)v10 + 18)) )
  {
    v62 = 3015;
    goto LABEL_29;
  }
  switch ( v12 )
  {
    case 18:
      v60 = *(float *)v10 - *(float *)v7;
      *((_DWORD *)v7 + 18) = 18;
      *(float *)v7 = (float)(fmaxf(0.0, fminf(v13, 1.0)) * v60) + *(float *)v7;
      break;
    case 35:
      v56 = *(float *)v10 - *(float *)v7;
      v57 = *((float *)v10 + 1) - *((float *)v7 + 1);
      *((_DWORD *)v7 + 18) = 35;
      v58 = fmaxf(0.0, fminf(v13, 1.0));
      v59 = (float)(v57 * v58) + *((float *)v7 + 1);
      *(float *)v7 = (float)(v56 * v58) + *(float *)v7;
      *((float *)v7 + 1) = v59;
      break;
    case 52:
      v68 = *(_QWORD *)v7;
      v53 = COERCE_FLOAT(*v10) - COERCE_FLOAT(*(_QWORD *)v7);
      v54 = fmaxf(0.0, fminf(v13, 1.0));
      v55 = COERCE_FLOAT(HIDWORD(*v10)) - COERCE_FLOAT(HIDWORD(*(_QWORD *)v7));
      v69 = *((float *)v7 + 2);
      v65 = *((float *)v10 + 2);
      *((_DWORD *)v7 + 18) = 52;
      *(float *)v7 = (float)(v53 * v54) + *(float *)&v68;
      *((float *)v7 + 1) = (float)(v55 * v54) + *((float *)&v68 + 1);
      *((float *)v7 + 2) = (float)((float)(v65 - v69) * v54) + v69;
      break;
    case 69:
      v47 = (__m128)_mm_loadu_si128((const __m128i *)v10);
      *((_DWORD *)v7 + 18) = 69;
      v48 = (__m128)_mm_loadu_si128((const __m128i *)v7);
      v49 = fmaxf(0.0, fminf(v13, 1.0));
      *(float *)&v64 = (float)((float)(v47.m128_f32[0] - v48.m128_f32[0]) * v49) + v48.m128_f32[0];
      v50 = _mm_shuffle_ps(v48, v48, 85).m128_f32[0];
      v51 = (float)((float)(_mm_shuffle_ps(v47, v47, 85).m128_f32[0] - v50) * v49) + v50;
      v52 = _mm_shuffle_ps(v48, v48, 170).m128_f32[0];
      v48.m128_f32[0] = _mm_shuffle_ps(v48, v48, 255).m128_f32[0];
      *((float *)&v64 + 1) = v51;
      *((float *)&v64 + 2) = (float)((float)(_mm_shuffle_ps(v47, v47, 170).m128_f32[0] - v52) * v49) + v52;
      *((float *)&v64 + 3) = (float)((float)(_mm_shuffle_ps(v47, v47, 255).m128_f32[0] - v48.m128_f32[0]) * v49)
                           + v48.m128_f32[0];
      *v7 = v64;
      break;
    case 104:
      v39 = *(__m128 *)v7;
      v40 = *(__m128 *)v10;
      v71 = *((_QWORD *)v7 + 2);
      v66 = v10[2];
      v41 = _mm_shuffle_ps(v39, v39, 85).m128_f32[0];
      v42 = fmaxf(0.0, fminf(v13, 1.0));
      *((_DWORD *)v7 + 18) = 104;
      v43 = (float)((float)(_mm_shuffle_ps(v40, v40, 85).m128_f32[0] - v41) * v42) + v41;
      v44 = _mm_shuffle_ps(v39, v39, 170).m128_f32[0];
      v45 = (float)((float)(_mm_shuffle_ps(v40, v40, 170).m128_f32[0] - v44) * v42) + v44;
      v46 = _mm_shuffle_ps(v39, v39, 255).m128_f32[0];
      *(float *)v7 = (float)((float)(v40.m128_f32[0] - v39.m128_f32[0]) * v42) + v39.m128_f32[0];
      *((float *)v7 + 1) = v43;
      *((float *)v7 + 2) = v45;
      *((float *)v7 + 3) = (float)((float)(_mm_shuffle_ps(v40, v40, 255).m128_f32[0] - v46) * v42) + v46;
      *((float *)v7 + 4) = (float)((float)(*(float *)&v66 - *(float *)&v71) * v42) + *(float *)&v71;
      *((float *)v7 + 5) = (float)((float)(*((float *)&v66 + 1) - *((float *)&v71 + 1)) * v42) + *((float *)&v71 + 1);
      break;
    default:
      v2 = 265LL;
      if ( v12 != 265 )
      {
        v62 = 3124;
        goto LABEL_29;
      }
      v15 = *(__m128 *)v7;
      v16 = *(__m128 *)v10;
      v17 = *((__m128 *)v7 + 1);
      v18 = *((__m128 *)v10 + 1);
      v19 = *((__m128 *)v7 + 2);
      v20 = *((__m128 *)v7 + 3);
      v63 = *((__m128 *)v10 + 3);
      v21 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      v22 = fmaxf(0.0, fminf(v13, 1.0));
      v23 = (float)((float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] - v21) * v22) + v21;
      v24 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
      v25 = (float)((float)(v18.m128_f32[0] - v17.m128_f32[0]) * v22) + v17.m128_f32[0];
      v26 = (float)((float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] - v24) * v22) + v24;
      v27 = _mm_shuffle_ps(v15, v15, 255).m128_f32[0];
      v28 = (float)((float)(_mm_shuffle_ps(v16, v16, 255).m128_f32[0] - v27) * v22) + v27;
      v29 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
      v30 = (float)((float)(_mm_shuffle_ps(v18, v18, 85).m128_f32[0] - v29) * v22) + v29;
      v31 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
      v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
      v32 = (float)((float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] - v31) * v22) + v31;
      v33 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
      v18.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] - v17.m128_f32[0]) * v22)
                      + v17.m128_f32[0];
      v34 = *((__m128 *)v10 + 2);
      v15.m128_f32[0] = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
      v17.m128_f32[0] = _mm_shuffle_ps(v34, v34, 255).m128_f32[0];
      v70 = v18.m128_i32[0];
      v35 = (float)((float)(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] - v33) * v22) + v33;
      v36 = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
      v34.m128_f32[0] = (float)((float)(v34.m128_f32[0] - v19.m128_f32[0]) * v22) + v19.m128_f32[0];
      v19.m128_f32[0] = _mm_shuffle_ps(v19, v19, 255).m128_f32[0];
      v15.m128_f32[0] = (float)((float)(v15.m128_f32[0] - v36) * v22) + v36;
      *((_DWORD *)v7 + 18) = 265;
      v37 = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
      v67 = (float)((float)(v17.m128_f32[0] - v19.m128_f32[0]) * v22) + v19.m128_f32[0];
      v18.m128_f32[0] = (float)((float)(v63.m128_f32[0] - v20.m128_f32[0]) * v22) + v20.m128_f32[0];
      v19.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v63, v63, 85).m128_f32[0] - v37) * v22) + v37;
      v38 = _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
      v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
      *(float *)v7 = (float)((float)(v16.m128_f32[0] - COERCE_FLOAT(*v7)) * v22) + COERCE_FLOAT(*v7);
      *((float *)v7 + 1) = v23;
      *((float *)v7 + 2) = v26;
      *((float *)v7 + 3) = v28;
      *((float *)v7 + 4) = v25;
      *((float *)v7 + 5) = v30;
      *((float *)v7 + 6) = v32;
      *((_DWORD *)v7 + 7) = v70;
      *((_DWORD *)v7 + 8) = v34.m128_i32[0];
      *((float *)v7 + 9) = v35;
      *((_DWORD *)v7 + 10) = v15.m128_i32[0];
      *((float *)v7 + 11) = v67;
      *((_DWORD *)v7 + 12) = v18.m128_i32[0];
      *((_DWORD *)v7 + 13) = v19.m128_i32[0];
      *((float *)v7 + 14) = (float)((float)(_mm_shuffle_ps(v63, v63, 170).m128_f32[0] - v38) * v22) + v38;
      *((float *)v7 + 15) = (float)((float)(_mm_shuffle_ps(v63, v63, 255).m128_f32[0] - v20.m128_f32[0]) * v22)
                          + v20.m128_f32[0];
      break;
  }
  *((_BYTE *)v7 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v14;
}
