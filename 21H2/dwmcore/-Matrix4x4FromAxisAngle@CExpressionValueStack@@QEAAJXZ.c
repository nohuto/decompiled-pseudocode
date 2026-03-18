/*
 * XREFs of ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18024CB78
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18026D4E4 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromAxisAngle(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  float *v3; // rsi
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rdi
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  unsigned int v10; // r14d
  int v11; // eax
  float v12; // xmm2_4
  unsigned int v14; // [rsp+28h] [rbp-19h]
  __int64 v15; // [rsp+38h] [rbp-9h] BYREF
  int v16; // [rsp+40h] [rbp-1h]
  _OWORD v17[5]; // [rsp+48h] [rbp+7h] BYREF

  if ( *((_DWORD *)this + 4) < 2u )
  {
    v14 = 6140;
LABEL_15:
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v14);
    return v10;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (float *)&CExpressionValueStack::s_emptyValue;
  v4 = *((_DWORD *)this + 4) - 2;
  if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
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
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
  }
  else
  {
    v3 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v8);
  }
  if ( v6[18] != 52 || (v10 = 0, *((_DWORD *)v3 + 18) != 18) )
  {
    v14 = 6154;
    goto LABEL_15;
  }
  v11 = v6[2];
  v12 = *v3;
  v15 = *(_QWORD *)v6;
  v16 = v11;
  D2DMatrixRotationAxis((struct D2DMatrix *)v17, (const struct D2DVector3 *)&v15, v12);
  v6[18] = 265;
  *(_OWORD *)v6 = v17[0];
  *((_OWORD *)v6 + 1) = v17[1];
  *((_OWORD *)v6 + 2) = v17[2];
  *((_OWORD *)v6 + 3) = v17[3];
  *((_BYTE *)v6 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v10;
}
