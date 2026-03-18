/*
 * XREFs of ?Vector2TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x180251078
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

__int64 __fastcall CExpressionValueStack::Vector2TransformNormal(__int64 this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  __m128 *v4; // rsi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  void *v7; // rbx
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  __int32 v11; // eax
  float v12; // xmm6_4
  float v13; // xmm4_4
  __m128 v14; // xmm2
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  __m128 v18; // xmm2
  unsigned int v20; // [rsp+20h] [rbp-98h]
  _BYTE v21[96]; // [rsp+50h] [rbp-68h] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) < 2u )
  {
    v20 = 7377;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v20);
    return v2;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v4 = (__m128 *)&CExpressionValueStack::s_emptyValue;
  v5 = *(_DWORD *)(v1 + 16) - 2;
  if ( IsEnabled && v5 >= *(_DWORD *)(v1 + 48) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v7 = (void *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v5);
  }
  v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v9 = *(_DWORD *)(v1 + 16) - 1;
  if ( v8 && v9 >= *(_DWORD *)(v1 + 48) )
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
  }
  else
  {
    v4 = (__m128 *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v9);
  }
  if ( *((_DWORD *)v7 + 18) != 35 )
  {
    v20 = 7383;
    goto LABEL_3;
  }
  v11 = v4[4].m128_i32[2];
  this = 265LL;
  if ( v11 != 104 && v11 != 265 )
  {
    v20 = 7391;
    goto LABEL_3;
  }
  v12 = *(float *)v7;
  v13 = *((float *)v7 + 1);
  if ( v11 == 104 )
  {
    v14 = *v4;
    v15 = (float)(v13 * _mm_shuffle_ps(v14, v14, 170).m128_f32[0]) + (float)(v12 * COERCE_FLOAT(*v4));
    v16 = v12 * _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
    v17 = v13 * _mm_shuffle_ps(*v4, *v4, 255).m128_f32[0];
  }
  else
  {
    v18 = v4[1];
    v15 = (float)(v13 * v18.m128_f32[0]) + (float)(v12 * COERCE_FLOAT(*v4));
    v17 = v13 * _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
    v16 = v12 * _mm_shuffle_ps(*v4, *v4, 85).m128_f32[0];
  }
  *((_DWORD *)v7 + 18) = 35;
  *(float *)v7 = v15;
  *((float *)v7 + 1) = v17 + v16;
  *((_BYTE *)v7 + 76) = 1;
  --*(_DWORD *)(v1 + 16);
  return 0;
}
