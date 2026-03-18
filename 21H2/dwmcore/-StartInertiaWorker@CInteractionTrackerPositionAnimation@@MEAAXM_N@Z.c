/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1802563D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180113E04 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AE28 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18021AE58 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180254404 (-GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18025EFC4 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18025F2B4 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1802645A4 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        bool a3)
{
  __int64 v3; // rdi
  float MostRecentCenterPoint; // xmm10_4
  CMotion *v7; // rax
  float CurrentVelocity; // xmm7_4
  float BoundedEndpoint; // xmm6_4
  char IsInertiaEnabledForAxis; // r14
  int v11; // r11d
  float InertiaDecayRate; // xmm9_4
  CInteractionTracker *v13; // rcx
  float CurrentValue; // xmm0_4

  v3 = *((_QWORD *)this + 44);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 16);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(v3, 2, *((_DWORD *)this + 85));
  v7 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerPositionAnimation *))(*(_QWORD *)this + 328LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v7);
  BoundedEndpoint = 0.0;
  if ( a3 && (*((_BYTE *)this + 344) & 1) != 0 )
    CurrentVelocity = 0.0;
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v3 + 200, *((unsigned int *)this + 85));
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate((float *)v3, v11);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(v13) )
    BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*(CScrollAnimation **)(v3 + 328));
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, 2);
  *((_DWORD *)this + 149) = 0;
  *((_DWORD *)this + 143) = 0;
  *((float *)this + 125) = a2;
  *((float *)this + 150) = a2;
  *((float *)this + 144) = CurrentValue;
  *((float *)this + 151) = CurrentValue;
  *((float *)this + 147) = BoundedEndpoint;
  *((float *)this + 146) = MostRecentCenterPoint;
  CMotion::StartInertia(
    (CInteractionTrackerPositionAnimation *)((char *)this + 456),
    CurrentVelocity,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a3);
  *((_BYTE *)this + 344) &= ~1u;
}
