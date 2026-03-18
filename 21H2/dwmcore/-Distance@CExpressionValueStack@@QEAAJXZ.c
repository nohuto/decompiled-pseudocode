/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x18024A964
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(__int64 this)
{
  __int64 v1; // rsi
  unsigned int v2; // r14d
  unsigned __int8 IsEnabled; // al
  const __m128i *v4; // rdi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  __m128i *v7; // rbx
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  __int32 v11; // eax
  __m128 v12; // xmm5
  __m128 v13; // xmm2
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  unsigned int v24; // [rsp+28h] [rbp-29h]
  _BYTE v25[80]; // [rsp+58h] [rbp+7h] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    v5 = *(_DWORD *)(v1 + 16) - 2;
    if ( IsEnabled && v5 >= *(_DWORD *)(v1 + 48) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
      v7 = (__m128i *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (__m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *(_DWORD *)(v1 + 16) - 1;
    if ( v8 && v9 >= *(_DWORD *)(v1 + 48) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
    }
    else
    {
      v4 = (const __m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v9);
    }
    v11 = v7[4].m128i_i32[2];
    v2 = 0;
    if ( v11 != v4[4].m128i_i32[2] )
    {
      v24 = 3591;
      goto LABEL_3;
    }
    this = 18LL;
    switch ( v11 )
    {
      case 18:
        v22 = *(float *)v7->m128i_i32 - *(float *)v4->m128i_i32;
        v7[4].m128i_i32[2] = 18;
        LODWORD(v19) = LODWORD(v22) & _xmm;
        goto LABEL_25;
      case 35:
        v20 = *(float *)v7->m128i_i32 - *(float *)v4->m128i_i32;
        v21 = (float)(*(float *)&v7->m128i_i32[1] - *(float *)&v4->m128i_i32[1])
            * (float)(*(float *)&v7->m128i_i32[1] - *(float *)&v4->m128i_i32[1]);
        break;
      case 52:
        v20 = *(float *)&v7->m128i_i32[2] - *(float *)&v4->m128i_i32[2];
        v21 = (float)((float)(COERCE_FLOAT(HIDWORD(v7->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0])))
                    * (float)(COERCE_FLOAT(HIDWORD(v7->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0]))))
            + (float)((float)(COERCE_FLOAT(v7->m128i_i64[0]) - COERCE_FLOAT(v4->m128i_i64[0]))
                    * (float)(COERCE_FLOAT(v7->m128i_i64[0]) - COERCE_FLOAT(v4->m128i_i64[0])));
        break;
      case 69:
        v12 = (__m128)_mm_loadu_si128(v7);
        v13 = (__m128)_mm_loadu_si128(v4);
        v14 = v12.m128_f32[0] - v13.m128_f32[0];
        v15 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0] - _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
        v16 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
        v12.m128_f32[0] = _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
        v17 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
        v13.m128_f32[0] = _mm_shuffle_ps(v13, v13, 255).m128_f32[0];
        v18 = (float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)((float)(v16 - v17) * (float)(v16 - v17)))
            + (float)((float)(v12.m128_f32[0] - v13.m128_f32[0]) * (float)(v12.m128_f32[0] - v13.m128_f32[0]));
        goto LABEL_20;
      default:
        v24 = 3651;
        goto LABEL_3;
    }
    v18 = v21 + (float)(v20 * v20);
LABEL_20:
    v7[4].m128i_i32[2] = 18;
    v19 = o_sqrtf_0(v18);
LABEL_25:
    *(float *)v7->m128i_i32 = v19;
    v7[4].m128i_i8[12] = 1;
    --*(_DWORD *)(v1 + 16);
    return v2;
  }
  v24 = 3568;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v24);
  return v2;
}
