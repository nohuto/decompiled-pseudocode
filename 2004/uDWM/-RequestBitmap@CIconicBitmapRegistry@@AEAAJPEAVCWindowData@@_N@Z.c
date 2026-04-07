/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800269B4
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18000702C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18003E558 (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180044BDC (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800892BC (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180089770 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180089A80 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800103D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800268C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180037740 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x180044490 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800450BC (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800554AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ @ 0x1800556F4 (-GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ.c)
 *     ?IsLivePreview@@YA_NPEAVCWindowData@@@Z @ 0x180055728 (-IsLivePreview@@YA_NPEAVCWindowData@@@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180055768 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?RectHeight@@YAHAEBUtagRECT@@@Z @ 0x18008079C (-RectHeight@@YAHAEBUtagRECT@@@Z.c)
 *     ?RectWidth@@YAHAEBUtagRECT@@@Z @ 0x1800807B4 (-RectWidth@@YAHAEBUtagRECT@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085510 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ??A?$DynArray@PEAVCThumbnailData@@$0A@@@QEBAAEAPEAVCThumbnailData@@I@Z @ 0x1800892A8 (--A-$DynArray@PEAVCThumbnailData@@$0A@@@QEBAAEAPEAVCThumbnailData@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJPEFBVCIconicBitmapPending@@I@Z @ 0x1800893D4 (-AddMultipleAndSet@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJPEFBVCIconicBitmapPending@@I@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180089C4C (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180098088 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, HWND *a2, char a3)
{
  unsigned int v6; // edi
  char v7; // r15
  unsigned int v8; // r8d
  unsigned int v9; // edx
  struct CWindowData **v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v14; // rcx
  HWND v15; // r14
  LPARAM v16; // r9
  UINT v17; // edx
  WPARAM v18; // r8
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  HWND WindowTabOwner; // rax
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  HMONITOR v24; // rax
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  CDesktopManager *v28; // rcx
  int started; // eax
  struct tagSIZE v30; // [rsp+30h] [rbp-20h] BYREF
  struct CWindowData *v31; // [rsp+38h] [rbp-18h]
  struct tagRECT v32; // [rsp+40h] [rbp-10h] BYREF
  int nNumerator; // [rsp+90h] [rbp+40h] BYREF
  char v34; // [rsp+98h] [rbp+48h] BYREF

  v6 = 0;
  v7 = 0;
  if ( !IsWindowTab((struct CWindowData *)a2) )
  {
    v8 = *((_DWORD *)this + 18);
    v9 = 0;
    if ( v8 )
    {
      v10 = (struct CWindowData **)(*((_QWORD *)this + 6) + 8LL);
      do
      {
        if ( *v10 == (struct CWindowData *)a2 )
          break;
        ++v9;
        v10 += 2;
      }
      while ( v9 < v8 );
      if ( v9 < v8 )
      {
        v7 = 1;
        v11 = DynArray<CIconicBitmapPending,0>::RemoveAt();
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x178u);
      }
    }
  }
  if ( !a3 )
  {
    if ( v7 || IsWindowTab((struct CWindowData *)a2) )
    {
      if ( IsLivePreview((struct CWindowData *)a2) )
        *((_BYTE *)this + 89) = 0;
      else
        CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)a2, 0);
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = *((_DWORD *)this + 18) != 0;
    }
    return v6;
  }
  if ( IsWindowTab((struct CWindowData *)a2) )
  {
    if ( !IsLivePreview((struct CWindowData *)a2)
      && *((_DWORD *)a2 + 132)
      && (!(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl)
       || *(_DWORD *)(*(_QWORD *)DynArray<CThumbnailData *,0>::operator[](a2 + 63, 0LL) + 73LL)) )
    {
      return 0LL;
    }
  }
  else
  {
    v31 = (struct CWindowData *)a2;
    *(double *)&v30 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 40) + 10.0;
    v12 = DynArray<CIconicBitmapPending,0>::AddMultipleAndSet((char *)this + 48, &v30);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x184u);
      return v6;
    }
  }
  if ( IsLivePreview((struct CWindowData *)a2) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
    v15 = *(HWND *)(v14 + 40);
    *((_BYTE *)this + 89) = 1;
    if ( v7 )
    {
LABEL_36:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v14, &UdwmManageIconicThumbnail_Info, 3LL);
      if ( !IsWindowTab((struct CWindowData *)a2) )
      {
        v28 = CDesktopManager::s_pDesktopManagerInstance;
        if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) )
        {
          *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = 1;
          started = CDesktopManager::PostStartAnimations(v28);
          v6 = started;
          if ( started < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x1CEu);
        }
      }
      return v6;
    }
    v16 = 0LL;
    v17 = 806;
    v18 = 0LL;
LABEL_35:
    PostMessageW(v15, v17, v18, v16);
    goto LABEL_36;
  }
  v15 = a2[5];
  CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)a2, 1);
  if ( v7 )
    goto LABEL_36;
  if ( !v15 )
    goto LABEL_36;
  *(double *)&v30 = 0.0;
  WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v15);
  AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
  if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v30) )
    goto LABEL_36;
  WindowTabOwner = CWindowData::GetWindowTabOwner((CWindowData *)a2);
  if ( !WindowTabOwner
    || (WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             WindowTabOwner)) == 0LL )
  {
LABEL_31:
    if ( CWindowData::IsImmersiveWindow((CWindowData *)a2) )
      v18 = (WPARAM)a2[5];
    else
      v18 = 0LL;
    v17 = 803;
    v16 = LOWORD(v30.cy) | (LOWORD(v30.cx) << 16);
    goto LABEL_35;
  }
  WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v32, 1);
  v6 = WindowRestoreRect;
  if ( WindowRestoreRect >= 0 )
  {
    v24 = MonitorFromWindow(0LL, 1u);
    if ( (unsigned int)GetDpiForMonitorInternal(v24, 0LL, &nNumerator, &v34) )
    {
      v30.cy = MulDiv(375, nNumerator, 96);
      RectHeight(&v32);
      v25 = RectWidth(&v32);
      v30.cx = MulDiv(v27, v25, v26);
    }
    goto LABEL_31;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, 0x1B6u);
  return v6;
}
