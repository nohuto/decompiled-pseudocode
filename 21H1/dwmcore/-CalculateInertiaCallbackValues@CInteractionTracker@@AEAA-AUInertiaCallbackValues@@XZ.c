/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801CC1A4
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801CF5F8 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D0F38 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D2E94 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801D4134 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801CBF78 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x1801CD960 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1801CDAC0 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801CDAE0 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180205894 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1802069F4 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180206AB8 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180206B20 (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180206F5C (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180207004 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x18020705C (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetModifiedRestingValue@CMotion@@QEBAMXZ @ 0x1802103A8 (-GetModifiedRestingValue@CMotion@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::CalculateInertiaCallbackValues(__int64 a1, __int64 a2)
{
  CInteractionTracker *v4; // rcx
  bool HasImpulse; // al
  __int64 v6; // rcx
  int v7; // xmm6_4
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  CScrollAnimation *v10; // rcx
  __int64 v11; // rcx
  CMotion *v12; // rax
  __m128 v13; // xmm6
  CMotion *v14; // rax
  __int64 v15; // rcx
  CMotion *v16; // rax
  __int64 v17; // rcx
  char v18; // si
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rcx
  char v22; // al
  bool v23; // al
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // xmm0_4
  int v27; // xmm1_4
  int v28; // xmm3_4
  int v29; // xmm2_4
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // xmm0_4
  __m128 v35; // xmm2
  unsigned __int64 v36; // xmm1_8
  __m128 v37; // xmm2
  int v38; // eax
  int v39; // xmm0_4
  __m128 v40; // xmm1
  int v41; // xmm0_4
  int v42; // eax
  int v43; // eax
  CScrollScaleKeyframeAnimation *v44; // rcx
  float NaturalEndpoint; // xmm7_4
  float LastKeyframeValueForScale; // xmm6_4
  float ScaleVelocity; // xmm0_4
  unsigned int v48; // xmm1_4
  unsigned int v49; // xmm1_4
  int v50; // xmm0_4
  __m128 v51; // xmm2
  unsigned __int64 v52; // xmm1_8
  int v53; // eax
  int v54; // xmm0_4
  int v55; // xmm1_4
  int v56; // eax
  unsigned int v58; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v59; // [rsp+24h] [rbp-5Ch]
  int v60; // [rsp+28h] [rbp-58h]
  unsigned int v61; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v62; // [rsp+34h] [rbp-4Ch]
  int v63; // [rsp+38h] [rbp-48h]
  unsigned int v64; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v65; // [rsp+44h] [rbp-3Ch]
  int v66; // [rsp+48h] [rbp-38h]
  int v67; // [rsp+58h] [rbp-28h]

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
  {
    HasImpulse = CInteractionTracker::HasImpulse(v4);
    v6 = *(_QWORD *)(a1 + 328);
    *(_BYTE *)(a2 + 53) = HasImpulse;
    v7 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 320LL))(v6) + 48);
    v8 = (__m128)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 320LL))(*(_QWORD *)(a1 + 336))
                                 + 48);
    *(_DWORD *)a2 = v7;
    *(_DWORD *)(a2 + 4) = v8.m128_i32[0];
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 320LL))(*(_QWORD *)(a1 + 320))
                                     + 48);
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 328));
    v9 = v8;
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 336));
    v66 = 0;
    v10 = *(CScrollAnimation **)(a1 + 320);
    *(_QWORD *)(a2 + 16) = _mm_unpacklo_ps(v9, v8).m128_u64[0];
    *(_DWORD *)(a2 + 24) = 0;
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(v10);
    v11 = *(_QWORD *)(a1 + 328);
    *(_DWORD *)(a2 + 28) = v8.m128_i32[0];
    v12 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 320LL))(v11);
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v12);
    v13 = v8;
    v14 = (CMotion *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 320LL))(*(_QWORD *)(a1 + 336));
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v14);
    v15 = *(_QWORD *)(a1 + 320);
    v66 = 0;
    *(_QWORD *)(a2 + 32) = _mm_unpacklo_ps(v13, v8).m128_u64[0];
    *(_DWORD *)(a2 + 40) = 0;
    v16 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 320LL))(v15);
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v16);
    v17 = *(_QWORD *)(a1 + 328);
    *(_DWORD *)(a2 + 48) = v8.m128_i32[0];
    v18 = 1;
    v19 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 320LL))(v17) + 136);
    if ( v19 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
    else
      v20 = 1;
    v23 = 0;
    if ( v20 )
    {
      v21 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 320LL))(*(_QWORD *)(a1 + 336))
                      + 136);
      v22 = v21 ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21) : 1;
      if ( v22 )
        v23 = 1;
    }
    v24 = *(_QWORD *)(a1 + 320);
    *(_BYTE *)(a2 + 44) = v23;
    v25 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 320LL))(v24) + 136);
    if ( v25 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25);
    *(_BYTE *)(a2 + 52) = v18;
  }
  else
  {
    v26 = *((_DWORD *)v4 + 18);
    v27 = *((_DWORD *)v4 + 19);
    v28 = *((_DWORD *)v4 + 20);
    v29 = *((_DWORD *)v4 + 32);
    if ( CInteractionTracker::HasDefaultAnimations(v4) )
    {
      *(_WORD *)(v30 + 52) = 257;
      *(_BYTE *)(v30 + 44) = 1;
      *(_DWORD *)(v30 + 16) = v26;
      *(_DWORD *)(v30 + 20) = v27;
      *(_DWORD *)(v30 + 24) = v28;
      v32 = *(_QWORD *)(v31 + 456);
      v33 = *(_DWORD *)(v30 + 24);
      *(_QWORD *)(v30 + 32) = *(_QWORD *)(v30 + 16);
      *(_DWORD *)(v30 + 40) = v33;
      *(_DWORD *)(v30 + 28) = v29;
      *(_DWORD *)(v30 + 48) = v29;
      if ( v32 )
      {
        CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v32, &v64);
        CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(*(_QWORD *)(a1 + 456), &v61);
        CScrollPositionKeyframeAnimation::GetPositionVelocity(*(_QWORD *)(a1 + 456), &v58);
        v34 = v60;
        v35 = (__m128)v62;
        *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)v58, (__m128)v59).m128_u64[0];
        v36 = _mm_unpacklo_ps((__m128)v61, v35).m128_u64[0];
        v37 = (__m128)v65;
        v38 = v34;
        v39 = v63;
        *(_QWORD *)(a2 + 32) = v36;
        v40 = (__m128)v64;
        v67 = v39;
        v41 = v66;
        *(_DWORD *)(a2 + 8) = v38;
        v42 = v67;
        v67 = v41;
        *(_DWORD *)(a2 + 40) = v42;
        v43 = v67;
        *(_QWORD *)(a2 + 16) = _mm_unpacklo_ps(v40, v37).m128_u64[0];
        *(_DWORD *)(a2 + 24) = v43;
      }
      v44 = *(CScrollScaleKeyframeAnimation **)(a1 + 464);
      if ( v44 )
      {
        NaturalEndpoint = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v44);
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*(CScrollScaleKeyframeAnimation **)(a1 + 464));
        ScaleVelocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(*(CScrollScaleKeyframeAnimation **)(a1 + 464));
        v48 = *(_DWORD *)(a2 + 36);
        *(float *)(a2 + 12) = ScaleVelocity;
        v64 = *(_DWORD *)(a2 + 32);
        v66 = *(_DWORD *)(a2 + 40);
        *(float *)(a2 + 48) = LastKeyframeValueForScale;
        *(float *)(a2 + 28) = NaturalEndpoint;
        v65 = v48;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v61, &v64);
        v49 = *(_DWORD *)(a2 + 20);
        v64 = *(_DWORD *)(a2 + 16);
        v66 = *(_DWORD *)(a2 + 24);
        v65 = v49;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v58, &v64);
        v50 = v63;
        v51 = (__m128)v59;
        *(_QWORD *)(a2 + 32) = _mm_unpacklo_ps((__m128)v61, (__m128)v62).m128_u64[0];
        v52 = _mm_unpacklo_ps((__m128)v58, v51).m128_u64[0];
        v67 = v60;
        *(_DWORD *)(a2 + 40) = v50;
        v53 = v67;
        *(_QWORD *)(a2 + 16) = v52;
        *(_DWORD *)(a2 + 24) = v53;
      }
    }
    else
    {
      *(_DWORD *)(v30 + 32) = v26;
      *(_DWORD *)(v30 + 36) = v27;
      *(_DWORD *)(v30 + 40) = v28;
      v54 = *(_DWORD *)(v31 + 76);
      v55 = *(_DWORD *)(v31 + 80);
      v56 = *(_DWORD *)(v31 + 72);
      *(_DWORD *)(v30 + 48) = v29;
      *(_DWORD *)(v30 + 16) = v56;
      *(_DWORD *)(v30 + 20) = v54;
      *(_DWORD *)(v30 + 24) = v55;
      *(_DWORD *)(v30 + 28) = v29;
      *(_DWORD *)v30 = 0;
      *(_DWORD *)(v30 + 4) = 0;
      *(_DWORD *)(v30 + 8) = 0;
      *(_DWORD *)(v30 + 12) = 0;
    }
  }
  return a2;
}
