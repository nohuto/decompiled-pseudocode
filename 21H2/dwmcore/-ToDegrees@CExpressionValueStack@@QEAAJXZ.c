/*
 * XREFs of ?ToDegrees@CExpressionValueStack@@QEAAJXZ @ 0x18025090C
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

__int64 __fastcall CExpressionValueStack::ToDegrees(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rbx
  float v7; // xmm0_4
  unsigned int v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = *((_DWORD *)this + 4) - 1;
    if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
    {
      v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v10);
      v6 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v10);
    }
    else
    {
      v6 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v4);
    }
    if ( v6[18] == 18 )
    {
      v7 = *(float *)v6 * 57.295776;
      v6[18] = 18;
      *((_BYTE *)v6 + 76) = 1;
      *(float *)v6 = v7;
      return 0;
    }
    v9 = 5049;
  }
  else
  {
    v9 = 5023;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v9);
  return v2;
}
