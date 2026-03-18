/*
 * XREFs of ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x1802023E0
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801C7894 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 */

void __fastcall CScrollScaleKeyframeAnimation::EnsureChainingConfigUpdated(
        CScrollScaleKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r11d
  __int64 v4; // r10

  v2 = CInteractionTracker::BoundaryFromValue(
         *((_QWORD *)this + 68),
         *(float *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1)),
         2u);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(v4, v3, v2);
}
