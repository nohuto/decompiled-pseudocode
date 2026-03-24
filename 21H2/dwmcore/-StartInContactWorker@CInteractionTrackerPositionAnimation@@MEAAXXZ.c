/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180205AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D44F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801C9880 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801CCE80 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180214050 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180214104 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
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
  InteractionSourceManager *v9; // r9
  __int64 v10; // rcx

  ShouldChainForAxis = 0;
  v2 = *((_QWORD *)this + 41);
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 16);
  else
    v4 = 0LL;
  v5 = (__int64 *)((char *)this + 568);
  if ( *v5 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v5);
  v6 = *(_DWORD *)(v4 + 520);
  CurrentValue = CInteractionTracker::GetCurrentValue(v4, *((_DWORD *)this + 79));
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v4 + 192));
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v9) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                           v10,
                           *((_DWORD *)this + 79),
                           (__int64)ActiveManipulation,
                           0);
  *((float *)this + 119) = CurrentValue;
  *((float *)this + 154) = CurrentValue;
  *((_DWORD *)this + 155) = v6;
  CMotion::StartInContact((CInteractionTrackerPositionAnimation *)((char *)this + 432), ShouldChainForAxis);
}
