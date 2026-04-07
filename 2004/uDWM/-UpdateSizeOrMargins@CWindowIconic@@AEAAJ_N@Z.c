/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CD8
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180023FF0 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800283DC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180043990 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x1800447F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180044A50 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800103D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180027888 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x1800282AC (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AFF0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18002B9E0 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x1800440EC (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180044420 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x180044490 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?IsWindowTab@CWindowData@@QEAA_NXZ @ 0x18005515C (-IsWindowTab@CWindowData@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800554AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ @ 0x1800556F4 (-GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?RectHeight@@YAHAEBUtagRECT@@@Z @ 0x18008079C (-RectHeight@@YAHAEBUtagRECT@@@Z.c)
 *     ?RectWidth@@YAHAEBUtagRECT@@@Z @ 0x1800807B4 (-RectWidth@@YAHAEBUtagRECT@@@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180098088 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18009A908 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  __int128 v3; // xmm6
  struct tagRECT *v4; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax
  char v8; // si
  __int64 v9; // rax
  int v10; // esi
  LONG right; // r15d
  int v12; // r14d
  LONG bottom; // r12d
  HWND WindowTabOwner; // rax
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  HMONITOR v17; // rax
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // eax
  int v23; // r8d
  int v24; // eax
  int v25; // r8d
  bool v26; // si
  int WindowRectForLivePreview; // eax
  bool v28; // r14
  bool v29; // r15
  int v30; // eax
  int updated; // eax
  int v32; // eax
  int v33; // eax
  __int128 v35; // [rsp+38h] [rbp-59h] BYREF
  int nNumerator; // [rsp+48h] [rbp-49h] BYREF
  struct tagRECT v37; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v38[8]; // [rsp+60h] [rbp-31h] BYREF
  struct tagRECT v39; // [rsp+68h] [rbp-29h] BYREF
  __int128 v40; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT Rect; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT v42; // [rsp+98h] [rbp+7h] BYREF

  v3 = 0LL;
  v4 = (struct tagRECT *)*((_QWORD *)this + 9);
  v6 = 0;
  v35 = 0LL;
  v7 = *((_QWORD *)this + 10);
  v42 = v4[3];
  v37 = *(struct tagRECT *)(v7 + 48);
  v40 = *(_OWORD *)(v7 + 64);
  v8 = !CWindowData::IsWindowTab((CWindowData *)v4);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
  {
    if ( v8 )
    {
LABEL_5:
      v9 = *((_QWORD *)this + 10);
      Rect = 0LL;
      AdjustWindowRectEx(&Rect, *(_DWORD *)(v9 + 100), 0, 0);
      v10 = -Rect.left;
      right = Rect.right;
      v12 = -Rect.top;
      bottom = Rect.bottom;
      DWORD2(v35) = -Rect.top;
      LODWORD(v35) = -Rect.left;
      DWORD1(v35) = Rect.right;
      HIDWORD(v35) = Rect.bottom;
      v3 = v35;
      goto LABEL_7;
    }
    v8 = *((_BYTE *)this + 20);
  }
  if ( v8 )
    goto LABEL_5;
  bottom = HIDWORD(v35);
  v12 = DWORD2(v35);
  right = DWORD1(v35);
  v10 = v35;
LABEL_7:
  if ( *((_BYTE *)this + 20) )
  {
    WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v42);
    v6 = WindowRectForLivePreview;
    if ( WindowRectForLivePreview < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRectForLivePreview, 0x18Au);
      return v6;
    }
  }
  else
  {
    DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)&Rect);
    if ( CWindowData::IsWindowTab(*((CWindowData **)this + 9)) )
    {
      WindowTabOwner = CWindowData::GetWindowTabOwner(*((CWindowData **)this + 9));
      if ( WindowTabOwner )
      {
        WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             WindowTabOwner);
        if ( WindowDataByHwnd )
        {
          WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v39, 1);
          v6 = WindowRestoreRect;
          if ( WindowRestoreRect < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, 0x174u);
            return v6;
          }
          v17 = MonitorFromWindow(0LL, 1u);
          if ( (unsigned int)GetDpiForMonitorInternal(v17, 0LL, &nNumerator, v38) )
          {
            Rect.top = MulDiv(375, nNumerator, 96);
            RectHeight(&v39);
            v18 = RectWidth(&v39);
            Rect.left = MulDiv(v20, v18, v19);
          }
        }
      }
    }
    else if ( *((_DWORD *)this + 4) == 2 )
    {
      v21 = *((_QWORD *)this + 3);
      if ( v21 )
        *(_QWORD *)&Rect.left = *(_QWORD *)(v21 + 24);
    }
    v42.right = v10 + right + Rect.left + v42.left;
    v42.bottom = v12 + bottom + v42.top + Rect.top;
  }
  *(_OWORD *)(*((_QWORD *)this + 10) + 64LL) = v3;
  *(_OWORD *)(*((_QWORD *)this + 10) + 244LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = v42;
  *(_OWORD *)(*((_QWORD *)this + 10) + 180LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 304LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 172LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 176LL) = 1065353216;
  *(_QWORD *)(*((_QWORD *)this + 10) + 312LL) = 0x3FF0000000000000LL;
  RectWidth(&v37);
  v22 = RectWidth(&v42);
  v26 = 1;
  if ( v23 == v22 )
  {
    RectHeight(&v37);
    v24 = RectHeight(&v42);
    if ( v25 == v24 )
      v26 = 0;
  }
  v28 = v37.left != v42.left || v37.top != v42.top;
  v29 = operator==(&v35, &v40);
  if ( v26 && (v30 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v6 = v30, v30 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x197u);
  }
  else
  {
    if ( !v29 )
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x2000);
    if ( v28 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v26 || !v29 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v6 = updated;
      if ( updated >= 0 )
      {
        v32 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v6 = v32;
        if ( v32 >= 0 )
        {
          v33 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
          v6 = v33;
          if ( v33 >= 0 )
          {
            if ( a2 )
              CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x1A8u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x1A7u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1A6u);
      }
    }
  }
  return v6;
}
