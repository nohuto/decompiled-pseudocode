/*
 * XREFs of ?Vector3Cross@CExpressionValueStack@@QEAAJXZ @ 0x180251270
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x18026E508 (-D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Cross(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  _DWORD *v4; // rdi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  int v11; // eax
  __int64 v12; // xmm0_8
  int v13; // eax
  __int64 v14; // xmm0_8
  int v15; // eax
  unsigned int v17; // [rsp+28h] [rbp-39h]
  __int64 v18; // [rsp+38h] [rbp-29h] BYREF
  int v19; // [rsp+40h] [rbp-21h]
  __int64 v20; // [rsp+48h] [rbp-19h] BYREF
  int v21; // [rsp+50h] [rbp-11h]
  __int64 v22; // [rsp+58h] [rbp-9h] BYREF
  int v23; // [rsp+60h] [rbp-1h]
  _BYTE v24[80]; // [rsp+68h] [rbp+7h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = &CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
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
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
    }
    else
    {
      v4 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    if ( v7[18] == 52 )
    {
      if ( v4[18] == 52 )
      {
        v11 = v7[2];
        v20 = *(_QWORD *)v7;
        v12 = *(_QWORD *)v4;
        v21 = v11;
        v13 = v4[2];
        v18 = v12;
        v19 = v13;
        D3DXVec3Cross((struct D2DVector3 *)&v22, (const struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v18);
        v14 = v22;
        v15 = v23;
        v7[18] = 52;
        *(_QWORD *)v7 = v14;
        v7[2] = v15;
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return 0;
      }
      v17 = 7454;
    }
    else
    {
      v17 = 7453;
    }
  }
  else
  {
    v17 = 7447;
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
