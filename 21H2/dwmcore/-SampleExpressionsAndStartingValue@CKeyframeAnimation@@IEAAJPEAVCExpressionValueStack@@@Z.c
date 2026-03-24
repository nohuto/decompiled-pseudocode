/*
 * XREFs of ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800AC8FC
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800AC3A0 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073600 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800ACE18 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleExpressionsAndStartingValue(
        LARGE_INTEGER *this,
        struct CExpressionValueStack *a2)
{
  __int64 i; // rdi
  unsigned int v5; // edi
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (this[68].QuadPart & 0x800000000LL) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < this[49].LowPart; i = (unsigned int)(i + 1) )
      CBaseExpression::CalculateValue(*(LARGE_INTEGER **)(this[46].QuadPart + 8 * i), a2, this[20], &v9);
    if ( this[44].QuadPart )
    {
      v7 = CKeyframeAnimation::SampleStartingValue((CKeyframeAnimation *)this);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x8ADu, 0LL);
        return v5;
      }
    }
    BYTE4(this[68].QuadPart) |= 8u;
  }
  return 0;
}
