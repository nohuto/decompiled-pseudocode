/*
 * XREFs of ?Vector4Dot@CExpressionValueStack@@QEAAJXZ @ 0x180251B74
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

__int64 __fastcall CExpressionValueStack::Vector4Dot(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  const __m128i *v4; // rdi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  __m128i *v7; // rbp
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  __m128 v11; // xmm4
  __m128 v12; // xmm5
  unsigned int v14; // [rsp+20h] [rbp-68h]
  _BYTE v15[80]; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
      v7 = (__m128i *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (__m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 1;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    }
    else
    {
      v4 = (const __m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    if ( v7[4].m128i_i32[2] == 69 )
    {
      if ( v4[4].m128i_i32[2] == 69 )
      {
        v11 = (__m128)_mm_loadu_si128(v7);
        v12 = (__m128)_mm_loadu_si128(v4);
        v7[4].m128i_i32[2] = 18;
        v7[4].m128i_i8[12] = 1;
        *(float *)v7->m128i_i32 = (float)((float)((float)(v11.m128_f32[0] * v12.m128_f32[0])
                                                + (float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0]
                                                        * _mm_shuffle_ps(v12, v12, 85).m128_f32[0]))
                                        + (float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0]
                                                * _mm_shuffle_ps(v12, v12, 170).m128_f32[0]))
                                + (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0]
                                        * _mm_shuffle_ps(v11, v11, 255).m128_f32[0]);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v14 = 7673;
    }
    else
    {
      v14 = 7672;
    }
  }
  else
  {
    v14 = 7666;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v14);
  return v2;
}
