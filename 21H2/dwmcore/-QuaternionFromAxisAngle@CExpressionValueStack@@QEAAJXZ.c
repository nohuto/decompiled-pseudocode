/*
 * XREFs of ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18024FA08
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18026E070 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromAxisAngle(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  float *v3; // rsi
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rdi
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  unsigned int v10; // ebp
  int v11; // eax
  float v12; // xmm2_4
  __int128 v13; // xmm0
  unsigned int v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+30h] [rbp-78h] BYREF
  int v17; // [rsp+38h] [rbp-70h]
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v19[80]; // [rsp+50h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) < 2u )
  {
    v15 = 6947;
LABEL_15:
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v15);
    return v10;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (float *)&CExpressionValueStack::s_emptyValue;
  v4 = *((_DWORD *)this + 4) - 2;
  if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = *((_DWORD *)this + 4) - 1;
  if ( v7 && v8 >= *((_DWORD *)this + 12) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
  }
  else
  {
    v3 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v8);
  }
  if ( v6[18] != 52 || (v10 = 0, *((_DWORD *)v3 + 18) != 18) )
  {
    v15 = 6961;
    goto LABEL_15;
  }
  v11 = v6[2];
  v12 = *v3;
  v16 = *(_QWORD *)v6;
  v17 = v11;
  D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v18, (const struct D2DVector3 *)&v16, v12);
  v13 = v18;
  v6[18] = 71;
  *((_BYTE *)v6 + 76) = 1;
  *(_OWORD *)v6 = v13;
  --*((_DWORD *)this + 4);
  return v10;
}
