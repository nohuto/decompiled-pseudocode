/*
 * XREFs of ?Vector3Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802515B8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18026E564 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18026E60C (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Transform(CExpressionValueStack *this)
{
  CExpressionValueStack *v1; // rsi
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  unsigned int *v4; // rdi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rbx
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  int v16; // eax
  unsigned int v18; // [rsp+28h] [rbp-39h]
  __int64 v19; // [rsp+38h] [rbp-29h] BYREF
  int v20; // [rsp+40h] [rbp-21h]
  __int64 v21; // [rsp+48h] [rbp-19h] BYREF
  int v22; // [rsp+50h] [rbp-11h]
  __int128 v23; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v24[5]; // [rsp+68h] [rbp+7h] BYREF

  v1 = this;
  if ( *((_DWORD *)this + 4) < 2u )
  {
    v18 = 7547;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v18);
    return v2;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v4 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
  v5 = *((_DWORD *)v1 + 4) - 2;
  if ( IsEnabled && v5 >= *((_DWORD *)v1 + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v1 + 3, v5);
  }
  v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v9 = *((_DWORD *)v1 + 4) - 1;
  if ( v8 && v9 >= *((_DWORD *)v1 + 12) )
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
  }
  else
  {
    v4 = (unsigned int *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v1 + 3, v9);
  }
  if ( v7[18] != 52 )
  {
    v18 = 7553;
    goto LABEL_3;
  }
  this = (CExpressionValueStack *)v4[18];
  if ( (_DWORD)this != 71 && (_DWORD)this != 265 )
  {
    v18 = 7561;
    goto LABEL_3;
  }
  v11 = v7[2];
  v19 = *(_QWORD *)v7;
  v20 = v11;
  if ( (_DWORD)this == 265 )
  {
    v12 = *((_OWORD *)v4 + 1);
    v24[0] = *(_OWORD *)v4;
    v13 = *((_OWORD *)v4 + 2);
    v24[1] = v12;
    v14 = *((_OWORD *)v4 + 3);
    v24[2] = v13;
    v24[3] = v14;
    D3DXVec3Transform((struct D2DVector3 *)&v21, (const struct D2DVector3 *)&v19, (const struct D2DMatrix *)v24);
  }
  else
  {
    v23 = *(_OWORD *)v4;
    D3DXVec3Transform((struct D2DVector3 *)&v21, (const struct D2DVector3 *)&v19, (const struct D2DQuaternion *)&v23);
  }
  v15 = v21;
  v16 = v22;
  v7[18] = 52;
  *(_QWORD *)v7 = v15;
  v7[2] = v16;
  *((_BYTE *)v7 + 76) = 1;
  --*((_DWORD *)v1 + 4);
  return 0;
}
