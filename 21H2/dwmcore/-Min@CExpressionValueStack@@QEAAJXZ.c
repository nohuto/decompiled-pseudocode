/*
 * XREFs of ?Min@CExpressionValueStack@@QEAAJXZ @ 0x18024E870
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

__int64 __fastcall CExpressionValueStack::Min(CExpressionValueStack *this)
{
  unsigned int v2; // r14d
  unsigned __int8 IsEnabled; // al
  float *v4; // rdi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _QWORD *v7; // rbx
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  int v11; // eax
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  unsigned int v21; // [rsp+28h] [rbp-29h]
  __int128 v22; // [rsp+48h] [rbp-9h]
  _BYTE v23[80]; // [rsp+58h] [rbp+7h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (_QWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 1;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    v11 = *((_DWORD *)v7 + 18);
    v2 = 0;
    if ( v11 == *((_DWORD *)v4 + 18) )
    {
      switch ( v11 )
      {
        case 18:
          v19 = fminf(*(float *)v7, *v4);
          *((_DWORD *)v7 + 18) = 18;
          *(float *)v7 = v19;
          break;
        case 35:
          v17 = fminf(*(float *)v7, *v4);
          v18 = fminf(*((float *)v7 + 1), v4[1]);
          *((_DWORD *)v7 + 18) = 35;
          *(float *)v7 = v17;
          *((float *)v7 + 1) = v18;
          break;
        case 52:
          v14 = fminf(COERCE_FLOAT(*v7), COERCE_FLOAT(*(_QWORD *)v4));
          v15 = fminf(COERCE_FLOAT(HIDWORD(*v7)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v4)));
          v16 = fminf(*((float *)v7 + 2), v4[2]);
          *((_DWORD *)v7 + 18) = 52;
          *(float *)v7 = v14;
          *((float *)v7 + 1) = v15;
          *((float *)v7 + 2) = v16;
          break;
        case 69:
          v12 = (__m128)_mm_loadu_si128((const __m128i *)v4);
          *((_DWORD *)v7 + 18) = 69;
          v13 = (__m128)_mm_loadu_si128((const __m128i *)v7);
          *(_QWORD *)&v22 = __PAIR64__(
                              COERCE_UNSIGNED_INT(
                                fminf(
                                  _mm_shuffle_ps(v13, v13, 85).m128_f32[0],
                                  _mm_shuffle_ps(v12, v12, 85).m128_f32[0])),
                              COERCE_UNSIGNED_INT(fminf(v13.m128_f32[0], v12.m128_f32[0])));
          *((_QWORD *)&v22 + 1) = __PAIR64__(
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v13, v13, 255).m128_f32[0],
                                        _mm_shuffle_ps(v12, v12, 255).m128_f32[0])),
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v13, v13, 170).m128_f32[0],
                                        _mm_shuffle_ps(v12, v12, 170).m128_f32[0])));
          *(_OWORD *)v7 = v22;
          break;
        default:
          v21 = 2393;
          goto LABEL_3;
      }
      *((_BYTE *)v7 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v21 = 2337;
  }
  else
  {
    v21 = 2313;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v21);
  return v2;
}
