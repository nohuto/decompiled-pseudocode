/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800036E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180003E50 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800047C4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x180007E34 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180008A50 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000A3DC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18000A414 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000AD58 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x1800140BC (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800153EC (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18002B1BC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AFEF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@w.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800B195C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B1B78 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  CBaseObject *v5; // r15
  CBaseObject *v6; // rsi
  int *v7; // r13
  int v10; // r12d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  struct tagRECT v17; // xmm0
  __int128 v18; // xmm6
  CAnimatedTransitionVisual *v19; // rcx
  __int64 v20; // rcx
  char result; // al
  int v22; // eax
  int v23; // eax
  int v24; // eax
  HWND v25; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v27; // r13
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct CAnimationComponent **v36; // [rsp+28h] [rbp-48h]
  struct CAnimationComponent **v37; // [rsp+28h] [rbp-48h]
  struct CAnimationComponent **v38; // [rsp+28h] [rbp-48h]
  struct tagRECT v39; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v40; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v41; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  *(_QWORD *)&v39.left = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v39.right = 0LL;
  v40 = 0LL;
  v7 = a4;
  if ( (a3 & 1) == 0 )
    goto LABEL_28;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v41);
  v10 = *(_DWORD *)(a2 + 616);
  if ( (v10 & 0xFFF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 616) & 0xFFF) == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              *(HWND *)(a2 + 40),
              1) )
        goto LABEL_28;
      *(_DWORD *)(a2 + 616) |= 0x200000u;
      v34 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v41, 0, (struct CAnimationComponent **)&v39);
      v4 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v34,
          0x3CFu,
          v36);
      else
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v39.left + 40LL) + 968LL) = 1;
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(a2 + 616) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 616) = v10 | 0x200000;
      v33 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
      v4 = v33;
      if ( v33 >= 0 )
        *(_DWORD *)(a2 + 616) = v10;
      else
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v33,
          0x3DAu,
          v36);
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x18 && (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x2A )
    {
      if ( (*(_DWORD *)(a2 + 616) & 0xFFF) == 0x45 )
      {
        v23 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v41, 0, (struct CAnimationComponent **)&v39);
        v4 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v23,
            0x3EFu,
            v36);
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(a2 + 616) & 0xFFF) == 0x46 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::GetImpl'::`2'::impl,
          0LL);
        if ( (*(_DWORD *)(a2 + 616) & 0x1800000) == 0 )
          goto LABEL_28;
        v22 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, (struct CAnimationComponent **)&v39);
        v4 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v22,
            0x3E9u,
            v36);
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x57 )
      {
LABEL_26:
        if ( v6 )
          CBaseObject::Release(v6);
        goto LABEL_28;
      }
    }
    if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
           (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
           *(HWND *)(a2 + 40),
           1)
      || ((v24 = *(_DWORD *)(a2 + 616) & 0xFFF, v24 == 42) || v24 == 87)
      && !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
    {
      v11 = *((_QWORD *)a1 + 16);
      if ( !v11 )
        goto LABEL_9;
      v25 = *(HWND *)(v11 + 16);
      if ( v25 == *(HWND *)(a2 + 40) )
        goto LABEL_28;
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v25);
      v27 = WindowDataByHwnd;
      if ( WindowDataByHwnd )
      {
        *((_DWORD *)WindowDataByHwnd + 154) = *(_DWORD *)(a2 + 616) & 0xEBFFF000 | 0x1400002A;
        if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 16) + 40LL) + 736LL) == 1.0 )
        {
          v28 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, *(unsigned int *)(a2 + 616));
          v29 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
                  a1,
                  (struct CWindowData *)a2,
                  v28,
                  1,
                  (struct CAnimationComponent **)&v39);
          v4 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v29,
              0x38Bu,
              v36);
