/*
 * XREFs of ?Vector2Transform@CExpressionValueStack@@QEAAJXZ @ 0x180250E38
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXVec2Transform@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18026E460 (-D3DXVec2Transform@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2Transform(__int64 this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  __m128 *v4; // rbx
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  __int32 v11; // eax
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  float v14; // xmm4_4
  float v15; // xmm3_4
  __int64 v16; // xmm0_8
  unsigned int v18; // [rsp+20h] [rbp-39h]
  __m128 v19; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-19h]
  _BYTE v21[80]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+6Fh] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) < 2u )
  {
    v18 = 7300;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v18);
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
    v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v5);
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
  if ( v7[18] != 35 )
  {
    v18 = 7306;
    goto LABEL_3;
  }
  v11 = v4[4].m128_i32[2];
  this = 265LL;
  if ( v11 != 71 && v11 != 104 && v11 != 265 )
  {
    v18 = 7315;
    goto LABEL_3;
  }
  v22 = *(_QWORD *)v7;
  if ( v11 == 104 )
  {
    v12 = *v4;
    v20 = v4[1].m128_u64[0];
    *(float *)&v23 = (float)((float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] * *((float *)&v22 + 1))
                           + (float)(*(float *)&v22 * v12.m128_f32[0]))
                   + *(float *)&v20;
    *((float *)&v23 + 1) = (float)((float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] * *((float *)&v22 + 1))
                                 + (float)(_mm_shuffle_ps(v12, v12, 85).m128_f32[0] * *(float *)&v22))
                         + *((float *)&v20 + 1);
  }
  else if ( v11 == 265 )
  {
    v13 = v4[3];
    v14 = _mm_shuffle_ps(v4[1], v4[1], 85).m128_f32[0];
    v15 = _mm_shuffle_ps(*v4, *v4, 85).m128_f32[0] * *(float *)&v22;
    *(float *)&v23 = (float)((float)(COERCE_FLOAT(*(_OWORD *)&v4[1]) * *((float *)&v22 + 1))
                           + (float)(COERCE_FLOAT(*v4) * *(float *)&v22))
                   + v13.m128_f32[0];
    *((float *)&v23 + 1) = (float)((float)(v14 * *((float *)&v22 + 1)) + v15) + _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  }
  else
  {
    v19 = *v4;
    D3DXVec2Transform((struct D2DVector2 *)&v23, (const struct D2DVector2 *)&v22, (const struct D2DQuaternion *)&v19);
  }
  v16 = v23;
  v7[18] = 35;
  *(_QWORD *)v7 = v16;
  *((_BYTE *)v7 + 76) = 1;
  --*(_DWORD *)(v1 + 16);
  return 0;
}
