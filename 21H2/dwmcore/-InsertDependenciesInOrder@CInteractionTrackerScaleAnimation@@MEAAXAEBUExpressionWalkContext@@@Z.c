/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z @ 0x180256260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        const struct ExpressionWalkContext *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  v4 = *((_QWORD *)this + 44);
  v6 = 0LL;
  if ( v4 )
    v6 = *(_QWORD *)(v4 + 16);
  CInteractionTracker::InsertDependenciesForAxis(v6, (__int64)a2, *((_DWORD *)this + 85), a4);
}
