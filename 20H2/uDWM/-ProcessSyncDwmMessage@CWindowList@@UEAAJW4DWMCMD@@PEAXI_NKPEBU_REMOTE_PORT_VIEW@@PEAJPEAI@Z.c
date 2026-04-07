/*
 * XREFs of ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800317E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x180004EFC (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180005378 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180005434 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180005A90 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x180006508 (-OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180007160 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800080E4 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180009080 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180009708 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18000FC00 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015678 (--0CWindowData@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018360 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x18002A814 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180030230 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003058C (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180031718 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180031E50 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180032120 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x1800321B8 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x180035708 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003E2FC (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180044E24 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180046B3C (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x180086DD4 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18008C604 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x180095D50 (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x1800974A0 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18009752C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180097CCC (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180097EF8 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180098330 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180098404 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180098500 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180098ABC (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x180099138 (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800991E0 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18009931C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180099648 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800998F0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x180099D80 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x18009DF3C (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E03C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800BA214 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800BA284 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800BF000 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CWindowList::ProcessSyncDwmMessage(
        CWindowList *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned int a6,
        struct _REMOTE_PORT_VIEW *a7,
        int *a8,
        unsigned int *a9)
{
  struct _REMOTE_PORT_VIEW *v10; // rdx
  int WindowThumbnailSourceSize; // esi
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct _REMOTE_PORT_VIEW *v17; // rdi
  unsigned int v18; // r12d
  int v19; // eax
  __int64 v20; // rax
  struct IDwmWindow *v21; // rsi
  struct _REMOTE_PORT_VIEW *v22; // rax
  int v23; // esi
  __int64 v24; // rdi
  int v25; // eax
  struct _REMOTE_PORT_VIEW *v26; // rsi
  unsigned int v27; // eax
  LONG v28; // r13d
  LONG v29; // r12d
  bool v30; // zf
  unsigned int v31; // ecx
  int v32; // r13d
  __int64 v33; // rdx
  struct CVisual *v34; // rax
  CBaseObject *v35; // r13
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v39; // edi
  int WindowAttribute; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  HWND v43; // rdi
  HWND v44; // rbx
  volatile signed __int32 *v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  unsigned int v51; // r8d
  CAnimationClockCoordinator *v52; // rcx
  unsigned int v53; // r8d
  CAnimationClockCoordinator *v54; // rcx
  CAnimationClockCoordinator *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rcx
  unsigned int v58; // r8d
  __int64 v59; // r9
  struct _GUID v60; // xmm0
  CAnimationClockCoordinator *v61; // rcx
  int v62; // eax
  HANDLE v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  enum DWM_TAB_WINDOW_REQUIREMENTS *v78; // rdi
  HWND v79; // rbx
  HWND v80; // rdi
  void *v81; // rcx
  CWindowData *v82; // rax
  CWindowData *v83; // rax
  void *v84; // rax
  struct CWindowData *v85; // r8
  int v86; // eax
  float *v87; // rdx
  bool v88; // [rsp+40h] [rbp-C0h]
  unsigned int v89; // [rsp+44h] [rbp-BCh]
  unsigned int v90; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-B0h] BYREF
  struct _REMOTE_PORT_VIEW *v92; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v93; // [rsp+60h] [rbp-A0h] BYREF
  float v94; // [rsp+68h] [rbp-98h] BYREF
  float v95; // [rsp+6Ch] [rbp-94h]
  struct _RTL_CRITICAL_SECTION *v96; // [rsp+70h] [rbp-90h] BYREF
  __int64 v97; // [rsp+78h] [rbp-88h] BYREF
  void *v98; // [rsp+80h] [rbp-80h] BYREF
  __int64 v99; // [rsp+88h] [rbp-78h] BYREF
  __int64 v100; // [rsp+90h] [rbp-70h] BYREF
  __int64 v101; // [rsp+98h] [rbp-68h] BYREF
  __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-48h] BYREF
  struct _GUID v106; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v107; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v108; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v109; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v110; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v111; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v112[64]; // [rsp+120h] [rbp+20h] BYREF

  v10 = a7;
  v92 = a7;
  *a9 = 0;
  WindowThumbnailSourceSize = -2147024872;
  if ( a2 == 1073741848 )
  {
    if ( a4 != 52 )
      goto LABEL_42;
    v15 = *(_QWORD *)(a3 + 4);
    if ( v15 && !(unsigned int)DwmValidateWindow(v15, a6) )
    {
      WindowThumbnailSourceSize = -2147024891;
      goto LABEL_42;
    }
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v16 = *(_QWORD *)(a3 + 4);
    v17 = 0LL;
    v18 = -2;
    v90 = -2;
    v19 = 1;
    if ( !v16 )
      goto LABEL_37;
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
    v21 = (struct IDwmWindow *)v20;
    if ( !v20 )
      goto LABEL_36;
    v22 = (struct _REMOTE_PORT_VIEW *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    if ( v22 )
    {
      v23 = 0;
    }
    else
    {
      v82 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             768LL);
      if ( !v82 || (v83 = CWindowData::CWindowData(v82), (v92 = (struct _REMOTE_PORT_VIEW *)v83) == 0LL) )
      {
        v23 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x882u);
        goto LABEL_218;
      }
      *((_QWORD *)v83 + 3) = v21;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v21)(v21, v83);
      v84 = (void *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v21 + 24LL))(v21);
      v85 = (struct CWindowData *)v92;
      v92[1].ViewBase = v84;
      v86 = CWindowList::SyncWindowData(a1, v21, v85);
      v23 = v86;
      if ( v86 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v86, 0x886u);
LABEL_10:
        if ( v23 >= 0 )
        {
          if ( v17 )
          {
            v24 = *(_QWORD *)&v17[16].Length;
            if ( v24 )
            {
              v88 = 1;
              if ( (*(_BYTE *)(a3 + 24) & 1) == 0 )
              {
                v25 = *(_DWORD *)(a3 + 12);
                if ( v25 != 513 && v25 != 161 )
                  v88 = 0;
              }
              v26 = 0LL;
              v27 = *(_DWORD *)(a3 + 40);
              v93 = *(struct tagPOINT *)(a3 + 16);
              v28 = v93.y - *(_DWORD *)(v24 + 116);
              v29 = v93.x - *(_DWORD *)(v24 + 112);
              v30 = (*(_BYTE *)(v24 + 84) & 2) == 0;
              v89 = v27;
              v92 = 0LL;
              v93.x = v29;
              v93.y = v28;
              if ( !v30 )
              {
                CVisual::GetCurrentTransform((CVisual *)v24, (struct D2DMatrix *)v112);
                if ( !D2DMatrixInverse((struct D2DMatrix *)v112, v87, (const struct D2DMatrix *)v112) )
                {
                  v18 = 0;
                  v90 = 0;
                  goto LABEL_19;
                }
                v94 = (float)v29;
                v95 = (float)v28;
                D3DXVec2TransformCoord(
                  (struct D2DVector2 *)&v94,
                  (const struct D2DVector2 *)&v94,
                  (const struct D2DMatrix *)v112);
                v93.y = (int)v95;
                v93.x = (int)v94;
              }
              CTopLevelWindow::DoHitTest((CTopLevelWindow *)v24, &v93, (struct CVisual **)&v92, &v90);
              v18 = v90;
              v26 = v92;
LABEL_19:
              v31 = v89;
              v32 = 4;
              v33 = 4LL;
              hObject = (HANDLE)4;
              if ( v89 <= 0x15 )
              {
                hObject = (HANDLE)4;
                switch ( v89 )
                {
                  case 8u:
                    v32 = 1;
                    hObject = HANDLE_FLAG_INHERIT;
                    v33 = 1LL;
                    break;
                  case 9u:
                    v33 = 2LL;
                    hObject = HANDLE_FLAG_PROTECT_FROM_CLOSE;
                    v32 = 2;
                    break;
                  case 0x14u:
                    v33 = 3LL;
                    hObject = HANDLE_FLAG_PROTECT_FROM_CLOSE|HANDLE_FLAG_INHERIT;
                    v32 = 3;
                    break;
                  case 0x15u:
                    v32 = 0;
                    v33 = 0LL;
                    hObject = 0LL;
                    break;
                }
              }
              v34 = *(struct CVisual **)(v24 + 744);
              if ( v34 )
              {
                CButton::SetMouseCapture(*(CButton **)(v24 + 744), 0);
                v34 = *(struct CVisual **)(v24 + 744);
                if ( v34 )
                {
                  CBaseObject::Release(*(CBaseObject **)(v24 + 744));
                  v34 = 0LL;
                  *(_QWORD *)(v24 + 744) = 0LL;
                }
                v33 = (__int64)hObject;
                v31 = v89;
              }
              if ( v32 != 4 )
              {
                v45 = *(volatile signed __int32 **)(v24 + 8 * v33 + 488);
                if ( v45 )
                {
                  *(_QWORD *)(v24 + 744) = v45;
                  _InterlockedIncrement(v45 + 2);
                  CButton::SetMouseCapture((CButton *)v45, 1);
                  v34 = *(struct CVisual **)(v24 + 744);
                  v31 = v89;
                  v18 = v90;
                  v26 = v92;
                }
              }
              if ( v34 )
              {
                if ( v31 != v18 )
                  v34 = 0LL;
                CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)v24, v34);
              }
              else
              {
                if ( v26 == (struct _REMOTE_PORT_VIEW *)v24 )
                {
                  v26 = 0LL;
                  v92 = 0LL;
                }
                v35 = *(CBaseObject **)(v24 + 736);
                if ( v26 != (struct _REMOTE_PORT_VIEW *)v35 )
                {
                  *(_QWORD *)(v24 + 736) = v26;
                  if ( v26 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)&v26->ViewSize);
                    v18 = v90;
                  }
                  if ( v35 )
                    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v35 + 120LL))(v35);
                  v36 = *(_QWORD *)(v24 + 736);
                  if ( v36 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 112LL))(v36);
                  if ( v35 )
                    CBaseObject::Release(v35);
                }
              }
              v37 = *(_QWORD *)(v24 + 736);
              if ( v37 )
                (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v37 + 128LL))(v37, v88);
            }
          }
LABEL_36:
          v19 = 1;
LABEL_37:
          *(_DWORD *)(a3 + 44) = v18;
          if ( v18 == -2 )
            v19 = 0;
          *(_DWORD *)(a3 + 48) = v19;
LABEL_40:
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
          *a9 = 52;
LABEL_41:
          WindowThumbnailSourceSize = 0;
          goto LABEL_42;
        }
LABEL_218:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x865u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x16DBu);
        goto LABEL_40;
      }
      v22 = v92;
    }
    v17 = v22;
    goto LABEL_10;
  }
  if ( a2 == 1073741866 )
  {
    if ( a5 )
    {
      if ( a4 > 0x18 )
      {
        v39 = *(_DWORD *)(a3 + 20) + 24;
        if ( *(_DWORD *)(a3 + 20) < 0xFFFFFFE8 && a4 >= v39 && *(_DWORD *)(a3 + 4) )
        {
          WindowAttribute = CWindowList::GetWindowAttribute(a1, (struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
          *a9 = v39;
LABEL_52:
          WindowThumbnailSourceSize = WindowAttribute;
LABEL_53:
          if ( WindowThumbnailSourceSize == -2147467263 )
            return 2147500033LL;
        }
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 0x40000019u:
        if ( a4 != 156 )
          break;
        CWindowList::GetTitleBarInfo(a1, (struct MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *)a3);
        *a9 = 156;
        goto LABEL_41;
      case 0x4000001Eu:
        if ( a4 != 36 )
          break;
        v46 = *(_QWORD *)(a3 + 12);
        if ( v46 && !(unsigned int)DwmValidateWindow(v46, a6) )
          goto LABEL_97;
        WindowAttribute = CWindowList::RegisterThumbnail(a1, a6, (struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *)a3);
        goto LABEL_52;
      case 0x4000001Fu:
        if ( a4 != 57 )
          break;
        WindowAttribute = CWindowList::UpdateThumbnailProperties(
                            a1,
                            a6,
                            (struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *)a3);
        goto LABEL_52;
      case 0x40000020u:
        if ( a4 != 12 )
          break;
        WindowAttribute = CWindowList::UnregisterThumbnail(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL *)a3);
        goto LABEL_52;
      case 0x40000022u:
        if ( a4 != 20 )
          break;
        WindowAttribute = CWindowList::QueryThumbnailSourceSize(
                            a1,
                            a6,
                            (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *)a3);
        *a9 = 20;
        goto LABEL_52;
      case 0x40000023u:
        if ( a4 != 24 )
          break;
        v41 = *(_QWORD *)(a3 + 4);
        if ( v41 && !(unsigned int)DwmValidateWindow(v41, a6) )
          WindowThumbnailSourceSize = -2147024891;
        else
          WindowThumbnailSourceSize = CWindowList::QueryWindowThumbnailSourceSize(
                                        a1,
                                        (struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *)a3);
        *a9 = 24;
        goto LABEL_53;
      case 0x40000028u:
        if ( a4 != 36 )
          break;
        WindowAttribute = CWindowList::SetColorizationParameters(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *)a3);
        goto LABEL_52;
      case 0x40000029u:
        if ( a4 != 36 )
          break;
        CWindowList::GetColorizationParameters(a1, (struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *)a3);
        *a9 = 36;
        goto LABEL_41;
      case 0x40000033u:
        if ( a4 != 20 )
          break;
        WindowAttribute = CWindowList::GetGlobalState(a1, (struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *)a3);
        *a9 = 20;
        goto LABEL_52;
      case 0x40000038u:
        if ( !CDesktopManager::IsLivePreviewAllowed() )
        {
          WindowThumbnailSourceSize = -2147024846;
          break;
        }
        if ( a4 != 48 )
          break;
        WindowAttribute = CWindowList::PostActivateLivePreview(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a3);
        goto LABEL_52;
      case 0x40000039u:
        if ( a4 != 24 )
          break;
        v48 = *(_QWORD *)(a3 + 4);
        if ( !v48 )
          goto LABEL_124;
        if ( !(unsigned int)DwmValidateWindow(v48, a6) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        v10 = v92;
LABEL_124:
        WindowAttribute = CWindowList::SetIconicThumbnail(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *)a3,
                            v10);
        goto LABEL_52;
      case 0x4000003Bu:
        if ( a4 != 16 )
          break;
        WindowAttribute = CWindowList::QueryThumbnailType(
                            a1,
                            a6,
                            (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *)a3);
        *a9 = 16;
        goto LABEL_52;
      case 0x4000003Cu:
        if ( !CDesktopManager::IsLivePreviewAllowed() )
        {
          WindowThumbnailSourceSize = -2147024846;
          break;
        }
        if ( a4 != 32 )
          break;
        v49 = *(_QWORD *)(a3 + 4);
        if ( v49 && !(unsigned int)DwmValidateWindow(v49, a6) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        WindowAttribute = CWindowList::SetIconicLivePreviewBitmap(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *)a3,
                            v92);
        goto LABEL_52;
      case 0x4000003Du:
        if ( a4 != 12 )
          break;
        v42 = *(_QWORD *)(a3 + 4);
        if ( !v42 || (unsigned int)DwmValidateWindow(v42, a6) )
        {
          WindowAttribute = CWindowList::InvalidateIconicBitmaps(
                              a1,
                              a6,
                              (const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *)a3);
          goto LABEL_52;
        }
        WindowThumbnailSourceSize = -2147024891;
        break;
      case 0x40000040u:
        if ( a4 != 32 )
          break;
        WindowAttribute = CContactManager::OnGesture(
                            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
                            (const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *)a3);
        goto LABEL_52;
      case 0x40000041u:
        if ( a4 != 16 )
          break;
        WindowAttribute = CContactManager::OnFlick(
                            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
                            (const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *)a3);
        goto LABEL_52;
      case 0x40000047u:
        if ( a4 != 48 )
          break;
        WindowAttribute = CWindowList::StartTransition(a1, (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)a3);
        *a9 = 48;
        goto LABEL_52;
      case 0x4000004Eu:
        if ( a4 != 8 )
          break;
        WindowAttribute = CWindowList::HandleHardwareExpressionActivation(a1, *(_DWORD *)(a3 + 4));
        goto LABEL_52;
      case 0x40000051u:
        if ( a4 != 52 )
          break;
        WindowAttribute = CWindowList::UpdateSharedVirtualDesktopVisual(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *)a3,
                            a7);
        goto LABEL_52;
      case 0x40000054u:
        if ( a4 != 16 )
          break;
        v47 = *(_QWORD *)(a3 + 4);
        if ( v47 && !(unsigned int)DwmValidateWindow(v47, a6) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        WindowAttribute = CWindowList::SetIconicBitmapBackgroundColor(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR *)a3);
        goto LABEL_52;
      case 0x40000058u:
        if ( a4 != 24 )
          break;
        v51 = *(_DWORD *)(a3 + 20);
        v52 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
        v106 = *(struct _GUID *)(a3 + 4);
        WindowAttribute = CAnimationClockCoordinator::OnCreateAnimationClock(v52, &v106, v51);
        goto LABEL_52;
      case 0x40000059u:
        if ( a4 != 24 )
          break;
        v53 = *(_DWORD *)(a3 + 20);
        v54 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
        v107 = *(struct _GUID *)(a3 + 4);
        WindowAttribute = CAnimationClockCoordinator::OnBeginAnimationClock(v54, &v107, v53);
        goto LABEL_52;
      case 0x4000005Au:
        if ( a4 != 20 )
          break;
        v55 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
        v108 = *(struct _GUID *)(a3 + 4);
        WindowAttribute = CAnimationClockCoordinator::OnEndAnimationClock(v55, &v108);
        goto LABEL_52;
      case 0x4000005Bu:
        if ( a4 != 32 )
          break;
        v56 = *(unsigned int *)(a3 + 20);
        v57 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
        v109 = *(_OWORD *)(a3 + 4);
        WindowAttribute = CAnimationClockCoordinator::OnGetAnimationClockTime(v57, &v109, v56, a3 + 24);
        *a9 = 32;
        goto LABEL_52;
      case 0x4000005Cu:
        if ( a4 != 32 )
          break;
        v58 = *(_DWORD *)(a3 + 20);
        v59 = 0LL;
        v30 = *(_QWORD *)(a3 + 24) == 0LL;
        v110 = *(struct _GUID *)(a3 + 4);
        if ( !v30 )
          v59 = a3 + 24;
        WindowAttribute = CAnimationClockCoordinator::OnSetAnimationClockTime(
                            *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 25),
                            &v110,
                            v58,
                            v59);
        goto LABEL_52;
      case 0x4000005Du:
        if ( a4 != 28 )
          break;
        v60 = *(struct _GUID *)(a3 + 4);
        hObject = 0LL;
        v61 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
        v111 = v60;
        WindowThumbnailSourceSize = CAnimationClockCoordinator::OnGetAnimationClockToken(v61, &v111, &hObject);
        if ( WindowThumbnailSourceSize < 0 )
          goto LABEL_160;
        v62 = NtDCompositionDuplicateHandleToProcess(hObject, a6, &v97);
        WindowThumbnailSourceSize = v62 | 0x10000000;
        if ( v62 >= 0 )
          *(_QWORD *)(a3 + 20) = v97;
        v63 = hObject;
LABEL_159:
        CloseHandle(v63);
LABEL_160:
        *a9 = 28;
        goto LABEL_53;
      case 0x4000005Eu:
        if ( a4 != 28 )
          break;
        WindowThumbnailSourceSize = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                      *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 25),
                                      (const struct _GUID *)(a3 + 4),
                                      a6,
                                      &v98);
        *(_QWORD *)(a3 + 20) = v98;
        *a9 = 28;
        goto LABEL_53;
      case 0x40000064u:
        if ( a4 != 76 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x3FFu);
          return 0LL;
        }
        v96 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                       *(_QWORD *)(a3 + 56));
        WindowThumbnailSourceSize = CMagnifierControl::OnMagnifierSyncApiMessage(MagnifierControlForDesktop, a2, a3, a5);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v96);
        goto LABEL_53;
      case 0x4000006Fu:
        if ( a4 != 64 )
          break;
        WindowAttribute = CWindowList::TransitionBitmap(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *)a3,
                            a7);
        goto LABEL_52;
      case 0x40000072u:
        if ( a4 != 28 )
          break;
        WindowAttribute = CWindowList::UpdateAccentBlurRect(
                            a1,
                            (const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *)a3);
        goto LABEL_52;
      case 0x40000073u:
        if ( a4 != 20 )
          break;
        WindowAttribute = CDesktopManager::UpdateSDRToHDRBoost(
                            CDesktopManager::s_pDesktopManagerInstance,
                            *(HMONITOR *)(a3 + 4),
                            *(double *)(a3 + 12));
        *a9 = 20;
        goto LABEL_52;
      case 0x40000075u:
        if ( a4 != 16 )
          break;
        v78 = (enum DWM_TAB_WINDOW_REQUIREMENTS *)(a3 + 12);
        v79 = *(HWND *)(a3 + 4);
        *(_DWORD *)(a3 + 12) = 0;
        if ( !v79 || (unsigned int)DwmValidateWindow(v79, a6) )
          WindowThumbnailSourceSize = CWindowList::GetUnmetTabRequirements(a1, v79, v78);
        else
          WindowThumbnailSourceSize = -2147024891;
        *a9 = 16;
        goto LABEL_53;
      case 0x40000076u:
        if ( a4 != 28 )
          break;
        v80 = *(HWND *)(a3 + 4);
        if ( !v80 || (unsigned int)DwmValidateWindow(*(_QWORD *)(a3 + 4), a6) )
          WindowThumbnailSourceSize = CWindowList::AddProjectedShadowCaster(
                                        a1,
                                        v80,
                                        *(void **)(a3 + 12),
                                        *(void **)(a3 + 20));
        else
          WindowThumbnailSourceSize = -2147024891;
        v81 = *(void **)(a3 + 12);
        if ( v81 )
          CloseHandle(v81);
        v63 = *(HANDLE *)(a3 + 20);
        if ( v63 )
          goto LABEL_159;
        goto LABEL_160;
      case 0x40000078u:
        if ( a4 != 36 )
          break;
        *a9 = 36;
        return 2147500033LL;
      case 0x40000079u:
        if ( a4 != 28 )
          break;
        if ( a6 != *(_DWORD *)(a3 + 24) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        v69 = *(_QWORD *)(a3 + 12);
        v70 = *(_QWORD *)(a3 + 4);
        v71 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
        v101 = *(_QWORD *)(a3 + 20);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v71 + 8LL))(
                            v71,
                            v70,
                            v69,
                            &v101);
        goto LABEL_52;
      case 0x4000007Au:
        if ( a4 != 28 )
          break;
        if ( a6 != *(_DWORD *)(a3 + 24) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        v66 = *(_QWORD *)(a3 + 12);
        v67 = *(_QWORD *)(a3 + 4);
        v68 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
        v100 = *(_QWORD *)(a3 + 20);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v68 + 32LL))(
                            v68,
                            v67,
                            v66,
                            &v100);
        goto LABEL_52;
      case 0x4000007Bu:
        if ( a4 != 20 )
          break;
        if ( a6 != *(_DWORD *)(a3 + 16) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        v64 = *(_QWORD *)(a3 + 4);
        v65 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
        v99 = *(_QWORD *)(a3 + 12);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v65 + 16LL))(
                            v65,
                            v64,
                            &v99);
        goto LABEL_52;
      case 0x4000007Cu:
        if ( a4 != 12 )
          break;
        if ( a6 != *(_DWORD *)(a3 + 8) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        v72 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
        v102 = *(_QWORD *)(a3 + 4);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 24LL))(v72, &v102);
        goto LABEL_52;
      case 0x4000007Du:
        if ( a4 != 12 )
          break;
        if ( a6 != *(_DWORD *)(a3 + 8) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        v73 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
        v103 = *(_QWORD *)(a3 + 4);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v73 + 40LL))(v73, &v103);
        goto LABEL_52;
      case 0x4000007Eu:
        if ( a4 != 28 )
          break;
        if ( a6 != *(_DWORD *)(a3 + 24) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        v74 = *(_QWORD *)(a3 + 12);
        v75 = *(_QWORD *)(a3 + 4);
        v76 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
        v104 = *(_QWORD *)(a3 + 20);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v76 + 96LL))(
                            v76,
                            v75,
                            v74,
                            &v104);
        goto LABEL_52;
      case 0x4000007Fu:
        if ( a4 != 12 )
          break;
        if ( a6 != *(_DWORD *)(a3 + 8) )
        {
          WindowThumbnailSourceSize = -2147024891;
          break;
        }
        v77 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
        v105 = *(_QWORD *)(a3 + 4);
        WindowAttribute = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v77 + 104LL))(v77, &v105);
        goto LABEL_52;
      case 0x40000080u:
        if ( a4 != 20 )
          break;
        v43 = *(HWND *)(a3 + 4);
        v44 = *(HWND *)(a3 + 12);
        if ( (unsigned int)DwmValidateWindow(v43, a6) && (!v44 || (unsigned int)DwmValidateWindow(v44, a6)) )
        {
          WindowAttribute = CWindowList::OnProxyWindowUpdate(a1, v43, v44);
          goto LABEL_52;
        }
LABEL_97:
        WindowThumbnailSourceSize = -2147024891;
        break;
      default:
        return 2147500033LL;
    }
  }
LABEL_42:
  if ( a8 )
    *a8 = WindowThumbnailSourceSize;
  return 0LL;
}
