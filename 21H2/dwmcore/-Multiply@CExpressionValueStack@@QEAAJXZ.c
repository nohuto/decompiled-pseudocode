/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180071DEC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1800178CC (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180073578 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18026DF3C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v2; // r15d
  char IsEnabled; // al
  __int64 *v4; // rdi
  __int64 v5; // rdx
  CExpressionValue *v6; // rax
  void *v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  CExpressionValue *v10; // rax
  int v11; // eax
  unsigned int v12; // ecx
  __int128 v13; // xmm1
  int v14; // r9d
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  __m128 v19; // xmm4
  __m128 v20; // xmm3
  float v21; // eax
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  int v28; // eax
  unsigned int v29; // ecx
  __int128 v31; // [rsp+38h] [rbp-49h] BYREF
  __int64 v32; // [rsp+48h] [rbp-39h]
  __int64 v33; // [rsp+50h] [rbp-31h]
  float v34; // [rsp+58h] [rbp-29h]
  _OWORD v35[5]; // [rsp+68h] [rbp-19h] BYREF

  if ( *((_DWORD *)this + 4) < 2u )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x43Au,
      0LL);
    return v2;
  }
  v2 = 0;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v4 = (__int64 *)&CExpressionValueStack::s_emptyValue;
  v5 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( IsEnabled && (unsigned int)v5 >= *((_DWORD *)this + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v35);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v35);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v7 = (void *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v5);
  }
  v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v9 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( v8 && (unsigned int)v9 >= *((_DWORD *)this + 12) )
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v35);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v35);
  }
  else
  {
    v4 = (__int64 *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v9);
  }
  v11 = *((_DWORD *)v7 + 18);
  v12 = *((_DWORD *)v4 + 18);
  if ( v11 == v12 )
  {
    if ( v11 == 18 )
    {
      v27 = *(float *)v4 * *(float *)v7;
      *((_DWORD *)v7 + 18) = 18;
      *(float *)v7 = v27;
      goto LABEL_28;
    }
    if ( v11 == 35 )
    {
      v25 = *(float *)v7 * *(float *)v4;
      v26 = *((float *)v7 + 1) * *((float *)v4 + 1);
      *((_DWORD *)v7 + 18) = 35;
      *(float *)v7 = v25;
      *((float *)v7 + 1) = v26;
      goto LABEL_28;
    }
    if ( v11 == 52 )
    {
      v21 = *((float *)v7 + 2);
      *(_QWORD *)&v31 = *(_QWORD *)v7;
      v33 = *v4;
      v22 = *(float *)&v33 * *(float *)&v31;
      *((float *)&v31 + 2) = v21;
      v23 = *((float *)&v33 + 1) * *((float *)&v31 + 1);
      v34 = *((float *)v4 + 2);
      v24 = v34 * v21;
      *((_DWORD *)v7 + 18) = 52;
      *(float *)v7 = v22;
      *((float *)v7 + 1) = v23;
      *((float *)v7 + 2) = v24;
      goto LABEL_28;
    }
    if ( v11 == 69 )
    {
      v19 = (__m128)_mm_loadu_si128((const __m128i *)v4);
      *((_DWORD *)v7 + 18) = 69;
      v20 = (__m128)_mm_loadu_si128((const __m128i *)v7);
      *(float *)&v31 = v19.m128_f32[0] * v20.m128_f32[0];
      *((float *)&v31 + 3) = _mm_shuffle_ps(v19, v19, 255).m128_f32[0] * _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
      *((float *)&v31 + 1) = _mm_shuffle_ps(v19, v19, 85).m128_f32[0] * _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
      *((float *)&v31 + 2) = _mm_shuffle_ps(v19, v19, 170).m128_f32[0] * _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
    }
    else
    {
      if ( v11 != 71 )
      {
        if ( v11 == 104 )
        {
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v31,
            (const struct D2D1::Matrix3x2F *)v7,
            (const struct D2D1::Matrix3x2F *)v4);
          v17 = v31;
          *((_DWORD *)v7 + 18) = 104;
          v18 = v32;
          *(_OWORD *)v7 = v17;
          *((_QWORD *)v7 + 2) = v18;
        }
        else
        {
          if ( v11 != 265 )
          {
            v2 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(
              v12,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x4A3u,
              0LL);
            return v2;
          }
          D2DMatrixMultiply((struct D2DMatrix *)v35, (const struct D2DMatrix *)v7, (const struct D2DMatrix *)v4);
          v13 = v35[1];
          *(_OWORD *)v7 = v35[0];
          *((_DWORD *)v7 + 18) = v14;
          v15 = v35[2];
          *((_OWORD *)v7 + 1) = v13;
          v16 = v35[3];
          *((_OWORD *)v7 + 2) = v15;
          *((_OWORD *)v7 + 3) = v16;
        }
LABEL_28:
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return v2;
      }
      D3DXQuaternionMultiply(
        (struct D2DQuaternion *)&v31,
        (const struct D2DQuaternion *)v4,
        (const struct D2DQuaternion *)v7);
      *((_DWORD *)v7 + 18) = 71;
    }
    *(_OWORD *)v7 = v31;
    goto LABEL_28;
  }
  if ( v12 == 18 || v11 == 18 )
  {
    v28 = CExpressionValueStack::Scale(this);
    v2 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(
        v29,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v28,
        0x4B2u,
        0LL);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v12,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x4BCu,
      0LL);
  }
  return v2;
}
