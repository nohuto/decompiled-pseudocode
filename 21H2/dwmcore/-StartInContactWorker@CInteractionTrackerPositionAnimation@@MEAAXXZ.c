/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1802562F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18021DE88 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180264F84 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180265008 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInContactWorker(CInteractionTrackerPositionAnimation *this)
{
  char ShouldChainForAxis; // bl
  __int64 v2; // rax
  __int64 v4; // rbp
  __int64 *v5; // rcx
  int v6; // xmm6_4
  float CurrentValue; // xmm2_4
  struct CManipulation *ActiveManipulation; // rbp
  InteractionSourceManager *v9; // rcx
  __int64 v10; // rcx

  ShouldChainForAxis = 0;
  v2 = *((_QWORD *)this + 44);
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 16);
  else
    v4 = 0LL;
  v5 = (__int64 *)((char *)this + 552);
  if ( *v5 )
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease(v5);
  v6 = *(_DWORD *)(v4 + 528);
  CurrentValue = CInteractionTracker::GetCurrentValue(v4, *((_DWORD *)this + 85));
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v4 + 200));
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v9) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                           v10,
                           *((_DWORD *)this + 85),
                           (__int64)ActiveManipulation,
                           0);
  *((float *)this + 125) = CurrentValue;
  *((float *)this + 150) = CurrentValue;
  *((_DWORD *)this + 151) = v6;
  CMotion::StartInContact((CInteractionTrackerPositionAnimation *)((char *)this + 456), ShouldChainForAxis);
}
