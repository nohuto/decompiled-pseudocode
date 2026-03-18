/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x180204CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  v4 = *((_QWORD *)this + 41);
  v6 = 0LL;
  if ( v4 )
    v6 = *(_QWORD *)(v4 + 16);
  CInteractionTracker::InsertDependenciesForAxis(v6, a2, *((_DWORD *)this + 79), a4);
}
