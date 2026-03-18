/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18004F86C
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004ECF0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18004F74C (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180042190 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800426E4 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x180050590 (-IsWaiting@CKeyframeAnimation@@QEBA_NXZ.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180052BA0 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800533DC (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2, struct CExpressionValueStack *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  CKeyframeAnimation *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 572) & 0x20) == 0 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( !v7 )
        {
          if ( *(_DWORD *)(a1 + 288) != 4 )
            CBaseExpression::NotifyAnimationStarted((CBaseExpression *)a1);
          if ( CKeyframeAnimation::IsWaiting((CKeyframeAnimation *)a1) )
            return 0;
          v9 = CKeyframeAnimation::SampleExpressionsAndStartingValue(v8, a3);
          v11 = v9;
          if ( v9 >= 0 )
            return 0;
          v13 = 1872;
LABEL_18:
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v13, 0LL);
          return v11;
        }
        if ( v7 != 28 )
        {
          v11 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x75Au, 0LL);
          return v11;
        }
      }
      else
      {
        v9 = CBaseExpression::NotifyAnimationStopped((CBaseExpression *)a1);
        v11 = v9;
        if ( v9 < 0 )
        {
          v13 = 1855;
          goto LABEL_18;
        }
      }
    }
    else
    {
      v9 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)a1);
      v11 = v9;
      if ( v9 < 0 )
      {
        v13 = 1851;
        goto LABEL_18;
      }
    }
  }
  return 0;
}
