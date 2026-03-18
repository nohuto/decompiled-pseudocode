/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x180026F58
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180024770 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026B6C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180027024 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800274B4 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x180027520 (-IsWaiting@CKeyframeAnimation@@QEBA_NXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800277EC (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180027900 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007125C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800D06A8 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2, struct CExpressionValueStack *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ebx
  CKeyframeAnimation *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 540) & 0x20) != 0 )
    return 0;
  v5 = a2 - 1;
  if ( !v5 )
  {
    v11 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)a1);
    v8 = v11;
    if ( v11 >= 0 )
      return 0;
    v15 = 1807;
    goto LABEL_26;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = 0;
    if ( *(_DWORD *)(a1 + 264) == 4 && (*(_BYTE *)(a1 + 208) & 2) != 0 )
    {
      *(_DWORD *)(a1 + 264) = 2;
      if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1)
        || CPtrArrayBase::GetCount((CPtrArrayBase *)(v12 + 24)) )
      {
        v14 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 272LL), 2LL, a1);
        v8 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v14, 0x4E6u, 0LL);
      }
    }
    if ( v8 >= 0 )
      return 0;
    v15 = 1811;
    goto LABEL_23;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( *(_DWORD *)(a1 + 264) != 4 )
      CBaseExpression::NotifyAnimationStarted((CBaseExpression *)a1);
    if ( CKeyframeAnimation::IsWaiting((CKeyframeAnimation *)a1) )
      return 0;
    v11 = CKeyframeAnimation::SampleExpressionsAndStartingValue(v10, a3);
    v8 = v11;
    if ( v11 >= 0 )
      return 0;
    v15 = 1828;
LABEL_26:
    v13 = v11;
    goto LABEL_27;
  }
  if ( v7 != 28 )
  {
    v8 = -2147024809;
    v15 = 1838;
LABEL_23:
    v13 = v8;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v13, v15, 0LL);
    return (unsigned int)v8;
  }
  return 0;
}
