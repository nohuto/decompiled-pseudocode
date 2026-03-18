/*
 * XREFs of ?Sqrt@CExpressionValueStack@@QEAAJXZ @ 0x180250560
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

__int64 __fastcall CExpressionValueStack::Sqrt(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  unsigned int v3; // edx
  CExpressionValue *v4; // rax
  _DWORD *v5; // rbx
  float v6; // xmm0_4
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( !*((_DWORD *)this + 4) )
  {
    v9 = 4679;
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
    v9 = 4716;
    goto LABEL_12;
  }
  v6 = *(float *)v5;
  if ( *(float *)v5 < 0.0 )
  {
    v9 = 4701;
    goto LABEL_12;
  }
  v5[18] = 18;
  *(float *)v5 = o_sqrtf_0(v6);
  *((_BYTE *)v5 + 76) = 1;
  return 0;
}
