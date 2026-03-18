/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x18024EAD8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     _o_fmodf_0 @ 0x180101910 (_o_fmodf_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  float *v4; // rbp
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // r14
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  int v11; // eax
  double v12; // xmm0_8
  unsigned int v14; // [rsp+20h] [rbp-68h]
  _BYTE v15[80]; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 1;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    v11 = v7[18];
    v2 = 0;
    if ( v11 == *((_DWORD *)v4 + 18) )
    {
      if ( v11 == 18 )
      {
        if ( *v4 > 0.0 )
        {
          v7[18] = 18;
          v12 = o_fmodf_0((__int64)this);
          *v7 = LODWORD(v12);
          *((_BYTE *)v7 + 76) = 1;
          --*((_DWORD *)this + 4);
          return v2;
        }
        v14 = 1463;
      }
      else
      {
        v14 = 1479;
      }
    }
    else
    {
      v14 = 1448;
    }
  }
  else
  {
    v14 = 1425;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v14);
  return v2;
}
