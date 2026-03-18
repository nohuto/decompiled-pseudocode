/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180202FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801C7830 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801C8D20 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801C8EF0 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1801C8F20 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180201048 (-GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18020BB00 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18020C8D4 (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x180210A98 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        bool a3)
{
  __int64 v3; // rsi
  float MostRecentCenterPoint; // xmm10_4
  CMotion *v7; // rax
  float CurrentVelocity; // xmm7_4
  float BoundedEndpoint; // xmm6_4
  char IsInertiaEnabledForAxis; // r15
  float InertiaDecayRate; // xmm9_4
  CInteractionTracker *v12; // rcx
  float CurrentValue; // xmm0_4

  v3 = *((_QWORD *)this + 41);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 16);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(v3, 2, *((_DWORD *)this + 79));
  v7 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerPositionAnimation *))(*(_QWORD *)this + 328LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v7);
  BoundedEndpoint = 0.0;
  if ( a3 && (*((_BYTE *)this + 320) & 1) != 0 )
    CurrentVelocity = 0.0;
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v3 + 192, *((unsigned int *)this + 79));
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate((float *)v3, *((_DWORD *)this + 79));
  if ( CInteractionTracker::AreInteractionAnimationsAlive(v12) )
    BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*(CScrollAnimation **)(v3 + 320));
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, 2);
  CPositionMotion::StartInertia(
    (CInteractionTrackerPositionAnimation *)((char *)this + 432),
    CurrentVelocity,
    a2,
    CurrentValue,
    BoundedEndpoint,
    MostRecentCenterPoint,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a3);
  *((_BYTE *)this + 320) &= ~1u;
}
