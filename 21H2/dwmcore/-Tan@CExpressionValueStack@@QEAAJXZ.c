/*
 * XREFs of ?Tan@CExpressionValueStack@@QEAAJXZ @ 0x180250720
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     _o_tanf_0 @ 0x180101994 (_o_tanf_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::Tan(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  unsigned int v3; // edx
  CExpressionValue *v4; // rax
  _DWORD *v5; // rbx
  float v6; // xmm6_4
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-78h]
  _BYTE v10[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !*((_DWORD *)this + 4) )
  {
    v9 = 4337;
LABEL_12:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v9);
    return v7;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = *((_DWORD *)this + 4) - 1;
  if ( IsEnabled && v3 >= *((_DWORD *)this + 12) )
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v10);
    v5 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v10);
  }
  else
  {
    v5 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v3);
  }
  if ( v5[18] != 18 )
  {
    v9 = 4379;
    goto LABEL_12;
  }
  v6 = o_tanf_0(*(float *)v5);
  if ( _isnan(v6) )
  {
    v9 = 4364;
    goto LABEL_12;
  }
  *(float *)v5 = v6;
  v5[18] = 18;
  *((_BYTE *)v5 + 76) = 1;
  return 0;
}
