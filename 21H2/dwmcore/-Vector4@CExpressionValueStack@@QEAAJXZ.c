/*
 * XREFs of ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x180251944
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

__int64 __fastcall CExpressionValueStack::Vector4(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  _DWORD *v3; // rdi
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _DWORD *v6; // r14
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  _DWORD *v10; // r12
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  _DWORD *v14; // r15
  unsigned __int8 v15; // al
  unsigned int v16; // edx
  CExpressionValue *v17; // rax
  unsigned int v18; // esi
  unsigned int v20; // [rsp+28h] [rbp-29h]
  __int128 v21; // [rsp+38h] [rbp-19h]
  _BYTE v22[80]; // [rsp+48h] [rbp-9h] BYREF

  if ( *((_DWORD *)this + 4) < 4u )
  {
    v20 = 5243;
LABEL_25:
    v18 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v20);
    return v18;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = &CExpressionValueStack::s_emptyValue;
  v4 = *((_DWORD *)this + 4) - 4;
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
  v8 = *((_DWORD *)this + 4) - 3;
  if ( v7 && v8 >= *((_DWORD *)this + 12) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    v10 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v10 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v8);
  }
  v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v12 = *((_DWORD *)this + 4) - 2;
  if ( v11 && v12 >= *((_DWORD *)this + 12) )
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    v14 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v14 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v12);
  }
  v15 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v16 = *((_DWORD *)this + 4) - 1;
  if ( v15 && v16 >= *((_DWORD *)this + 12) )
  {
    v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
  }
  else
  {
    v3 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v16);
  }
  if ( v6[18] != 18 || v10[18] != 18 || v14[18] != 18 || (v18 = 0, v3[18] != 18) )
  {
    v20 = 5261;
    goto LABEL_25;
  }
  LODWORD(v21) = *v6;
  DWORD1(v21) = *v10;
  DWORD2(v21) = *v14;
  HIDWORD(v21) = *v3;
  v6[18] = 69;
  *((_BYTE *)v6 + 76) = 1;
  *(_OWORD *)v6 = v21;
  *((_DWORD *)this + 4) -= 3;
  return v18;
}
