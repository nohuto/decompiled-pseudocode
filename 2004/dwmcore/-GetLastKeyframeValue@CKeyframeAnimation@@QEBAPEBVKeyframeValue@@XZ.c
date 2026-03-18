/*
 * XREFs of ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1801D2878
 * Callers:
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1801D14B4 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180204034 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x18020459C (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020E0B0 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

const struct KeyframeValue *__fastcall CKeyframeAnimation::GetLastKeyframeValue(CKeyframeAnimation *this)
{
  __int64 v1; // r8
  const struct KeyframeValue *result; // rax
  int v3; // ecx

  v1 = *((_QWORD *)this + 45);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 112);
    if ( v3 )
      return *(const struct KeyframeValue **)(*(_QWORD *)(v1 + 104) + 24LL * (unsigned int)(v3 - 1) + 8);
  }
  return result;
}
