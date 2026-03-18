/*
 * XREFs of ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x180051730
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

struct CExpressionValue *__fastcall CExpressionValueStack::PeekStackValue(CExpressionValueStack *this, int a2)
{
  char IsEnabled; // al
  __int64 v5; // rdx
  CExpressionValue *v6; // rax
  _BYTE v8[88]; // [rsp+20h] [rbp-58h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v5 = (unsigned int)(*((_DWORD *)this + 4) + a2 - 1);
  if ( !IsEnabled || (unsigned int)v5 < *((_DWORD *)this + 12) )
    return (struct CExpressionValue *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v5);
  v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v8);
  CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
  CExpressionValue::~CExpressionValue((CExpressionValue *)v8);
  return (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
}
