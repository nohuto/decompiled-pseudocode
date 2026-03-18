/*
 * XREFs of ?Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z @ 0x18024D674
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18026D7D0 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18026D850 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromRotationX(CExpressionValueStack *this, unsigned int a2)
{
  unsigned __int8 v4; // al
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rbx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned __int8 IsEnabled; // al
  _DWORD *v12; // rbx
  unsigned int v13; // edx
  CExpressionValue *v14; // rax
  _DWORD *v15; // r14
  unsigned __int8 v16; // al
  unsigned int v17; // edx
  CExpressionValue *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  unsigned int v25; // ebx
  unsigned int v27; // [rsp+28h] [rbp-29h]
  __int64 v28; // [rsp+38h] [rbp-19h] BYREF
  int v29; // [rsp+40h] [rbp-11h]
  __int128 v30; // [rsp+48h] [rbp-9h] BYREF
  __int128 v31; // [rsp+58h] [rbp+7h]
  __int128 v32; // [rsp+68h] [rbp+17h]
  __int128 v33; // [rsp+78h] [rbp+27h]

  if ( *((_DWORD *)this + 4) < a2 )
  {
    v27 = 6364;
LABEL_24:
    v25 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v27);
    return v25;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v12 = &CExpressionValueStack::s_emptyValue;
      v13 = *((_DWORD *)this + 4) - 2;
      if ( IsEnabled && v13 >= *((_DWORD *)this + 12) )
      {
        v14 = CExpressionValue::CExpressionValue((CExpressionValue *)&v30);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v30);
        v15 = &CExpressionValueStack::s_emptyValue;
      }
      else
      {
        v15 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v13);
      }
      v16 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v17 = *((_DWORD *)this + 4) - 1;
      if ( v16 && v17 >= *((_DWORD *)this + 12) )
      {
        v18 = CExpressionValue::CExpressionValue((CExpressionValue *)&v30);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v18);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v30);
      }
      else
      {
        v12 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v17);
      }
      if ( v15[18] == 18 && v12[18] == 52 )
      {
        v20 = v12[2];
        v28 = *(_QWORD *)v12;
        v29 = v20;
        D2DMatrixRotationX(&v30, v19, &v28);
        v21 = v30;
        v22 = v31;
        v15[18] = 265;
        *(_OWORD *)v15 = v21;
        *((_BYTE *)v15 + 76) = 1;
        v23 = v32;
        *((_OWORD *)v15 + 1) = v22;
        v24 = v33;
        *((_OWORD *)v15 + 2) = v23;
        *((_OWORD *)v15 + 3) = v24;
        goto LABEL_22;
      }
    }
LABEL_23:
    v27 = 6410;
    goto LABEL_24;
  }
  v4 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v5 = *((_DWORD *)this + 4) - 1;
  if ( v4 && v5 >= *((_DWORD *)this + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)&v30);
    v7 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v30);
  }
  else
  {
    v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
  }
  if ( v7[18] != 18 )
    goto LABEL_23;
  D2DMatrixRotationX((struct D2DMatrix *)&v30, *(float *)v7);
  v8 = v31;
  *(_OWORD *)v7 = v30;
  v7[18] = 265;
  v9 = v32;
  *((_OWORD *)v7 + 1) = v8;
  *((_BYTE *)v7 + 76) = 1;
  v10 = v33;
  *((_OWORD *)v7 + 2) = v9;
  *((_OWORD *)v7 + 3) = v10;
LABEL_22:
  *((_DWORD *)this + 4) += 1 - a2;
  return 0;
}
