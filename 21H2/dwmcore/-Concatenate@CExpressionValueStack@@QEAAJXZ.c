/*
 * XREFs of ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x18024A7F4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18026DF3C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Concatenate(CExpressionValueStack *this)
{
  unsigned int v2; // edi
  unsigned __int8 IsEnabled; // al
  const struct D2DQuaternion *v4; // rbp
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  const struct D2DQuaternion *v7; // rsi
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  int v11; // eax
  __int128 v12; // xmm0
  unsigned int v14; // [rsp+20h] [rbp-78h]
  __int128 v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[80]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
      v7 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (const struct D2DQuaternion *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 1;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
    }
    else
    {
      v4 = (const struct D2DQuaternion *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    v11 = *((_DWORD *)v7 + 18);
    v2 = 0;
    if ( v11 == *((_DWORD *)v4 + 18) )
    {
      if ( v11 == 71 )
      {
        D3DXQuaternionMultiply((struct D2DQuaternion *)&v15, v7, v4);
        v12 = v15;
        *((_DWORD *)v7 + 18) = 71;
        *((_BYTE *)v7 + 76) = 1;
        *(_OWORD *)v7 = v12;
        --*((_DWORD *)this + 4);
        return v2;
      }
      v14 = 4027;
    }
    else
    {
      v14 = 3997;
    }
  }
  else
  {
    v14 = 3974;
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
