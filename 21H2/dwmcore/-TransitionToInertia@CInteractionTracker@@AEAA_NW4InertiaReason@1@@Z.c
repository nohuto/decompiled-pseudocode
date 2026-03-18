/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18021E3F8
 * Callers:
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x180219080 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1802191C0 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x180219358 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180219E28 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x18021C660 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18026503C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180113E5C (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180193D74 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1802194C8 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021A420 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18021A558 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18021A620 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18021B2D4 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18021B654 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021E0BC (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18021E7DC (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180254948 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 */

char __fastcall CInteractionTracker::TransitionToInertia(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ecx
  char v6; // r14
  int v7; // ecx
  int v8; // ecx
  CInteractionTracker *v9; // rcx
  bool v10; // zf
  CInteractionTracker *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  double v14; // xmm0_8
  int v15; // xmm2_4
  __int64 v16; // rcx
  double v17; // xmm0_8
  __int64 v18; // r11
  CBaseExpression **v19; // r14
  __int64 v20; // rax
  CBaseExpression *v21; // rcx
  int v22; // eax
  CScrollAnimation *v23; // rbx
  float CurrentValue; // xmm0_4
  bool v26; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v27[2]; // [rsp+28h] [rbp-58h] BYREF
  int v28; // [rsp+38h] [rbp-48h]
  __int128 v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  int v31; // [rsp+58h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]
  __int64 v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 176);
  v6 = 0;
  if ( v4 )
  {
    v7 = v4 - 1;
    if ( !v7 )
    {
      v10 = a2 == 0;
LABEL_8:
      if ( !v10 )
        return v2;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      if ( a2 != 1 )
      {
        if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1) && !CInteractionTracker::HasImpulse(v11) )
          return v2;
        v6 = 1;
      }
      goto LABEL_9;
    }
    if ( v8 != 1 )
      return v2;
  }
  if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1) && !CInteractionTracker::HasImpulse(v9) )
  {
    v10 = a2 == 1;
    goto LABEL_8;
  }
LABEL_9:
  CInteractionTracker::BoostCompositorClock((CInteractionTracker *)a1, 1);
  CInteractionTracker::StopCustomAnimations((CInteractionTracker *)a1, 0);
  if ( a2 == 1 )
  {
    CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
  }
  else
  {
    CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)a1);
    CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
  }
  if ( v6 )
  {
    v12 = &v32;
    v32 = *(_QWORD *)(a1 + 336);
    v33 = *(_QWORD *)(a1 + 344);
    v34 = *(_QWORD *)(a1 + 328);
    do
    {
      v13 = *v12;
      ++v2;
      ++v12;
      *(_BYTE *)(v13 + 368) |= 4u;
      *(_BYTE *)(v13 + 396) |= 1u;
    }
    while ( v2 < 3 );
  }
  else if ( !a2 )
  {
    v14 = CInteractionTracker::ValueFromBoundary(a1, 2LL, 2LL);
    v15 = LODWORD(v14);
    v17 = CInteractionTracker::ValueFromBoundary(v16, 1LL, 2LL);
    *(_DWORD *)(v18 + 520) = LODWORD(v17);
    *(_DWORD *)(v18 + 492) = v15;
    v19 = (CBaseExpression **)&v32;
    v32 = *(_QWORD *)(a1 + 328);
    v33 = *(_QWORD *)(a1 + 336);
    v34 = *(_QWORD *)(a1 + 344);
    v27[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
    v27[0] = &CExpressionValueStack::`vftable';
    v28 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 176) == 1
        && InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 200)) )
      {
        v20 = *(_QWORD *)(a1 + 16);
        v21 = *v19;
        v26 = 0;
        v22 = CBaseExpression::CalculateValue(v21, (struct CExpressionValueStack *)v27, *(_QWORD *)(v20 + 496), &v26);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            2867LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
            (const char *)(unsigned int)v22);
      }
      v23 = *v19;
      CurrentValue = CInteractionTracker::GetCurrentValue(a1, *((_DWORD *)*v19 + 85));
      CScrollAnimation::StartInertia(v23, CurrentValue, 0);
      *((_BYTE *)v23 + 396) |= 1u;
      ++v19;
    }
    while ( v19 != (CBaseExpression **)&v35 );
    v27[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v29);
  }
  CInteractionTracker::SetState(a1, 2, 0);
  LOBYTE(v2) = 1;
  return v2;
}
