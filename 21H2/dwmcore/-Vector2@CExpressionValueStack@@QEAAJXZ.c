/*
 * XREFs of ?Vector2@CExpressionValueStack@@QEAAJXZ @ 0x18007214C
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

__int64 __fastcall CExpressionValueStack::Vector2(CExpressionValueStack *this)
{
  char IsEnabled; // al
  _DWORD *v3; // rsi
  __int64 v4; // rdx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rdi
  char v7; // al
  __int64 v8; // rdx
  CExpressionValue *v9; // rax
  unsigned int v10; // ebp
  unsigned int v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[80]; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) < 2u )
  {
    v12 = 5131;
LABEL_15:
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v10;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = &CExpressionValueStack::s_emptyValue;
  v4 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( IsEnabled && (unsigned int)v4 >= *((_DWORD *)this + 12) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( v7 && (unsigned int)v8 >= *((_DWORD *)this + 12) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
  }
  else
  {
    v3 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v8);
  }
  if ( v6[18] != 18 || (v10 = 0, v3[18] != 18) )
  {
    v12 = 5145;
    goto LABEL_15;
  }
  v6[1] = *v3;
  v6[18] = 35;
  *((_BYTE *)v6 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v10;
}