LABEL_21:
            if ( *(_QWORD *)&v39.left )
              CBaseObject::Release(*(CBaseObject **)&v39.left);
            if ( v5 )
              CBaseObject::Release(v5);
            v7 = a4;
            goto LABEL_26;
          }
          v30 = CSlide::_SlideWindowHorizontally(a1, v27, &v41, 0, 0LL, (struct CAnimationComponent **)&v39.right);
          v4 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v30,
              0x38Cu,
              v37);
LABEL_51:
            v5 = *(CBaseObject **)&v39.right;
            goto LABEL_21;
          }
          v5 = *(CBaseObject **)&v39.right;
        }
        else
        {
          v31 = CSlide::_SlideWindowHorizontally(
                  a1,
                  (struct CWindowData *)a2,
                  &v41,
                  0,
                  0LL,
                  (struct CAnimationComponent **)&v39);
          v4 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v31,
              0x394u,
              v38);
            goto LABEL_21;
          }
          v32 = CSlide::_SlideWindowHorizontally(a1, v27, &v41, 0, 0LL, (struct CAnimationComponent **)&v39.right);
          v4 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v32,
              0x395u,
              v37);
            goto LABEL_51;
          }
          v5 = *(CBaseObject **)&v39.right;
          *(_DWORD *)(*(_QWORD *)&v39.right + 56LL) = *(_DWORD *)(*(_QWORD *)&v39.left + 56LL) + 1;
        }
      }
      else
      {
LABEL_9:
        v12 = CSlide::_SlideWindowHorizontally(
                a1,
                (struct CWindowData *)a2,
                &v41,
                0,
                0LL,
                (struct CAnimationComponent **)&v39);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v12,
            0x39Fu,
            v37);
          goto LABEL_21;
        }
        v13 = *(_QWORD *)&v39.left;
        CAnimatedTransitionVisual::SetBeginAlpha(*(CAnimatedTransitionVisual **)(*(_QWORD *)&v39.left + 40LL), 1.0);
        *(_BYTE *)(*(_QWORD *)(v13 + 40) + 961LL) = 1;
        if ( (*(_DWORD *)(a2 + 616) & 0xFFF) == 0x18 )
          *(_BYTE *)(*(_QWORD *)(v13 + 40) + 968LL) = 1;
      }
      if ( *(_QWORD *)&v39.left && *(_DWORD *)(*(_QWORD *)&v39.left + 68LL) != 2 )
        *(_DWORD *)(*(_QWORD *)&v39.left + 68LL) = 3;
      if ( v5 && *((_DWORD *)v5 + 17) != 2 )
        *((_DWORD *)v5 + 17) = 3;
      v14 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, *(_DWORD *)(a2 + 616) & 0xFFF);
      v15 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v14, &v40);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v15,
          0x3B5u,
          v37);
        v6 = v40;
      }
      else
      {
        v6 = v40;
        if ( v40 )
        {
          v16 = *(_QWORD *)(*(_QWORD *)&v39.left + 40LL);
          v17 = *(struct tagRECT *)(v16 + 848);
          v18 = *(_OWORD *)(v16 + 864);
          v19 = (CAnimatedTransitionVisual *)*((_QWORD *)v40 + 5);
          v41 = v17;
          CAnimatedTransitionVisual::SetBeginRect(v19, &v41);
          v20 = *((_QWORD *)v6 + 5);
          *(_OWORD *)(v20 + 864) = v18;
          CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 0x1000u);
          *(_BYTE *)(*((_QWORD *)v6 + 5) + 979LL) = 1;
          *((_BYTE *)v6 + 74) = 1;
          if ( *((_DWORD *)v6 + 17) != 2 )
            *((_DWORD *)v6 + 17) = 1;
          *(_DWORD *)(*(_QWORD *)&v39.left + 56LL) = *((_DWORD *)v6 + 14) + 1;
        }
      }
      goto LABEL_21;
    }
  }
  else if ( v10 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
      *(const struct CTopLevelWindow **)(a2 + 384),
      1,
      1);
    v35 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v35, 0x3F8u, v36);
  }
LABEL_28:
  result = 1;
  *v7 = v4;
  return result;
}
