/*
 * XREFs of ?Vector2Dot@CExpressionValueStack@@QEAAJXZ @ 0x180250CC0
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

__int64 __fastcall CExpressionValueStack::Vector2Dot(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  float *v4; // rdi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  float *v7; // rsi
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  unsigned int v16; // [rsp+20h] [rbp-68h]
  _BYTE v17[80]; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 1;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    if ( *((_DWORD *)v7 + 18) == 35 )
    {
      if ( *((_DWORD *)v4 + 18) == 35 )
      {
        v11 = *v7;
        v12 = v7[1];
        v13 = *v4;
        v14 = v4[1];
        *((_DWORD *)v7 + 18) = 18;
        *((_BYTE *)v7 + 76) = 1;
        *v7 = (float)(v11 * v13) + (float)(v12 * v14);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v16 = 7259;
    }
    else
    {
      v16 = 7258;
    }
  }
  else
  {
    v16 = 7252;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v16);
  return v2;
}
