/*
 * XREFs of ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003F9DC
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180029680 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18003F954 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180086260 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000C5B8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800103D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001D740 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18002595C (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18008212C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800824C4 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180082584 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18008286C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180082D40 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082DB8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ @ 0x180083764 (-_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x180083A08 (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateFinalLocation@CLivePreview@@AEAAXPEAUtagRECT@@@Z @ 0x180084200 (-_UpdateFinalLocation@CLivePreview@@AEAAXPEAUtagRECT@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18008680C (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18009786C (-FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180097D04 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::Activate(
        __int64 a1,
        char a2,
        HWND a3,
        HWND a4,
        int a5,
        int a6,
        char a7,
        struct tagRECT *a8)
{
  unsigned int v12; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  int v14; // r8d
  struct CWindowData *TabWindowData; // rsi
  signed int LastError; // eax
  int v18; // r9d
  DWORD v19; // r9d
  DWORD v20; // edx
  int v21; // ecx
  int v22; // ecx
  CDesktopManager *v23; // rax
  HMONITOR v24; // rax
  bool v25; // al
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  int inserted; // eax
  int v30; // r8d
  __int64 v31; // rax
  struct CVisual *v32; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned int v34; // eax
  int v35; // ecx
  __int64 v36; // rax
  int v37; // eax
  CBaseObject *v38; // rcx
  unsigned int v39; // [rsp+20h] [rbp-79h]
  __int64 v40; // [rsp+30h] [rbp-69h] BYREF
  __int64 v41; // [rsp+38h] [rbp-61h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+40h] [rbp-59h] BYREF
  struct tagRECT Rect; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v44[16]; // [rsp+80h] [rbp-19h] BYREF

  v12 = 0;
  SetRectEmpty((LPRECT)(a1 + 572));
  *(_BYTE *)(a1 + 588) = 0;
  *(_BYTE *)(a1 + 283) = 0;
  GetDesktopID(1LL, &v41);
  GetDesktopID(2LL, &v40);
  if ( v41 == v40 || !a2 )
  {
    *(_QWORD *)(a1 + 288) = v40;
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                         a3);
    TabWindowData = WindowDataByHwnd;
    if ( a2 )
    {
      if ( (WindowDataByHwnd
         || (TabWindowData = CWindowList::FindTabWindowData(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a3)) != 0LL)
        && (*((_BYTE *)TabWindowData + 612) & 1) != 0 )
      {
        a2 = 0;
      }
      if ( a2 )
      {
        if ( TabWindowData
          && (*((_DWORD *)TabWindowData + 25) & 0x20000000) != 0
          && !*((_QWORD *)TabWindowData + 52)
          && !CWindowData::GetMDIOwner(TabWindowData) )
        {
          wndpl.length = 44;
          memset(&wndpl.flags, 0, 40);
          SetLastError(0);
          if ( !GetWindowPlacement(*((HWND *)TabWindowData + 5), &wndpl) )
          {
            LastError = GetLastError();
            v12 = LastError;
            if ( LastError > 0 )
              v12 = (unsigned __int16)LastError | 0x80070000;
            v39 = 859;
            if ( (v12 & 0x80000000) == 0 )
              v12 = -2003304445;
            v18 = v12;
            goto LABEL_84;
          }
          if ( (wndpl.flags & 2) == 0 )
          {
            v19 = *((_DWORD *)TabWindowData + 26);
            v20 = *((_DWORD *)TabWindowData + 25);
            Rect = 0LL;
            AdjustWindowRectEx(&Rect, v20, 0, v19);
            v21 = 0;
            if ( wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left >= 0 )
              v21 = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
            if ( Rect.left + v21 - Rect.right <= 0 )
              goto LABEL_29;
            v22 = 0;
            if ( wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top >= 0 )
              v22 = wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top;
            if ( Rect.top + v22 - Rect.bottom <= 0 )
LABEL_29:
              a2 = 0;
          }
        }
        if ( a2 )
        {
          if ( TabWindowData && (*((_BYTE *)TabWindowData + 608) & 4) != 0 )
            return v12;
          v23 = CDesktopManager::s_pDesktopManagerInstance;
          *(_QWORD *)(a1 + 520) = TabWindowData;
          *(_QWORD *)(a1 + 528) = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v23 + 61), a4);
          *(_DWORD *)(a1 + 544) = a5;
          if ( CLivePreview::_IsImmersiveAppOnTaskbar((CLivePreview *)a1) )
          {
            v24 = MonitorFromWindow(*(HWND *)(*(_QWORD *)(a1 + 520) + 40LL), 0);
            wndpl.length = 40;
            memset(&wndpl.flags, 0, 36);
            v25 = v24
               && GetMonitorInfoW(v24, (LPMONITORINFO)&wndpl)
               && (wndpl.showCmd != *((_DWORD *)TabWindowData + 13)
                || wndpl.ptMinPosition.y != *((_DWORD *)TabWindowData + 15));
            *(_BYTE *)(a1 + 283) = v25;
          }
          if ( !*(_QWORD *)(a1 + 536) )
          {
            v26 = CImmersiveState::Create((struct CImmersiveState **)(a1 + 536), *(_QWORD *)(a1 + 288));
            v12 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x37Fu);
              goto LABEL_89;
            }
          }
          v27 = *(_QWORD *)(a1 + 528);
          if ( v27 && ((*(_DWORD *)(v27 + 112) - 8) & 0xFFFFFFFD) == 0 )
            *(_QWORD *)(a1 + 528) = *(_QWORD *)(*(_QWORD *)(a1 + 536) + 48LL);
          CLivePreview::_UpdateFinalLocation((CLivePreview *)a1, a8);
          *(_BYTE *)(a1 + 282) = a5 == 4;
          if ( *(_BYTE *)(a1 + 280) )
          {
            v31 = *(_QWORD *)(a1 + 528);
            if ( v31 )
              v32 = *(struct CVisual **)(v31 + 384);
            else
              v32 = 0LL;
            RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                     *(_QWORD *)(a1 + 288));
            inserted = VisualCollection::InsertRelative(
                         (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                         (struct CVisual *)a1,
                         v32,
                         0,
                         1);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v39 = 935;
              goto LABEL_83;
            }
          }
          else
          {
            if ( !*(_DWORD *)(a1 + 328) )
            {
              v28 = CLivePreview::_CollectWindows((CLivePreview *)a1);
              v12 = v28;
              if ( v28 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x394u);
                goto LABEL_89;
              }
            }
            inserted = CDesktopManager::EnableLivePreviewInputHooks(1, a5 != 2);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v39 = 919;
              goto LABEL_83;
            }
            *(_DWORD *)(a1 + 296) = a6;
            *(_WORD *)(a1 + 280) = 257;
            inserted = CLivePreview::_FadeOutToGlass((CLivePreview *)a1, TabWindowData);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v39 = 924;
              goto LABEL_83;
            }
            if ( *(_DWORD *)(a1 + 328) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                McGenEventWrite_EtwEventWriteTransfer(
                  (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
                  (unsigned int)&UdwmLivePreviewAnimation_Start,
                  v30,
                  1,
                  (__int64)&Rect);
              NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 84), 0, 0);
            }
          }
          inserted = CLivePreview::_AnimateOpaqueVisuals((CLivePreview *)a1, TabWindowData);
          v12 = inserted;
          if ( inserted >= 0 )
            return v12;
          v39 = 938;
          goto LABEL_83;
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 280) )
      return v12;
    if ( *(_DWORD *)(a1 + 328) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&UdwmLivePreviewAnimation_Start,
          v14,
          1,
          (__int64)v44);
      NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 84), 0, 0);
    }
    inserted = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    v12 = inserted;
    if ( inserted >= 0 )
    {
      *(_BYTE *)(a1 + 281) = 1;
      if ( TabWindowData && (v34 = *((_DWORD *)TabWindowData + 28), v34 <= 0xA) && (v35 = 1282, _bittest(&v35, v34)) )
      {
        inserted = CLivePreview::_RemoveLauncherClones((CLivePreview *)a1);
        v12 = inserted;
        if ( inserted < 0 )
        {
          v39 = 962;
          goto LABEL_83;
        }
      }
      else
      {
        v36 = *(_QWORD *)(a1 + 536);
        if ( v36 && *(_BYTE *)(v36 + 56) && !TabWindowData )
          CLivePreview::_AnimateOpaqueVisuals((CLivePreview *)a1, 0LL);
      }
      inserted = CLivePreview::_FadeInToNormal((CLivePreview *)a1);
      v12 = inserted;
      if ( inserted >= 0 )
      {
        if ( v41 != v40 || a7 )
          CTimelineBase::JumpToFinalValue(*(CTimelineBase **)(a1 + 464));
        *(_BYTE *)(a1 + 280) = 0;
LABEL_89:
        if ( (v12 & 0x80000000) == 0 )
          return v12;
        goto LABEL_90;
      }
      v39 = 968;
      goto LABEL_83;
    }
    v39 = 953;
LABEL_83:
    v18 = inserted;
LABEL_84:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v39);
    goto LABEL_89;
  }
LABEL_90:
  while ( 1 )
  {
    v37 = CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)a1);
    v12 = v37;
    if ( v37 >= 0 )
      break;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x3DFu);
  }
  CLivePreview::_ClearAnimatedVisuals((CLivePreview *)a1);
  v38 = *(CBaseObject **)(a1 + 536);
  if ( v38 )
  {
    CBaseObject::Release(v38);
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  return v12;
}
