/*
 * XREFs of ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800533DC
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18004F86C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180053434 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800E13F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleExpressionsAndStartingValue(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ecx

  if ( (*((_BYTE *)this + 572) & 8) == 0 )
  {
    CKeyframeAnimation::ProcessExpressionKeyFrames(this, a2);
    if ( *((_QWORD *)this + 47) )
    {
      v5 = CKeyframeAnimation::SampleStartingValue(this);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x8D6u, 0LL);
        return v3;
      }
    }
    *((_BYTE *)this + 572) |= 8u;
  }
  return 0;
}
