/*
 * XREFs of ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B4CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180009F24 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000A944 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180035A48 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180038BCC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800AEF10 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x1800B2008 (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800B203C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CShrinkPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  CBaseObject *v4; // rbx
  int v5; // r14d
  int PVLTarget; // eax
  int v10; // eax
  struct tagRECT v11; // xmm6
  struct tagPOINT *v12; // rcx
  struct tagRECT *v13; // rcx
  int v14; // eax
  int v15; // eax
  CPanelAnimation *v16; // rcx
  int v17; // ecx
  LONG v18; // edx
  LONG v19; // edx
  int v20; // eax
  struct tagPOINT *v21; // rcx
  int v22; // eax
  __int128 v23; // xmm0
  char result; // al
  struct tagRECT v25; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-20h] BYREF
  CBaseObject *v27; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = 0;
  v27 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x29 )
      goto LABEL_29;
    v23 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 128) = 1;
    *(_OWORD *)(a1 + 132) = v23;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x28 )
  {
    if ( (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x29
      || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
            *(HWND *)(a2 + 40),
            0) )
    {
      goto LABEL_29;
    }
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            0xFFFFFFFF,
            1,
            &v27);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x612u);
LABEL_12:
      v4 = v27;
      goto LABEL_27;
    }
    v4 = v27;
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v27 + 5), 1.0);
    v12 = (struct tagPOINT *)*((_QWORD *)v4 + 5);
    v26 = *(struct tagRECT *)((char *)v4 + 88);
    v11 = v26;
    CAnimatedTransitionVisual::SetBeginRect(v12, &v26);
    v13 = (struct tagRECT *)*((_QWORD *)v4 + 5);
    v13[54] = v11;
    goto LABEL_21;
  }
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
          *(HWND *)(a2 + 40),
          1) )
    goto LABEL_29;
  if ( *(_BYTE *)(a1 + 128) )
  {
    v14 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
    v15 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v14,
            0LL,
            0LL,
            0xFFFFFFFF,
            1,
            &v27);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x5F4u);
      goto LABEL_12;
    }
    v4 = v27;
    v26 = *(struct tagRECT *)((char *)v27 + 88);
    v25 = v26;
    if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v16, &v25, (const struct tagRECT *)(a1 + 132)) )
    {
      v17 = 0;
      v18 = *(_DWORD *)(a1 + 132);
      if ( v26.right - v26.left >= 0 )
        v17 = v26.right - v26.left;
      v25.right = v18 + v17;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 140);
      v20 = 0;
      v25.right = v19;
      if ( v26.right - v26.left >= 0 )
        v20 = v26.right - v26.left;
      v18 = v19 - v20;
    }
    v21 = (struct tagPOINT *)*((_QWORD *)v4 + 5);
    v25.left = v18;
    CAnimatedTransitionVisual::SetBeginRect(v21, &v26);
    v13 = (struct tagRECT *)*((_QWORD *)v4 + 5);
    v13[54] = v25;
LABEL_21:
    CVisual::SetDirtyFlags((CVisual *)&v13->right, 4096);
LABEL_27:
    if ( v4 )
      CBaseObject::Release(v4);
    goto LABEL_29;
  }
  v22 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 1.0, 0LL);
  v5 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x60Au);
LABEL_29:
  result = 1;
  *a4 = v5;
  return result;
}
