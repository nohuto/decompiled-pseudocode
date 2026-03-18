/*
 * XREFs of ?Matrix4x4FromPerspective@CExpressionValueStack@@QEAAJXZ @ 0x18024CD00
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D2DMatrixPerspectiveRH@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x18026D44C (-D2DMatrixPerspectiveRH@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspective(CExpressionValueStack *this)
{
  unsigned int v2; // edi
  unsigned __int8 IsEnabled; // al
  float *v4; // r15
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // r14
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  float *v14; // r13
  unsigned __int8 v15; // al
  unsigned int v16; // edx
  CExpressionValue *v17; // rax
  __int128 v18; // xmm0
  unsigned int v20; // [rsp+20h] [rbp-60h]
  _OWORD v21[5]; // [rsp+30h] [rbp-50h] BYREF
  float *v22; // [rsp+B0h] [rbp+30h]

  if ( *((_DWORD *)this + 4) >= 4u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 4;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 3;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      v22 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v22 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v12 = *((_DWORD *)this + 4) - 2;
    if ( v11 && v12 >= *((_DWORD *)this + 12) )
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      v14 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v14 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v12);
    }
    v15 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v16 = *((_DWORD *)this + 4) - 1;
    if ( v15 && v16 >= *((_DWORD *)this + 12) )
    {
      v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v16);
    }
    if ( v7[18] == 18 )
    {
      if ( *((_DWORD *)v22 + 18) == 18 )
      {
        if ( *((_DWORD *)v14 + 18) == 18 )
        {
          if ( *((_DWORD *)v4 + 18) == 18 )
          {
            if ( D2DMatrixPerspectiveRH((struct D2DMatrix *)v21, *(float *)v7, *v22, *v14, *v4) )
            {
              v18 = v21[0];
              v7[18] = 265;
              *(_OWORD *)v7 = v18;
              *((_OWORD *)v7 + 1) = v21[1];
              *((_OWORD *)v7 + 2) = v21[2];
              *((_OWORD *)v7 + 3) = v21[3];
              *((_BYTE *)v7 + 76) = 1;
              *((_DWORD *)this + 4) -= 3;
              return 0;
            }
            v20 = 6649;
          }
          else
          {
            v20 = 6622;
          }
        }
        else
        {
          v20 = 6621;
        }
      }
      else
      {
        v20 = 6620;
      }
    }
    else
    {
      v20 = 6619;
    }
  }
  else
  {
    v20 = 6611;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v20);
  return v2;
}
