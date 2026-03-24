/*
 * XREFs of ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801D1848
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800ABA70 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18020630C (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073600 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800ABEB8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessInnerExpression(
        LARGE_INTEGER *this,
        DWORD a2,
        struct CExpressionValueStack *a3,
        struct CExpressionValue *a4)
{
  unsigned int v5; // ebx
  LARGE_INTEGER *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  bool v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 < this[49].LowPart )
  {
    v6 = *(LARGE_INTEGER **)(this[46].QuadPart + 8LL * a2);
    v7 = CBaseExpression::CalculateValue(v6, a3, this[20], &v10);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x688u, 0LL);
    }
    else
    {
      CExpressionValue::CopyFrom(a4, (const struct CExpressionValue *)&v6[8]);
      return 0;
    }
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x681u, 0LL);
  }
  return v5;
}
