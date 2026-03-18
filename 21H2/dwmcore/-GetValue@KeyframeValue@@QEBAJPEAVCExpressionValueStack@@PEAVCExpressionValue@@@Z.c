/*
 * XREFs of ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18004F148
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EDD4 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1802212B4 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1802555C8 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180255B08 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18025F724 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x18004F654 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall KeyframeValue::GetValue(
        KeyframeValue *this,
        struct CExpressionValueStack *a2,
        struct CExpressionValue *a3)
{
  const struct CExpressionValue *v4; // rdx
  unsigned int v5; // ebx
  int SampledStartingValue; // eax
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // eax
  CBaseExpression *v11; // rsi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  bool v16; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 5) == 1 )
  {
    v4 = (KeyframeValue *)((char *)this + 24);
LABEL_3:
    CExpressionValue::CopyFrom(a3, v4);
    return 0;
  }
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v9 = *((_QWORD *)this + 3);
    v10 = *((_DWORD *)this + 8);
    if ( v10 >= *(_DWORD *)(v9 + 416) )
    {
      v5 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467259, 0x69Au, 0LL);
    }
    else
    {
      v11 = *(CBaseExpression **)(*(_QWORD *)(v9 + 392) + 8LL * v10);
      v12 = CBaseExpression::CalculateValue(v11, a2, *(_QWORD *)(v9 + 168), &v16);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v4 = (CBaseExpression *)((char *)v11 + 72);
        goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6A1u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v5, 0x4Au, 0LL);
    return v5;
  }
  if ( *((_DWORD *)this + 5) != 3 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  SampledStartingValue = CKeyframeAnimation::GetSampledStartingValue(*((CKeyframeAnimation **)this + 3), a3);
  v5 = SampledStartingValue;
  if ( SampledStartingValue < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, SampledStartingValue, 0x50u, 0LL);
    return v5;
  }
  return 0;
}
