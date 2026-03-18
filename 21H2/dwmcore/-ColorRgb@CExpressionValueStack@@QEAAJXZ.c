/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x1800EBE80
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

__int64 __fastcall CExpressionValueStack::ColorRgb(CExpressionValueStack *this)
{
  char IsEnabled; // al
  float *v3; // rdi
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  float *v6; // rbp
  char v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  float *v10; // r15
  char v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  float *v14; // r14
  char v15; // al
  unsigned int v16; // edx
  CExpressionValue *v17; // rax
  unsigned int v18; // esi
  float v19; // xmm2_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  unsigned int v24; // [rsp+20h] [rbp-78h]
  _BYTE v25[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( *((_DWORD *)this + 4) < 4u )
  {
    v24 = 5303;
LABEL_25:
    v18 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v24);
    return v18;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (float *)&CExpressionValueStack::s_emptyValue;
  v4 = *((_DWORD *)this + 4) - 4;
  if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = *((_DWORD *)this + 4) - 3;
  if ( v7 && v8 >= *((_DWORD *)this + 12) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
    v10 = (float *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v10 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v8);
  }
  v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v12 = *((_DWORD *)this + 4) - 2;
  if ( v11 && v12 >= *((_DWORD *)this + 12) )
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
    v14 = (float *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v14 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v12);
  }
  v15 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v16 = *((_DWORD *)this + 4) - 1;
  if ( v15 && v16 >= *((_DWORD *)this + 12) )
  {
    v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v17);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
  }
  else
  {
    v3 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v16);
  }
  if ( *((_DWORD *)v6 + 18) != 18
    || *((_DWORD *)v10 + 18) != 18
    || *((_DWORD *)v14 + 18) != 18
    || (v18 = 0, *((_DWORD *)v3 + 18) != 18) )
  {
    v24 = 5321;
    goto LABEL_25;
  }
  v19 = fminf(*v10, 255.0);
  v20 = fminf(*v14, 255.0);
  v21 = *v6;
  v22 = fminf(*v3, 255.0);
  *((_DWORD *)v6 + 18) = 70;
  *v6 = fmaxf(v19, 0.0) / 255.0;
  v6[1] = fmaxf(v20, 0.0) / 255.0;
  v6[2] = fmaxf(v22, 0.0) / 255.0;
  v6[3] = fmaxf(fminf(v21, 255.0), 0.0) / 255.0;
  *((_BYTE *)v6 + 76) = 1;
  *((_DWORD *)this + 4) -= 3;
  return v18;
}
