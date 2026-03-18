/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x18024A360
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180004320 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     _o_fmodf_0 @ 0x180101910 (_o_fmodf_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  float *v3; // rdi
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rbp
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  float *v10; // r14
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  unsigned int v14; // esi
  float v15; // xmm8_4
  float v16; // xmm6_4
  ColorSpaceHelpers *v17; // rcx
  __int128 v18; // xmm0
  unsigned int v20; // [rsp+20h] [rbp-A8h]
  __int128 v21; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v22[112]; // [rsp+50h] [rbp-78h] BYREF

  if ( *((_DWORD *)this + 4) < 3u )
  {
    v20 = 5388;
LABEL_20:
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v20);
    return v14;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (float *)&CExpressionValueStack::s_emptyValue;
  v4 = *((_DWORD *)this + 4) - 3;
  if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = *((_DWORD *)this + 4) - 2;
  if ( v7 && v8 >= *((_DWORD *)this + 12) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    v10 = (float *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v10 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v8);
  }
  v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v12 = *((_DWORD *)this + 4) - 1;
  if ( v11 && v12 >= *((_DWORD *)this + 12) )
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
  }
  else
  {
    v3 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v12);
  }
  if ( v6[18] != 18 || *((_DWORD *)v10 + 18) != 18 || (v14 = 0, *((_DWORD *)v3 + 18) != 18) )
  {
    v20 = 5404;
    goto LABEL_20;
  }
  v15 = fmaxf(fminf(*v3, 1.0), 0.0);
  v16 = fmaxf(fminf(*v10, 1.0), 0.0);
  o_fmodf_0((__int64)this);
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v17,
    v16,
    v15,
    1.0,
    (float *)&v21,
    (float *)&v21 + 1,
    (float *)&v21 + 2,
    (float *)&v21 + 3);
  v18 = v21;
  v6[18] = 70;
  *((_BYTE *)v6 + 76) = 1;
  *(_OWORD *)v6 = v18;
  *((_DWORD *)this + 4) -= 2;
  return v14;
}
