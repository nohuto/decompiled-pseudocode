/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x180256970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18021DE88 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180264F84 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180265008 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInContactWorker(CInteractionTrackerScaleAnimation *this)
{
  __int64 v1; // rax
  char ShouldChainForAxis; // bl
  __int64 v3; // rsi
  float *v4; // rdi
  float CurrentValue; // xmm2_4
  struct CManipulation *ActiveManipulation; // rsi
  InteractionSourceManager *v7; // rcx
  __int64 v8; // rcx

  v1 = *((_QWORD *)this + 44);
  ShouldChainForAxis = 0;
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 16);
  else
    v3 = 0LL;
  v4 = (float *)((char *)this + 456);
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, 2);
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v3 + 200));
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v7) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v8, 2, (__int64)ActiveManipulation, 0);
  v4[28] = CurrentValue;
  v4[11] = CurrentValue;
  CMotion::StartInContact((CMotion *)v4, ShouldChainForAxis);
}
