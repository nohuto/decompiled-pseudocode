/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1800739E8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  char v4; // al
  __int64 v5; // rdx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // xmm0_8
  int v9; // eax
  __int128 v10; // xmm1
  char IsEnabled; // al
  int *v12; // rsi
  __int64 v13; // rdx
  CExpressionValue *v14; // rax
  char *v15; // rbx
  char v16; // al
  __int64 v17; // rdx
  CExpressionValue *v18; // rax
  char v19; // al
  __int64 v20; // rdx
  CExpressionValue *v21; // rax
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm2_4
  unsigned int v25; // ebx
  unsigned int v27; // [rsp+20h] [rbp-39h]
  __int128 v28; // [rsp+40h] [rbp-19h] BYREF
  __int128 v29; // [rsp+50h] [rbp-9h]
  __int128 v30; // [rsp+60h] [rbp+7h]
  __int128 v31; // [rsp+70h] [rbp+17h]
  int *v32; // [rsp+C0h] [rbp+67h]

  if ( *((_DWORD *)this + 4) < a2 )
  {
    v27 = 5751;
LABEL_29:
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
    if ( a2 == 3 )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v12 = (int *)&CExpressionValueStack::s_emptyValue;
      v13 = (unsigned int)(*((_DWORD *)this + 4) - 3);
      if ( IsEnabled && (unsigned int)v13 >= *((_DWORD *)this + 12) )
      {
        v14 = CExpressionValue::CExpressionValue((CExpressionValue *)&v28);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v14);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v28);
        v15 = (char *)&CExpressionValueStack::s_emptyValue;
      }
      else
      {
        v15 = (char *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v13);
      }
      v16 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v17 = (unsigned int)(*((_DWORD *)this + 4) - 2);
      if ( v16 && (unsigned int)v17 >= *((_DWORD *)this + 12) )
      {
        v18 = CExpressionValue::CExpressionValue((CExpressionValue *)&v28);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v18);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v28);
        v32 = (int *)&CExpressionValueStack::s_emptyValue;
      }
      else
      {
        v32 = (int *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v17);
      }
      v19 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v20 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( v19 && (unsigned int)v20 >= *((_DWORD *)this + 12) )
      {
        v21 = CExpressionValue::CExpressionValue((CExpressionValue *)&v28);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v21);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v28);
      }
      else
      {
        v12 = (int *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v20);
      }
      if ( *((_DWORD *)v15 + 18) == 18 && v32[18] == 18 && v12[18] == 18 )
      {
        v22 = *v32;
        v23 = *(_DWORD *)v15;
        v24 = *v12;
        *((_DWORD *)v15 + 18) = 265;
        *(_QWORD *)v15 = 1065353216LL;
        *((_DWORD *)v15 + 2) = 0;
        *((_DWORD *)v15 + 3) = 0;
        *((_DWORD *)v15 + 4) = 0;
        *(_QWORD *)(v15 + 20) = 1065353216LL;
        *((_DWORD *)v15 + 7) = 0;
        *((_DWORD *)v15 + 8) = 0;
        *((_DWORD *)v15 + 9) = 0;
        *((_DWORD *)v15 + 10) = 1065353216;
        *((_DWORD *)v15 + 11) = 0;
        *((_DWORD *)v15 + 12) = v23;
        *((_DWORD *)v15 + 13) = v22;
        *((_DWORD *)v15 + 14) = v24;
        *((_DWORD *)v15 + 15) = 1065353216;
        v15[76] = 1;
        goto LABEL_27;
      }
    }
LABEL_28:
    v27 = 5801;
    goto LABEL_29;
  }
  v4 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v5 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( v4 && (unsigned int)v5 >= *((_DWORD *)this + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)&v28);
    v7 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v28);
  }
  else
  {
    v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v5);
  }
  if ( v7[18] != 52 )
    goto LABEL_28;
  v8 = *(_QWORD *)v7;
  v9 = v7[2];
  HIDWORD(v30) = 0;
  *(_QWORD *)&v30 = 0LL;
  *((_QWORD *)&v29 + 1) = 0LL;
  LODWORD(v29) = 0;
  *(_QWORD *)&v31 = v8;
  DWORD2(v31) = v9;
  v28 = 0x3F800000uLL;
  *(_OWORD *)v7 = 0x3F800000uLL;
  DWORD1(v29) = 1065353216;
  *((_OWORD *)v7 + 1) = v29;
  DWORD2(v30) = 1065353216;
  HIDWORD(v31) = 1065353216;
  v10 = v31;
  *((_OWORD *)v7 + 2) = v30;
  v7[18] = 265;
  *((_OWORD *)v7 + 3) = v10;
  *((_BYTE *)v7 + 76) = 1;
LABEL_27:
  *((_DWORD *)this + 4) += 1 - a2;
  return 0;
}
