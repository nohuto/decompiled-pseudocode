/*
 * XREFs of ?QuaternionFromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x18024FEA0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18026E0F4 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromYawPitchRoll(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  float *v4; // rsi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  float *v7; // rbp
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  float *v11; // r15
  unsigned __int8 v12; // al
  unsigned int v13; // edx
  CExpressionValue *v14; // rax
  __int128 v15; // xmm0
  unsigned int v17; // [rsp+20h] [rbp-78h]
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v19[80]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) >= 3u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 3;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 2;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
      v11 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v11 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    v12 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v13 = *((_DWORD *)this + 4) - 1;
    if ( v12 && v13 >= *((_DWORD *)this + 12) )
    {
      v14 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v13);
    }
    if ( *((_DWORD *)v7 + 18) == 18 )
    {
      if ( *((_DWORD *)v11 + 18) == 18 )
      {
        if ( *((_DWORD *)v4 + 18) == 18 )
        {
          D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v18, *v7, *v11, *v4);
          v15 = v18;
          *((_DWORD *)v7 + 18) = 71;
          *((_BYTE *)v7 + 76) = 1;
          *(_OWORD *)v7 = v15;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v17 = 7116;
      }
      else
      {
        v17 = 7115;
      }
    }
    else
    {
      v17 = 7114;
    }
  }
  else
  {
    v17 = 7107;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v17);
  return v2;
}
