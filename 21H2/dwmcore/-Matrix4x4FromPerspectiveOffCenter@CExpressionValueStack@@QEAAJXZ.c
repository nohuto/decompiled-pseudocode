/*
 * XREFs of ?Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ @ 0x18024D210
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z @ 0x18026D344 (-D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveOffCenter(CExpressionValueStack *this)
{
  CExpressionValueStack *v1; // rdi
  unsigned int v2; // edi
  unsigned __int8 IsEnabled; // al
  float *v4; // r14
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // r13
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  unsigned __int8 v14; // al
  unsigned int v15; // edx
  CExpressionValue *v16; // rax
  unsigned __int8 v17; // al
  unsigned int v18; // edx
  CExpressionValue *v19; // rax
  float *v20; // r12
  unsigned __int8 v21; // al
  unsigned int v22; // edx
  CExpressionValue *v23; // rax
  __int128 v24; // xmm0
  unsigned int v26; // [rsp+20h] [rbp-49h]
  _OWORD v27[8]; // [rsp+40h] [rbp-29h] BYREF
  float *v28; // [rsp+D0h] [rbp+67h]
  CExpressionValueStack *v29; // [rsp+D8h] [rbp+6Fh]
  float *v30; // [rsp+E0h] [rbp+77h]

  v1 = this;
  if ( *((_DWORD *)this + 4) >= 6u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)v1 + 4) - 6;
    if ( IsEnabled && v5 >= *((_DWORD *)v1 + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v1 + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)v1 + 4) - 5;
    if ( v8 && v9 >= *((_DWORD *)v1 + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      v28 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v28 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v1 + 3, v9);
    }
    v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v12 = *((_DWORD *)v1 + 4) - 4;
    if ( v11 && v12 >= *((_DWORD *)v1 + 12) )
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      v29 = (CExpressionValueStack *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v29 = (CExpressionValueStack *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v1 + 3, v12);
    }
    v14 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v15 = *((_DWORD *)v1 + 4) - 3;
    if ( v14 && v15 >= *((_DWORD *)v1 + 12) )
    {
      v16 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v16);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      v30 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v30 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v1 + 3, v15);
    }
    v17 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v18 = *((_DWORD *)v1 + 4) - 2;
    if ( v17 && v18 >= *((_DWORD *)v1 + 12) )
    {
      v19 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v19);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      v20 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v20 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v1 + 3, v18);
    }
    v21 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v22 = *((_DWORD *)v1 + 4) - 1;
    if ( v21 && v22 >= *((_DWORD *)v1 + 12) )
    {
      v23 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v23);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)v1 + 3, v22);
    }
    if ( v7[18] == 18 )
    {
      if ( *((_DWORD *)v28 + 18) == 18 )
      {
        this = v29;
        if ( *((_DWORD *)v29 + 18) == 18 )
        {
          if ( *((_DWORD *)v30 + 18) == 18 )
          {
            if ( *((_DWORD *)v20 + 18) == 18 )
            {
              if ( *((_DWORD *)v4 + 18) == 18 )
              {
                if ( D2DMatrixPerspectiveOffCenter(
                       (struct D2DMatrix *)v27,
                       *(float *)v7,
                       *v28,
                       *(float *)v29,
                       *v30,
                       *v20,
                       *v4) )
                {
                  v24 = v27[0];
                  v7[18] = 265;
                  *(_OWORD *)v7 = v24;
                  *((_OWORD *)v7 + 1) = v27[1];
                  *((_OWORD *)v7 + 2) = v27[2];
                  *((_OWORD *)v7 + 3) = v27[3];
                  *((_BYTE *)v7 + 76) = 1;
                  *((_DWORD *)v1 + 4) -= 5;
                  return 0;
                }
                v26 = 6805;
              }
              else
              {
                v26 = 6777;
              }
            }
            else
            {
              v26 = 6776;
            }
          }
          else
          {
            v26 = 6775;
          }
        }
        else
        {
          v26 = 6774;
        }
      }
      else
      {
        v26 = 6773;
      }
    }
    else
    {
      v26 = 6772;
    }
  }
  else
  {
    v26 = 6762;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v26);
  return v2;
}
