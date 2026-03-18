/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x180207D50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CD430 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801D0ACC (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180215C64 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180215D18 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInContactWorker(CInteractionTrackerScaleAnimation *this)
{
  __int64 v1; // rax
  char ShouldChainForAxis; // bl
  __int64 v3; // rsi
  float *v4; // rdi
  float CurrentValue; // xmm2_4
  struct CManipulation *ActiveManipulation; // rsi
  InteractionSourceManager *v7; // r9
  __int64 v8; // rcx

  v1 = *((_QWORD *)this + 41);
  ShouldChainForAxis = 0;
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 16);
  else
    v3 = 0LL;
  v4 = (float *)((char *)this + 432);
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, 2);
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v3 + 192));
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v7) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v8, 2, (__int64)ActiveManipulation, 0);
  v4[38] = CurrentValue;
  v4[11] = CurrentValue;
  CMotion::StartInContact((CMotion *)v4, ShouldChainForAxis);
}
