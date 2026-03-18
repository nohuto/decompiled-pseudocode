/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x180207DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CD600 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x180210300 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1802105E0 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1802152CC (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        bool a3)
{
  float *v3; // rsi
  __int64 v5; // rax
  float *v7; // rdi
  char IsInertiaEnabledForAxis; // bl
  float InertiaDecayRate; // xmm6_4
  CMotion *v10; // rax
  float CurrentVelocity; // xmm0_4

  v3 = 0LL;
  v5 = *((_QWORD *)this + 41);
  if ( v5 )
    v3 = *(float **)(v5 + 16);
  v7 = (float *)((char *)this + 432);
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v3 + 48, 2LL);
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v3, 2);
  v10 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerScaleAnimation *))(*(_QWORD *)this + 320LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v10);
  v7[11] = a2;
  CMotion::StartInertia((CMotion *)v7, CurrentVelocity, InertiaDecayRate, IsInertiaEnabledForAxis, a3);
}
