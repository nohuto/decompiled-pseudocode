/*
 * XREFs of ?TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z @ 0x180250828
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

__int64 __fastcall CExpressionValueStack::TimeSpanFrom(CExpressionValueStack *this, int a2)
{
  unsigned int v4; // ebx
  unsigned __int8 IsEnabled; // al
  unsigned int v6; // edx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v10; // [rsp+20h] [rbp-68h]
  _BYTE v11[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v6 = *((_DWORD *)this + 4) - 1;
    if ( IsEnabled && v6 >= *((_DWORD *)this + 12) )
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v11);
      v8 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v11);
    }
    else
    {
      v8 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v6);
    }
    if ( v8[18] == 18 )
    {
      v8[18] = 42;
      *((_BYTE *)v8 + 76) = 1;
      *(float *)v8 = (float)a2 * *(float *)v8;
      return 0;
    }
    v10 = 7218;
  }
  else
  {
    v10 = 7206;
  }
  v4 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v10);
  return v4;
}
