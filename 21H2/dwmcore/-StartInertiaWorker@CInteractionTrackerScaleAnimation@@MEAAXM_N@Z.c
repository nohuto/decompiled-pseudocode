/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x180256A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AE28 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18025EFC4 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18025F2B4 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1802645A4 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        bool a3)
{
  __int64 v3; // r11
  __int64 v5; // rax
  float *v7; // rdi
  char IsInertiaEnabledForAxis; // bl
  float *v9; // r11
  float InertiaDecayRate; // xmm6_4
  CMotion *v11; // rax
  float CurrentVelocity; // xmm0_4

  v3 = 0LL;
  v5 = *((_QWORD *)this + 44);
  if ( v5 )
    v3 = *(_QWORD *)(v5 + 16);
  v7 = (float *)((char *)this + 456);
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v3 + 200, 2LL);
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v9, 2);
  v11 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerScaleAnimation *))(*(_QWORD *)this + 328LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v11);
  v7[11] = a2;
  CMotion::StartInertia((CMotion *)v7, CurrentVelocity, InertiaDecayRate, IsInertiaEnabledForAxis, a3);
}
