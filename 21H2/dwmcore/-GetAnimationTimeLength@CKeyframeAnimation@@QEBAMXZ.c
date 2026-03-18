/*
 * XREFs of ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004ECF0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18004F31C (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800D8810 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x1800D894C (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     ?GetIterationForSeekTime@CKeyframeAnimation@@AEAAIM@Z @ 0x1800D89E4 (-GetIterationForSeekTime@CKeyframeAnimation@@AEAAIM@Z.c)
 *     ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800E4450 (-GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800EB7C0 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1802222D8 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18025F724 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CKeyframeAnimation::GetAnimationTimeLength(CKeyframeAnimation *this)
{
  __int64 v1; // r8
  float result; // xmm0_4
  int v3; // eax

  v1 = *((_QWORD *)this + 48);
  result = 0.0;
  v3 = *(_DWORD *)(v1 + 112);
  if ( v3 > 0 )
    return (float)*(int *)(*(_QWORD *)(v1 + 104) + 24LL * (unsigned int)(v3 - 1)) / 1000.0;
  return result;
}
