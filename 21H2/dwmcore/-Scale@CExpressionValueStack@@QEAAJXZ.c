/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1800178CC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180071DEC (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x18026C4D4 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  CExpressionValueStack *v1; // rbp
  unsigned int v2; // ebx
  char IsEnabled; // al
  char *v4; // rdi
  float *v5; // rsi
  __int64 v6; // rdx
  CExpressionValue *v7; // rax
  float *v8; // rbx
  float *v9; // r14
  float *v10; // r15
  char v11; // al
  __int64 v12; // rdx
  CExpressionValue *v13; // rax
  float *v14; // rdi
  float *v15; // rax
  int v16; // eax
  _OWORD *v17; // rax
  float v18; // xmm6_4
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  float v21; // xmm0_4
  float v22; // xmm1_4
  unsigned int v23; // xmm0_4
  unsigned int v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  unsigned int v33; // [rsp+20h] [rbp-A8h]
  __int128 v34; // [rsp+30h] [rbp-98h]
  _BYTE v35[80]; // [rsp+40h] [rbp-88h] BYREF

  v1 = this;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (char *)v1 + 24;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    v6 = (unsigned int)(*((_DWORD *)v1 + 4) - 2);
    if ( IsEnabled && (unsigned int)v6 >= *((_DWORD *)v1 + 12) )
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v35);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v35);
      v8 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v8 = (float *)DynArray<CExpressionValue,1>::operator[](v4, v6);
    }
    v9 = v8;
    v10 = v8;
    v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v12 = (unsigned int)(*((_DWORD *)v1 + 4) - 1);
    if ( v11 && (unsigned int)v12 >= *((_DWORD *)v1 + 12) )
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v35);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v35);
    }
    else
    {
      v5 = (float *)DynArray<CExpressionValue,1>::operator[](v4, v12);
    }
    v14 = v8;
    this = (CExpressionValueStack *)v8;
    if ( *((_DWORD *)v5 + 18) != 18 )
    {
      if ( *((_DWORD *)v8 + 18) != 18 )
      {
        v33 = 2694;
        goto LABEL_3;
      }
      v15 = v8;
      v8 = v5;
      v5 = v15;
    }
    v16 = *((_DWORD *)v8 + 18);
    switch ( v16 )
    {
      case 18:
        v31 = *v5 * *v8;
        *((_DWORD *)v14 + 18) = 18;
        *v14 = v31;
        break;
      case 35:
        v29 = *v5 * v8[1];
        v30 = *v5 * *v8;
        *((_DWORD *)v14 + 18) = 35;
        v14[1] = v29;
        *v9 = v30;
        break;
      case 52:
        v25 = *v5;
        v26 = *v8;
        v27 = *v5 * v8[1];
        v28 = *v5 * v8[2];
        *((_DWORD *)v14 + 18) = 52;
        *v10 = v25 * v26;
        *((float *)this + 1) = v27;
        *((float *)this + 2) = v28;
        break;
      case 69:
        v22 = *v5 * v8[1];
        *(float *)&v34 = *v5 * *v8;
        *(float *)&v23 = *v5 * v8[2];
        *(float *)&v24 = *v5 * v8[3];
        *((_DWORD *)v14 + 18) = 69;
        *((_QWORD *)&v34 + 1) = __PAIR64__(v24, v23);
        *((float *)&v34 + 1) = v22;
        *(_OWORD *)v14 = v34;
        break;
      case 104:
        v18 = *v8;
        v19 = _mm_shuffle_ps((__m128)*(unsigned int *)v5, (__m128)*(unsigned int *)v5, 0);
        v20 = _mm_mul_ps(*(__m128 *)(v8 + 1), v19);
        v21 = v19.m128_f32[0] * v8[5];
        *((_DWORD *)v14 + 18) = 104;
        *v10 = v18 * v19.m128_f32[0];
        *(__m128 *)((char *)this + 4) = v20;
        *((float *)this + 5) = v21;
        break;
      case 265:
        v17 = (_OWORD *)D2DMatrix::operator*(v8, v35);
        *((_DWORD *)v14 + 18) = 265;
        *(_OWORD *)v14 = *v17;
        *((_OWORD *)v14 + 1) = v17[1];
        *((_OWORD *)v14 + 2) = v17[2];
        *((_OWORD *)v14 + 3) = v17[3];
        break;
      default:
        v33 = 2757;
        goto LABEL_3;
    }
    *((_BYTE *)v14 + 76) = 1;
    --*((_DWORD *)v1 + 4);
    return 0;
  }
  v33 = 2660;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v33,
    0LL);
  return v2;
}
