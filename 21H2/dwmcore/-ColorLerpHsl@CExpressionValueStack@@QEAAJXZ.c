/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x180003F78
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18000426C (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180004320 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(CExpressionValueStack *this)
{
  char IsEnabled; // al
  float *v3; // rbx
  __int64 v4; // rdx
  CExpressionValue *v5; // rax
  __m128i *v6; // r14
  char v7; // al
  __int64 v8; // rdx
  CExpressionValue *v9; // rax
  const __m128i *v10; // r15
  char v11; // al
  __int64 v12; // rdx
  CExpressionValue *v13; // rax
  __int32 v14; // eax
  float v15; // xmm7_4
  unsigned int v16; // ebx
  __m128 v17; // xmm0
  __m128 v18; // xmm6
  ColorSpaceHelpers *v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  ColorSpaceHelpers *v23; // rcx
  __m128i v24; // xmm0
  unsigned int v26; // [rsp+28h] [rbp-69h]
  float *v27; // [rsp+48h] [rbp-49h] BYREF
  float v28; // [rsp+50h] [rbp-41h] BYREF
  float v29; // [rsp+54h] [rbp-3Dh] BYREF
  __m128i v30; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v31[112]; // [rsp+68h] [rbp-29h] BYREF

  if ( *((_DWORD *)this + 4) < 3u )
  {
    v26 = 3182;
LABEL_21:
    v16 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v26,
      0LL);
    return v16;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (float *)&CExpressionValueStack::s_emptyValue;
  v4 = (unsigned int)(*((_DWORD *)this + 4) - 3);
  if ( IsEnabled && (unsigned int)v4 >= *((_DWORD *)this + 12) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v31);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v31);
    v6 = (__m128i *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (__m128i *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( v7 && (unsigned int)v8 >= *((_DWORD *)this + 12) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v31);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v31);
    v10 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v10 = (const __m128i *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v8);
  }
  v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v12 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( v11 && (unsigned int)v12 >= *((_DWORD *)this + 12) )
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v31);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v31);
  }
  else
  {
    v3 = (float *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v12);
  }
  v14 = v6[4].m128i_i32[2];
  v15 = *v3;
  if ( *((_DWORD *)v3 + 18) != 18 || (v16 = 0, v14 != v10[4].m128i_i32[2]) )
  {
    v26 = 3208;
    goto LABEL_21;
  }
  if ( v14 != 70 )
  {
    v26 = 3260;
    goto LABEL_21;
  }
  v17 = (__m128)_mm_loadu_si128(v6);
  v18 = (__m128)_mm_loadu_si128(v10);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    this,
    _mm_shuffle_ps(v17, v17, 85).m128_f32[0],
    _mm_shuffle_ps(v17, v17, 170).m128_f32[0],
    _mm_shuffle_ps(v17, v17, 255).m128_f32[0],
    COERCE_FLOAT(&v27),
    (float *)&v27 + 1,
    &v28,
    &v29,
    v27);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v19,
    _mm_shuffle_ps(v18, v18, 85).m128_f32[0],
    _mm_shuffle_ps(v18, v18, 170).m128_f32[0],
    _mm_shuffle_ps(v18, v18, 255).m128_f32[0],
    COERCE_FLOAT(&v30),
    (float *)&v30.m128i_i32[1],
    (float *)&v30.m128i_i32[2],
    (float *)&v30.m128i_i32[3],
    v27);
  v20 = *(float *)&v30.m128i_i32[1] - *((float *)&v27 + 1);
  v21 = *(float *)&v30.m128i_i32[2] - v28;
  v22 = *(float *)&v30.m128i_i32[3] - v29;
  v30 = 0LL;
  v17.m128_f32[0] = fmaxf(0.0, fminf(v15, 1.0));
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v23,
    (float)(v20 * v17.m128_f32[0]) + *((float *)&v27 + 1),
    (float)(v21 * v17.m128_f32[0]) + v28,
    (float)(v22 * v17.m128_f32[0]) + v29,
    COERCE_FLOAT(&v30),
    (float *)&v30.m128i_i32[1],
    (float *)&v30.m128i_i32[2],
    (float *)&v30.m128i_i32[3],
    v27);
  v24 = v30;
  v6[4].m128i_i32[2] = 70;
  v6[4].m128i_i8[12] = 1;
  *v6 = v24;
  *((_DWORD *)this + 4) -= 2;
  return v16;
}
