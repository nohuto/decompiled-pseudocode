/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801D1014
 * Callers:
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801CBBF4 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1801CBD2C (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x1801CBEB0 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801CC884 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801CECB8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180215D54 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800423A0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180097A38 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801892D4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDFC (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801CCF34 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801CD000 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CD430 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801CDAE0 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1801CDDD8 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801D06C0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801D0CF4 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801D13E8 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180205D64 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 */

char __fastcall CInteractionTracker::TransitionToInertia(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ecx
  char v6; // r14
  int v7; // ecx
  int v8; // ecx
  CInteractionTracker *v9; // rcx
  __int64 v10; // r9
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
  v4 = *(_DWORD *)(a1 + 168);
  v6 = 0;
  if ( !v4 )
    goto LABEL_5;
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( a2 )
      return v2;
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return v2;
LABEL_5:
    if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1)
      && !CInteractionTracker::HasImpulse(v9)
      && a2 != 1 )
    {
      return v2;
    }
    goto LABEL_8;
  }
  if ( a2 == 1 )
    goto LABEL_16;
  if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1) && !CInteractionTracker::HasImpulse(v11) )
    return v2;
  v6 = 1;
LABEL_8:
  if ( a2 == 1 )
  {
LABEL_16:
    CInteractionTracker::StopCustomAnimations((CInteractionTracker *)a1, 0);
    CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
    goto LABEL_17;
  }
LABEL_9:
  CInteractionTracker::StopCustomAnimations((CInteractionTracker *)a1, 0);
  CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
  CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)a1);
  CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
LABEL_17:
  if ( v6 )
  {
    v12 = &v32;
    v32 = *(_QWORD *)(a1 + 328);
    v33 = *(_QWORD *)(a1 + 336);
    v34 = *(_QWORD *)(a1 + 320);
    do
    {
      v13 = *v12;
      ++v2;
      ++v12;
      *(_BYTE *)(v13 + 344) |= 4u;
      *(_BYTE *)(v13 + 372) |= 1u;
    }
    while ( v2 < 3 );
  }
  else if ( !a2 )
  {
    v14 = CInteractionTracker::ValueFromBoundary(a1, 2LL, 2LL);
    v15 = LODWORD(v14);
    v17 = CInteractionTracker::ValueFromBoundary(v16, 1LL, 2LL);
    *(_DWORD *)(v18 + 496) = LODWORD(v17);
    *(_DWORD *)(v18 + 468) = v15;
    v19 = (CBaseExpression **)&v32;
    v32 = *(_QWORD *)(a1 + 320);
    v33 = *(_QWORD *)(a1 + 328);
    v34 = *(_QWORD *)(a1 + 336);
    v27[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 272LL);
    v27[0] = &CExpressionValueStack::`vftable';
    v28 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 168) == 1 )
      {
        v20 = *(_QWORD *)(a1 + 16);
        v21 = *v19;
        v26 = 0;
        v22 = CBaseExpression::CalculateValue(v21, (struct CExpressionValueStack *)v27, *(_QWORD *)(v20 + 352), &v26);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB09,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
            (const char *)(unsigned int)v22);
      }
      v23 = *v19;
      CurrentValue = CInteractionTracker::GetCurrentValue(a1, *((_DWORD *)*v19 + 79));
      CScrollAnimation::StartInertia(v23, CurrentValue, 0);
      *((_BYTE *)v23 + 372) |= 1u;
      ++v19;
    }
    while ( v19 != (CBaseExpression **)&v35 );
    v27[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v29);
  }
  CInteractionTracker::SetState(a1, 2, 0LL, v10);
  LOBYTE(v2) = 1;
  return v2;
}
