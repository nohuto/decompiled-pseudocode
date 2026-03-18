/*
 * XREFs of ?Or@CExpressionValueStack@@QEAAJXZ @ 0x18024F130
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

__int64 __fastcall CExpressionValueStack::Or(CExpressionValueStack *this)
{
  unsigned int v2; // r14d
  unsigned __int8 IsEnabled; // al
  char v4; // bl
  _DWORD *v5; // rbp
  unsigned int v6; // edx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rsi
  unsigned __int8 v9; // al
  unsigned int v10; // edx
  CExpressionValue *v11; // rax
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-68h]
  _BYTE v15[80]; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) < 2u )
  {
    v14 = 2161;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v14);
    return v2;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v4 = 0;
  v5 = &CExpressionValueStack::s_emptyValue;
  v6 = *((_DWORD *)this + 4) - 2;
  if ( IsEnabled && v6 >= *((_DWORD *)this + 12) )
  {
    v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    v8 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v8 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v6);
  }
  v9 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v10 = *((_DWORD *)this + 4) - 1;
  if ( v9 && v10 >= *((_DWORD *)this + 12) )
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
  }
  else
  {
    v5 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v10);
  }
  v12 = v8[18];
  v2 = 0;
  if ( v12 != v5[18] )
  {
    v14 = 2189;
    goto LABEL_3;
  }
  if ( v12 != 17 )
  {
    v14 = 2208;
    goto LABEL_3;
  }
  if ( *(_BYTE *)v8 || *(_BYTE *)v5 )
    v4 = 1;
  v8[18] = 17;
  *(_BYTE *)v8 = v4;
  *((_BYTE *)v8 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}
