/*
 * XREFs of ?Length@CExpressionValueStack@@QEAAJXZ @ 0x18024B66C
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

__int64 __fastcall CExpressionValueStack::Length(__int64 this)
{
  __int64 v1; // rbx
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  __m128i *v6; // rbx
  __int32 v7; // eax
  float v8; // xmm0_4
  float v9; // xmm0_4
  __m128 v10; // xmm3
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  unsigned int v15; // [rsp+20h] [rbp-78h]
  _BYTE v16[88]; // [rsp+40h] [rbp-58h] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = *(_DWORD *)(v1 + 16) - 1;
    if ( IsEnabled && v4 >= *(_DWORD *)(v1 + 48) )
    {
      v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      v6 = (__m128i *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
    }
    else
    {
      v6 = (__m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v4);
    }
    v7 = v6[4].m128i_i32[2];
    this = 18LL;
    if ( v7 == 18 )
    {
      LODWORD(v9) = v6->m128i_i32[0] & _xmm;
      v6[4].m128i_i32[2] = 18;
    }
    else
    {
      switch ( v7 )
      {
        case '#':
          v8 = (float)(*(float *)v6->m128i_i32 * *(float *)v6->m128i_i32)
             + (float)(*(float *)&v6->m128i_i32[1] * *(float *)&v6->m128i_i32[1]);
          break;
        case '4':
          v8 = (float)((float)(COERCE_FLOAT(HIDWORD(v6->m128i_i64[0])) * COERCE_FLOAT(HIDWORD(v6->m128i_i64[0])))
                     + (float)(COERCE_FLOAT(v6->m128i_i64[0]) * COERCE_FLOAT(v6->m128i_i64[0])))
             + (float)(*(float *)&v6->m128i_i32[2] * *(float *)&v6->m128i_i32[2]);
          break;
        case 'E':
          v10 = (__m128)_mm_loadu_si128(v6);
          v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
          v12 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
          v13 = (float)(v11 * v11) + (float)(v10.m128_f32[0] * v10.m128_f32[0]);
          v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 255).m128_f32[0];
          v8 = (float)(v13 + (float)(v12 * v12)) + (float)(v10.m128_f32[0] * v10.m128_f32[0]);
          break;
        case 'G':
          v8 = (float)((float)((float)(*(float *)v6->m128i_i32 * *(float *)v6->m128i_i32)
                             + (float)(*(float *)&v6->m128i_i32[1] * *(float *)&v6->m128i_i32[1]))
                     + (float)(*(float *)&v6->m128i_i32[2] * *(float *)&v6->m128i_i32[2]))
             + (float)(*(float *)&v6->m128i_i32[3] * *(float *)&v6->m128i_i32[3]);
          break;
        default:
          v15 = 3445;
          goto LABEL_3;
      }
      v6[4].m128i_i32[2] = 18;
      v9 = o_sqrtf_0(v8);
    }
    *(float *)v6->m128i_i32 = v9;
    v6[4].m128i_i8[12] = 1;
    return 0;
  }
  v15 = 3387;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v15);
  return v2;
}
