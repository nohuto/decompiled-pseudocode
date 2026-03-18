/*
 * XREFs of ?QuaternionFromRotationMatrix@CExpressionValueStack@@QEAAJXZ @ 0x18024FD74
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x18000DB50 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromRotationMatrix(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _OWORD *v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v12; // [rsp+20h] [rbp-88h]
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v14[5]; // [rsp+40h] [rbp-68h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = *((_DWORD *)this + 4) - 1;
    if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
    {
      v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
      v6 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
    }
    else
    {
      v6 = (_OWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v4);
    }
    if ( *((_DWORD *)v6 + 18) == 265 )
    {
      v7 = v6[1];
      v14[0] = *v6;
      v8 = v6[2];
      v14[1] = v7;
      v9 = v6[3];
      v14[2] = v8;
      v14[3] = v9;
      D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v13, (const struct D2DMatrix *)v14);
      v10 = v13;
      *((_DWORD *)v6 + 18) = 71;
      *((_BYTE *)v6 + 76) = 1;
      *v6 = v10;
      return 0;
    }
    v12 = 7067;
  }
  else
  {
    v12 = 7062;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v12);
  return v2;
}
