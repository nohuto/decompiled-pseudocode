/*
 * XREFs of ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180203CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801C96AC (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18020E374 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 */

void __fastcall CScrollPositionKeyframeAnimation::EnsureChainingConfigUpdated(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  __int64 v3; // r11
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  float v6[6]; // [rsp+20h] [rbp-18h]

  *(_QWORD *)v6 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1));
  CInteractionTracker::BoundaryFromValue(*((_QWORD *)this + 68), v6[0], 0);
  v5 = CInteractionTracker::BoundaryFromValue(v3, v6[1], 1u);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, 0LL, v4);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, 1LL, v5);
}
