/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x18024B9EC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(__int64 this)
{
  __int64 v1; // rdi
  unsigned __int8 IsEnabled; // al
  float *v3; // r14
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _OWORD *v6; // rbx
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  _QWORD *v10; // rsi
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  int v14; // eax
  float v15; // xmm8_4
  unsigned int v16; // r14d
  __m128 v17; // xmm4
  __m128 v18; // xmm15
  __m128 v19; // xmm1
  __m128 v20; // xmm3
  __m128 v21; // xmm2
  __m128 v22; // xmm14
  float v23; // xmm0_4
  float v24; // xmm12_4
  float v25; // xmm13_4
  float v26; // xmm0_4
  float v27; // xmm9_4
  float v28; // xmm11_4
  float v29; // xmm0_4
  float v30; // xmm10_4
  float v31; // xmm0_4
  float v32; // xmm8_4
  float v33; // xmm0_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  __m128 v36; // xmm6
  float v37; // xmm5_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  __m128 v41; // xmm7
  __m128 v42; // xmm6
  float v43; // xmm0_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  float v46; // xmm0_4
  float v47; // xmm3_4
  float v48; // xmm0_4
  __m128 v49; // xmm5
  __m128 v50; // xmm4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm0_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm0_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  unsigned int v64; // [rsp+28h] [rbp-E0h]
  __m128 v65; // [rsp+38h] [rbp-D0h]
  __int128 v66; // [rsp+38h] [rbp-D0h]
  float v67; // [rsp+40h] [rbp-C8h]
  __int64 v68; // [rsp+48h] [rbp-C0h]
  float v69; // [rsp+50h] [rbp-B8h]
  __int64 v70; // [rsp+50h] [rbp-B8h]
  float v71; // [rsp+58h] [rbp-B0h]
  __int32 v72; // [rsp+60h] [rbp-A8h]
  __int64 v73; // [rsp+70h] [rbp-98h]
  _BYTE v74[240]; // [rsp+78h] [rbp-90h] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) < 3u )
  {
    v64 = 2995;
LABEL_32:
    v16 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v64);
    return v16;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (float *)&CExpressionValueStack::s_emptyValue;
  v4 = *(_DWORD *)(v1 + 16) - 3;
  if ( IsEnabled && v4 >= *(_DWORD *)(v1 + 48) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v74);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v74);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (_OWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = *(_DWORD *)(v1 + 16) - 2;
  if ( v7 && v8 >= *(_DWORD *)(v1 + 48) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v74);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v74);
    v10 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v10 = (_QWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v8);
  }
  v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v12 = *(_DWORD *)(v1 + 16) - 1;
  if ( v11 && v12 >= *(_DWORD *)(v1 + 48) )
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v74);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v74);
  }
  else
  {
    v3 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v12);
  }
  v14 = *((_DWORD *)v6 + 18);
  v15 = *v3;
  if ( *((_DWORD *)v3 + 18) != 18 || (v16 = 0, v14 != *((_DWORD *)v10 + 18)) )
  {
    v64 = 3021;
    goto LABEL_32;
  }
  switch ( v14 )
  {
    case 18:
      v62 = *(float *)v10 - *(float *)v6;
      *((_DWORD *)v6 + 18) = 18;
      *(float *)v6 = (float)(fmaxf(0.0, fminf(v15, 1.0)) * v62) + *(float *)v6;
      break;
    case 35:
      v58 = *(float *)v10 - *(float *)v6;
      v59 = *((float *)v10 + 1) - *((float *)v6 + 1);
      *((_DWORD *)v6 + 18) = 35;
      v60 = fmaxf(0.0, fminf(v15, 1.0));
      v61 = (float)(v59 * v60) + *((float *)v6 + 1);
      *(float *)v6 = (float)(v58 * v60) + *(float *)v6;
      *((float *)v6 + 1) = v61;
      break;
    case 52:
      v70 = *(_QWORD *)v6;
      v55 = COERCE_FLOAT(*v10) - COERCE_FLOAT(*(_QWORD *)v6);
      v56 = fmaxf(0.0, fminf(v15, 1.0));
      v57 = COERCE_FLOAT(HIDWORD(*v10)) - COERCE_FLOAT(HIDWORD(*(_QWORD *)v6));
      v71 = *((float *)v6 + 2);
      v67 = *((float *)v10 + 2);
      *((_DWORD *)v6 + 18) = 52;
      *(float *)v6 = (float)(v55 * v56) + *(float *)&v70;
      *((float *)v6 + 1) = (float)(v57 * v56) + *((float *)&v70 + 1);
      *((float *)v6 + 2) = (float)((float)(v67 - v71) * v56) + v71;
      break;
    case 69:
      v49 = (__m128)_mm_loadu_si128((const __m128i *)v10);
      *((_DWORD *)v6 + 18) = 69;
      v50 = (__m128)_mm_loadu_si128((const __m128i *)v6);
      v51 = fmaxf(0.0, fminf(v15, 1.0));
      *(float *)&v66 = (float)((float)(v49.m128_f32[0] - v50.m128_f32[0]) * v51) + v50.m128_f32[0];
      v52 = _mm_shuffle_ps(v50, v50, 85).m128_f32[0];
      v53 = (float)((float)(_mm_shuffle_ps(v49, v49, 85).m128_f32[0] - v52) * v51) + v52;
      v54 = _mm_shuffle_ps(v50, v50, 170).m128_f32[0];
      v50.m128_f32[0] = _mm_shuffle_ps(v50, v50, 255).m128_f32[0];
      *((float *)&v66 + 1) = v53;
      *((float *)&v66 + 2) = (float)((float)(_mm_shuffle_ps(v49, v49, 170).m128_f32[0] - v54) * v51) + v54;
      *((float *)&v66 + 3) = (float)((float)(_mm_shuffle_ps(v49, v49, 255).m128_f32[0] - v50.m128_f32[0]) * v51)
                           + v50.m128_f32[0];
      *v6 = v66;
      break;
    case 104:
      v41 = *(__m128 *)v6;
      v42 = *(__m128 *)v10;
      v73 = *((_QWORD *)v6 + 2);
      v68 = v10[2];
      v43 = _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
      v44 = fmaxf(0.0, fminf(v15, 1.0));
      *((_DWORD *)v6 + 18) = 104;
      v45 = (float)((float)(_mm_shuffle_ps(v42, v42, 85).m128_f32[0] - v43) * v44) + v43;
      v46 = _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
      v47 = (float)((float)(_mm_shuffle_ps(v42, v42, 170).m128_f32[0] - v46) * v44) + v46;
      v48 = _mm_shuffle_ps(v41, v41, 255).m128_f32[0];
      *(float *)v6 = (float)((float)(v42.m128_f32[0] - v41.m128_f32[0]) * v44) + v41.m128_f32[0];
      *((float *)v6 + 1) = v45;
      *((float *)v6 + 2) = v47;
      *((float *)v6 + 3) = (float)((float)(_mm_shuffle_ps(v42, v42, 255).m128_f32[0] - v48) * v44) + v48;
      *((float *)v6 + 4) = (float)((float)(*(float *)&v68 - *(float *)&v73) * v44) + *(float *)&v73;
      *((float *)v6 + 5) = (float)((float)(*((float *)&v68 + 1) - *((float *)&v73 + 1)) * v44) + *((float *)&v73 + 1);
      break;
    default:
      this = 265LL;
      if ( v14 != 265 )
      {
        v64 = 3130;
        goto LABEL_32;
      }
      v17 = *(__m128 *)v6;
      v18 = *(__m128 *)v10;
      v19 = *((__m128 *)v6 + 1);
      v20 = *((__m128 *)v10 + 1);
      v21 = *((__m128 *)v6 + 2);
      v22 = *((__m128 *)v6 + 3);
      v65 = *((__m128 *)v10 + 3);
      v23 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
      v24 = fmaxf(0.0, fminf(v15, 1.0));
      v25 = (float)((float)(_mm_shuffle_ps(v18, v18, 85).m128_f32[0] - v23) * v24) + v23;
      v26 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
      v27 = (float)((float)(v20.m128_f32[0] - v19.m128_f32[0]) * v24) + v19.m128_f32[0];
      v28 = (float)((float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] - v26) * v24) + v26;
      v29 = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
      v30 = (float)((float)(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] - v29) * v24) + v29;
      v31 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
      v32 = (float)((float)(_mm_shuffle_ps(v20, v20, 85).m128_f32[0] - v31) * v24) + v31;
      v33 = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
      v19.m128_f32[0] = _mm_shuffle_ps(v19, v19, 255).m128_f32[0];
      v34 = (float)((float)(_mm_shuffle_ps(v20, v20, 170).m128_f32[0] - v33) * v24) + v33;
      v35 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      v20.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v20, v20, 255).m128_f32[0] - v19.m128_f32[0]) * v24)
                      + v19.m128_f32[0];
      v36 = *((__m128 *)v10 + 2);
      v17.m128_f32[0] = _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
      v19.m128_f32[0] = _mm_shuffle_ps(v36, v36, 255).m128_f32[0];
      v72 = v20.m128_i32[0];
      v37 = (float)((float)(_mm_shuffle_ps(v36, v36, 85).m128_f32[0] - v35) * v24) + v35;
      v38 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
      v36.m128_f32[0] = (float)((float)(v36.m128_f32[0] - v21.m128_f32[0]) * v24) + v21.m128_f32[0];
      v21.m128_f32[0] = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
      v17.m128_f32[0] = (float)((float)(v17.m128_f32[0] - v38) * v24) + v38;
      *((_DWORD *)v6 + 18) = 265;
      v39 = _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
      v69 = (float)((float)(v19.m128_f32[0] - v21.m128_f32[0]) * v24) + v21.m128_f32[0];
      v20.m128_f32[0] = (float)((float)(v65.m128_f32[0] - v22.m128_f32[0]) * v24) + v22.m128_f32[0];
      v21.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v65, v65, 85).m128_f32[0] - v39) * v24) + v39;
      v40 = _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
      v22.m128_f32[0] = _mm_shuffle_ps(v22, v22, 255).m128_f32[0];
      *(float *)v6 = (float)((float)(v18.m128_f32[0] - COERCE_FLOAT(*v6)) * v24) + COERCE_FLOAT(*v6);
      *((float *)v6 + 1) = v25;
      *((float *)v6 + 2) = v28;
      *((float *)v6 + 3) = v30;
      *((float *)v6 + 4) = v27;
      *((float *)v6 + 5) = v32;
      *((float *)v6 + 6) = v34;
      *((_DWORD *)v6 + 7) = v72;
      *((_DWORD *)v6 + 8) = v36.m128_i32[0];
      *((float *)v6 + 9) = v37;
      *((_DWORD *)v6 + 10) = v17.m128_i32[0];
      *((float *)v6 + 11) = v69;
      *((_DWORD *)v6 + 12) = v20.m128_i32[0];
      *((_DWORD *)v6 + 13) = v21.m128_i32[0];
      *((float *)v6 + 14) = (float)((float)(_mm_shuffle_ps(v65, v65, 170).m128_f32[0] - v40) * v24) + v40;
      *((float *)v6 + 15) = (float)((float)(_mm_shuffle_ps(v65, v65, 255).m128_f32[0] - v22.m128_f32[0]) * v24)
                          + v22.m128_f32[0];
      break;
  }
  *((_BYTE *)v6 + 76) = 1;
  *(_DWORD *)(v1 + 16) -= 2;
  return v16;
}
