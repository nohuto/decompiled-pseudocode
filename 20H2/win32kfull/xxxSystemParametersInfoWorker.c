/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C002F978
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C002F960 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C000ACA4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     SetKeyboardRate @ 0x1C000C75C (SetKeyboardRate.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00122C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0022F08 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     CreateBitmapStrip @ 0x1C00241D0 (CreateBitmapStrip.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C0027970 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     UpdateDesktopThresholds @ 0x1C00279D0 (UpdateDesktopThresholds.c)
 *     bSetDevDragWidth @ 0x1C0027E44 (bSetDevDragWidth.c)
 *     GetKbdLangSwitch @ 0x1C0027E98 (GetKbdLangSwitch.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0027F24 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     GetEasTimeout @ 0x1C0028294 (GetEasTimeout.c)
 *     GreSetFontEnumeration @ 0x1C0029414 (GreSetFontEnumeration.c)
 *     ClearKeyboardStates @ 0x1C002ABC4 (ClearKeyboardStates.c)
 *     SetMouseTrails @ 0x1C002AC88 (SetMouseTrails.c)
 *     SetPointer @ 0x1C002B0A0 (SetPointer.c)
 *     CheckWinstaAttributeAccess @ 0x1C002F4F0 (CheckWinstaAttributeAccess.c)
 *     ReadPointerDeviceSettingsFull @ 0x1C00330A4 (ReadPointerDeviceSettingsFull.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C003331C (GetProcessDpiServerInfo.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     GetWindowNCMetrics @ 0x1C0033394 (GetWindowNCMetrics.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0040704 (IsWindowUnderActiveLockScreen.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C007A444 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C007B2C8 (xxxUpdateSystemIconsFromRegistry.c)
 *     SetDesktopPattern @ 0x1C007BC2C (SetDesktopPattern.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0094684 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00BF158 (PostShellHookMessagesEx.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxDesktopRecalc @ 0x1C01066F8 (xxxDesktopRecalc.c)
 *     _SetDoubleClickTime @ 0x1C011C9B0 (_SetDoubleClickTime.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C0124A84 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0124E9C (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C01251F8 (LoadWallpaperFilenameFromRegistry.c)
 *     xxxSetIMEShowStatus @ 0x1C012C3A4 (xxxSetIMEShowStatus.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C012CC90 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C012D31C (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C015AF90 (-IsWDAGContainer@@YAHXZ.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C01D5E90 (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6658 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D6898 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D6998 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D6A98 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D6DD8 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01D7090 (EditionxxxBroadcastSPIChange.c)
 *     UpdateWinIniInt @ 0x1C01D73B0 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01D7544 (xxxMetricsRecalc.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01E9B40 (-_SwapMouseButton@@YAHH@Z.c)
 *     GetUserHandedness @ 0x1C01EE2D0 (GetUserHandedness.c)
 *     WritePointerDeviceSettingsFull @ 0x1C020980C (WritePointerDeviceSettingsFull.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C0224C88 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C0224FBC (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C022503C (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C02250BC (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C0251AD8 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C0252968 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C025D40C (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C0274898 (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, __int64 a2, void *a3, __int16 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // r9
  int updated; // r15d
  int v8; // r13d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r10d
  unsigned int v20; // ebx
  unsigned int v21; // edi
  int v22; // eax
  int SystemArgument1_high; // ecx
  unsigned int v25; // ebx
  struct _UNICODE_STRING *v26; // rax
  struct _UNICODE_STRING *v27; // rdi
  __int64 ProcessDpiServerInfo; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // r12d
  unsigned __int8 v37; // al
  void *v38; // rcx
  __int64 DpcData_high; // rcx
  int v40; // ecx
  unsigned int DpiForSystem; // eax
  __int64 v42; // rcx
  int UserHandedness; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // r13d
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  unsigned int v53; // ebx
  unsigned int v54; // r13d
  __int64 v55; // rax
  __int64 v56; // rax
  struct tagWND *v57; // rcx
  __int64 v58; // rbx
  int v59; // ebx
  int v60; // eax
  int v61; // eax
  int v62; // edx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned int v66; // r13d
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  unsigned int v72; // ebx
  unsigned int v73; // r13d
  __int64 DPIMetrics; // rax
  int v75; // eax
  struct _UNICODE_STRING *v76; // rdi
  int v77; // ebx
  _DWORD *v78; // r9
  struct tagMOUSEKEYS *v79; // rbx
  int v80; // r8d
  unsigned int v81; // r8d
  struct _UNICODE_STRING *v82; // rdi
  unsigned int v83; // r9d
  char *v84; // r8
  int v85; // ecx
  int v86; // edx
  __int64 v87; // rax
  _OWORD *MonitorWorkRect; // rax
  __int64 v89; // rax
  __int128 *v90; // r14
  __int64 v91; // r14
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rbx
  unsigned int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 DispInfo; // rax
  _DWORD *v99; // rbx
  unsigned int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  unsigned int v103; // eax
  const wchar_t *v104; // r9
  const wchar_t *v105; // r9
  _QWORD *v106; // r8
  _OWORD *v107; // rax
  unsigned __int16 *v108; // rcx
  struct tagSOUNDSENTRYW *v109; // rbx
  int v110; // r8d
  unsigned int v111; // eax
  int v112; // r8d
  struct _UNICODE_STRING *v113; // rdi
  char *v114; // rcx
  _DWORD *v115; // rdx
  unsigned int v116; // ebx
  unsigned int v117; // ecx
  __int64 v118; // rax
  int v119; // edx
  bool v120; // zf
  __int64 v121; // rax
  __int64 v122; // rdi
  const wchar_t *v123; // rbx
  const wchar_t *v124; // r9
  int v125; // r15d
  unsigned int i; // ebx
  int *v127; // rax
  unsigned int *v128; // rax
  unsigned int v129; // ebx
  unsigned int v130; // ecx
  unsigned int PointerDeviceSettingsFull; // eax
  unsigned int v132; // ecx
  __int64 v133; // rax
  __int128 *v134; // rdi
  unsigned int v135; // eax
  __int64 v136; // rax
  int v137; // ecx
  InteractiveControlManager *v138; // rax
  InteractiveControlManager *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  _DWORD *v142; // rcx
  int v143; // edi
  int v144; // r8d
  int v145; // ecx
  bool v146; // zf
  int v147; // ecx
  int *v148; // rax
  int v149; // ecx
  __int64 v150; // rcx
  int v151; // eax
  unsigned int ProfileValue; // eax
  unsigned int v153; // edi
  int v154; // edx
  unsigned __int64 v155; // rcx
  int v156; // eax
  int v157; // eax
  int v158; // edx
  unsigned __int64 v159; // rcx
  int v160; // ebx
  int v161; // ebx
  int v162; // ebx
  int v163; // ebx
  __int64 v164; // r8
  int v165; // ecx
  unsigned int v166; // edx
  __int64 v167; // rax
  struct tagWND *v168; // rcx
  void *v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  unsigned int v172; // r12d
  int v173; // ebx
  void *v174; // rax
  _BYTE *v175; // rax
  int v176; // ecx
  BOOL v177; // edx
  unsigned int v178; // [rsp+40h] [rbp-478h]
  int v179; // [rsp+44h] [rbp-474h]
  void *Src; // [rsp+48h] [rbp-470h] BYREF
  int v181; // [rsp+50h] [rbp-468h] BYREF
  int v182; // [rsp+54h] [rbp-464h] BYREF
  unsigned int v183; // [rsp+58h] [rbp-460h]
  __int64 v184; // [rsp+60h] [rbp-458h] BYREF
  __int64 v185; // [rsp+68h] [rbp-450h] BYREF
  __int128 v186; // [rsp+70h] [rbp-448h] BYREF
  __int64 v187; // [rsp+80h] [rbp-438h]
  __int64 v188; // [rsp+88h] [rbp-430h] BYREF
  _DWORD v189[4]; // [rsp+90h] [rbp-428h] BYREF
  __int128 v190; // [rsp+A0h] [rbp-418h]
  __int128 v191; // [rsp+B0h] [rbp-408h] BYREF
  __int64 v192; // [rsp+C0h] [rbp-3F8h]
  __int128 v193; // [rsp+D0h] [rbp-3E8h] BYREF
  char v194[16]; // [rsp+E0h] [rbp-3D8h] BYREF
  char v195[16]; // [rsp+F0h] [rbp-3C8h] BYREF
  char v196[16]; // [rsp+100h] [rbp-3B8h] BYREF
  char v197[16]; // [rsp+110h] [rbp-3A8h] BYREF
  char v198[16]; // [rsp+120h] [rbp-398h] BYREF
  __int128 v199; // [rsp+130h] [rbp-388h] BYREF
  __int128 v200; // [rsp+140h] [rbp-378h] BYREF
  __int128 v201; // [rsp+150h] [rbp-368h] BYREF
  __int128 v202; // [rsp+160h] [rbp-358h] BYREF
  __int128 v203; // [rsp+170h] [rbp-348h] BYREF
  __int128 v204; // [rsp+180h] [rbp-338h]
  __int128 v205; // [rsp+190h] [rbp-328h] BYREF
  int v206; // [rsp+1A0h] [rbp-318h]
  unsigned int v207; // [rsp+1A4h] [rbp-314h]
  __int128 v208; // [rsp+1A8h] [rbp-310h]
  unsigned __int16 v209[40]; // [rsp+1C0h] [rbp-2F8h] BYREF
  _WORD v210[40]; // [rsp+210h] [rbp-2A8h] BYREF
  _BYTE v211[528]; // [rsp+260h] [rbp-258h] BYREF

  LOWORD(v183) = a4;
  v4 = a2;
  v5 = (unsigned int)a1;
  v178 = a1;
  LODWORD(v188) = a1;
  Src = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  *(_QWORD *)&v199 = CurrentProcessWin32Process;
  updated = 0;
  v181 = 0;
  v8 = 1;
  v9 = v183 & 1;
  v10 = 2LL;
  v179 = v183 & 2;
  LODWORD(v184) = v179;
  v11 = !(v183 & 1);
  v182 = v11;
  v12 = (unsigned __int16)v183 & 0x8000;
  v183 &= 0x8000u;
  v186 = 0LL;
  v187 = 0LL;
  v210[0] = 0;
  if ( (unsigned int)v5 > 0x50 )
  {
    if ( (unsigned int)v5 > 0x52 )
    {
      if ( (unsigned int)v5 <= 0x54 )
        goto LABEL_892;
      if ( (unsigned int)v5 > 0x56 )
      {
        if ( (_DWORD)v5 == 92 || (_DWORD)v5 == 97 )
          goto LABEL_5;
        goto LABEL_11;
      }
    }
    return 1LL;
  }
  if ( (unsigned int)v5 >= 0x4F )
  {
LABEL_892:
    *(_DWORD *)Src = 0;
    return 1LL;
  }
  if ( (unsigned int)v5 <= 0x3F )
  {
    v13 = 0xC002018000001180uLL;
    if ( _bittest64((const __int64 *)&v13, v5) )
      goto LABEL_5;
  }
LABEL_11:
  v15 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
  {
    if ( (unsigned int)v5 <= 0x39 )
    {
      if ( (_DWORD)v5 != 57 )
      {
        v12 = 0x1C0000000uLL;
        switch ( (int)v5 )
        {
          case 2:
          case 4:
          case 6:
          case 11:
          case 15:
          case 17:
          case 19:
          case 20:
          case 21:
          case 23:
          case 26:
          case 28:
          case 29:
          case 30:
          case 32:
          case 33:
          case 34:
          case 36:
          case 37:
          case 42:
          case 44:
          case 46:
          case 47:
          case 51:
          case 53:
          case 55:
            goto LABEL_22;
          case 13:
          case 24:
            if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              LODWORD(v185) = 2;
              goto LABEL_24;
            }
            if ( v4 )
              goto LABEL_36;
            return 1LL;
          default:
            goto LABEL_35;
        }
      }
      goto LABEL_22;
    }
    if ( (unsigned int)v5 > 0x60 )
    {
      if ( (_DWORD)v5 == 99
        || (_DWORD)v5 == 101
        || (_DWORD)v5 == 103
        || (_DWORD)v5 == 107
        || (_DWORD)v5 == 109
        || (_DWORD)v5 == 119
        || (_DWORD)v5 == 161
        || (_DWORD)v5 == 163
        || (_DWORD)v5 == 4135 )
      {
        goto LABEL_22;
      }
    }
    else
    {
      v16 = (unsigned int)(v5 - 59);
      if ( (unsigned int)v16 <= 0x25 )
      {
        v17 = 0x21B0075545LL;
        if ( _bittest64(&v17, v16) )
        {
LABEL_22:
          v18 = 16;
          goto LABEL_23;
        }
      }
    }
LABEL_35:
    if ( (v5 & 0x3000) != 0 && (v5 & 1) != 0 )
    {
LABEL_36:
      LODWORD(v185) = 16;
      goto LABEL_37;
    }
    v18 = 2;
LABEL_23:
    LODWORD(v185) = v18;
    if ( v18 == 2 )
    {
LABEL_24:
      if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 2u) )
      {
        v14 = 5LL;
        goto LABEL_439;
      }
      goto LABEL_38;
    }
LABEL_37:
    if ( !(unsigned int)CheckWinstaAttributeAccess(16LL, 2LL, v12) )
      return 0LL;
LABEL_38:
    v10 = 2LL;
    v19 = 10;
    v12 = v183;
    CurrentProcessWin32Process = v199;
    if ( (_DWORD)v185 != 2 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v19 = 10;
LABEL_42:
  v182 = 1;
  v11 = 1;
LABEL_43:
  if ( (unsigned int)v5 > 0x1026 )
  {
    if ( (_DWORD)v5 == 4135 )
    {
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
      {
        v9 = 0;
        v11 = 0;
      }
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, v4 != 0);
        v11 = updated;
      }
      if ( v11 )
        gbBlockSendInputResets = v4 != 0;
      goto LABEL_68;
    }
    if ( (_DWORD)v5 == 8228 )
    {
      UserHandedness = GetUserHandedness(v15, 2LL, v12, CurrentProcessWin32Process);
      goto LABEL_113;
    }
    if ( (_DWORD)v5 != 8229 )
      goto LABEL_771;
    v4 = 0;
    if ( (unsigned int)RIMIsDefaultUILanguageRTL(v15, 2LL, v12, CurrentProcessWin32Process) )
      LOBYTE(v4) = (_DWORD)Src == 0;
    else
      LOBYTE(v4) = (_DWORD)Src != 0;
    goto LABEL_880;
  }
  if ( (_DWORD)v5 == 4134 )
  {
    v120 = gbBlockSendInputResets == 0;
    goto LABEL_513;
  }
  if ( (unsigned int)v5 <= 0x64 )
  {
    if ( (_DWORD)v5 == 100 )
    {
      SystemArgument1_high = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      goto LABEL_75;
    }
    if ( (unsigned int)v5 <= 0x2B )
    {
      if ( (_DWORD)v5 == 43 )
      {
        v78 = Src;
        *(_DWORD *)Src = 20;
        v78[1] = *(_DWORD *)(gpsi + 2124LL) - 6;
        v78[2] = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
        v78[3] = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
        v78[4] = *(_DWORD *)(gpsi + 2120LL);
        goto LABEL_68;
      }
      if ( (unsigned int)v5 <= 0x18 )
      {
        if ( (_DWORD)v5 == 24 )
        {
          if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
          {
            if ( v4 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v15, 2LL, v12, CurrentProcessWin32Process) & 0xF) != 0 )
              {
                v67 = PsGetCurrentProcessWin32Process(v64, v63, v65);
                v66 = EngMulDiv(v4, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v67 + 284));
                v71 = PsGetCurrentProcessWin32Process(v69, v68, v70);
                v4 = EngMulDiv(v66, 96, *(unsigned __int16 *)(v71 + 284));
              }
              else
              {
                v66 = EngMulDiv(v4, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v72 = *(_DWORD *)(gpsi + 2308LL);
              if ( v66 > v72 )
                v72 = v66;
              v73 = *(_DWORD *)(gpsi + 2428LL);
              if ( v4 > v73 )
                v73 = v4;
              if ( v9 )
              {
                updated = SetWindowMetricInt(0LL, 0x41u, v72);
                v11 = updated;
              }
              if ( v11 )
              {
                SetDpiDepSysMet(19LL);
                *(_DWORD *)(gpsi + 2480LL) = v73;
              }
            }
            goto LABEL_68;
          }
          DpiForSystem = GetDpiForSystem(v15, 2LL);
          v42 = 19LL;
LABEL_112:
          UserHandedness = GetDpiDependentMetric(v42, DpiForSystem);
LABEL_113:
          *(_DWORD *)Src = UserHandedness;
          goto LABEL_68;
        }
        if ( (unsigned int)v5 <= 0xD )
        {
          if ( (_DWORD)v5 != 13 )
          {
            if ( (_DWORD)v5 != 1 )
            {
              if ( (_DWORD)v5 == 2 )
              {
                if ( v9 )
                {
                  RtlLoadStringOrError(105 - (unsigned int)(v4 != 0), v209, 10LL);
                  updated = FastUpdateWinIni(0LL, 11LL, 9LL, v209);
                  v11 = updated;
                }
                if ( v11 )
                {
                  v120 = v4 == 0;
                  v21 = v178;
                  if ( v120 )
                    gdwPUDFlags &= ~0x80000u;
                  else
                    gdwPUDFlags |= 0x80000u;
                  goto LABEL_69;
                }
                goto LABEL_68;
              }
              if ( (_DWORD)v5 == 3 )
              {
                *(_DWORD *)Src = WPP_MAIN_CB.ActiveThreadCount;
                DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
                *((_DWORD *)Src + 1) = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
                *((_DWORD *)Src + 2) = (unsigned __int8)MouseAccelerationEnabled(
                                                          DpcData_high,
                                                          2LL,
                                                          v12,
                                                          CurrentProcessWin32Process);
                goto LABEL_68;
              }
              if ( (_DWORD)v5 != 4 )
              {
                if ( (_DWORD)v5 == 5 )
                {
                  SystemArgument1_high = *(_DWORD *)(GetDPIServerInfo(13LL) + 4);
                  goto LABEL_75;
                }
                if ( (_DWORD)v5 != 6 )
                {
                  if ( (_DWORD)v5 != 10 )
                  {
                    if ( (_DWORD)v5 == 11 )
                    {
                      v20 = 31;
                      if ( v4 <= 0x1F )
                        v20 = v4;
                      if ( v9 )
                      {
                        updated = UpdateWinIniInt(0LL, 13LL, 13LL, v20);
                        v11 = updated;
                      }
                      if ( v11 )
                      {
                        gnKeyboardSpeed = v20 | gnKeyboardSpeed & 0xFFFFFFE0;
LABEL_67:
                        SetKeyboardRate();
                        goto LABEL_68;
                      }
                      v22 = v179;
LABEL_480:
                      v21 = v178;
                      goto LABEL_70;
                    }
                    goto LABEL_771;
                  }
                  SystemArgument1_high = gnKeyboardSpeed & 0x1F;
LABEL_75:
                  *(_DWORD *)Src = SystemArgument1_high;
                  goto LABEL_68;
                }
                v25 = 1;
                if ( (int)v4 > 1 )
                  v25 = v4;
                if ( v25 >= 0x32 )
                  v25 = 50;
                if ( v25 != (__int64)*(int *)(GetDPIServerInfo(13LL) + 4) )
                {
                  v26 = (struct _UNICODE_STRING *)CreateProfileUserName(&v186);
                  v27 = v26;
                  if ( v9 )
                  {
                    updated = SetWindowMetricInt(v26, 0x88u, v25);
                    v11 = updated;
                  }
                  if ( v11 )
                  {
                    xxxSetAndDrawNCMetrics(v27, v25, 0LL);
                    ProcessDpiServerInfo = GetProcessDpiServerInfo();
                    bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
                  }
LABEL_85:
                  v29 = (__int64)v27;
LABEL_86:
                  FreeProfileUserName(v29, &v186);
                  goto LABEL_68;
                }
LABEL_363:
                v11 = 1;
                goto LABEL_68;
              }
              if ( !v9 )
              {
LABEL_99:
                if ( v11 )
                {
                  v38 = Src;
                  WPP_MAIN_CB.ActiveThreadCount = *(_DWORD *)Src;
                  HIDWORD(WPP_MAIN_CB.Dpc.DpcData) = *((_DWORD *)Src + 1);
                  LOBYTE(v38) = *((_DWORD *)Src + 2) != 0;
                  EnableMouseAcceleration(v38);
                }
                goto LABEL_68;
              }
              v30 = CreateProfileUserName(&v186);
              v183 = UpdateWinIniInt(v30, 12LL, 10LL, *(unsigned int *)Src);
              v31 = UpdateWinIniInt(v30, 12LL, 11LL, *((unsigned int *)Src + 1));
              v36 = UpdateWinIniInt(v30, 12LL, 12LL, *((unsigned int *)Src + 2));
              if ( v183 )
              {
                if ( v31 && v36 )
                {
                  updated = 1;
LABEL_98:
                  v11 = updated;
                  FreeProfileUserName(v30, &v186);
                  goto LABEL_99;
                }
                UpdateWinIniInt(v30, 12LL, 10LL, WPP_MAIN_CB.ActiveThreadCount);
              }
              if ( v31 )
                UpdateWinIniInt(v30, 12LL, 11LL, HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
              if ( v36 )
              {
                v37 = MouseAccelerationEnabled(v33, v32, v34, v35);
                UpdateWinIniInt(v30, 12LL, 12LL, v37);
              }
              goto LABEL_98;
            }
            v40 = gdwPUDFlags >> 19;
LABEL_109:
            SystemArgument1_high = v40 & 1;
            goto LABEL_75;
          }
          if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
          {
            if ( v4 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(13LL, 2LL, v12, CurrentProcessWin32Process) & 0xF) != 0 )
              {
                v48 = PsGetCurrentProcessWin32Process(v45, v44, v46);
                v47 = EngMulDiv(v4, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v48 + 284));
                v52 = PsGetCurrentProcessWin32Process(v50, v49, v51);
                v4 = EngMulDiv(v47, 96, *(unsigned __int16 *)(v52 + 284));
              }
              else
              {
                v47 = EngMulDiv(v4, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v53 = *(_DWORD *)(gpsi + 2304LL);
              if ( v47 > v53 )
                v53 = v47;
              v54 = *(_DWORD *)(gpsi + 2424LL);
              if ( v4 > v54 )
                v54 = v4;
              if ( v9 )
              {
                updated = SetWindowMetricInt(0LL, 0x40u, v53);
                v11 = updated;
              }
              if ( v11 )
              {
                SetDpiDepSysMet(18LL);
                *(_DWORD *)(gpsi + 2476LL) = v54;
              }
            }
            goto LABEL_68;
          }
          DpiForSystem = GetDpiForSystem(13LL, 2LL);
          v42 = 18LL;
          goto LABEL_112;
        }
        if ( (_DWORD)v5 == 14 )
        {
          v62 = (int)abs32(giScreenSaveTimeOutMs) / 1000;
          goto LABEL_216;
        }
        if ( (_DWORD)v5 != 15 )
        {
          if ( (_DWORD)v5 == 16 )
          {
            SystemArgument1_high = giScreenSaveTimeOutMs > 0;
            goto LABEL_75;
          }
          if ( (_DWORD)v5 != 17 )
          {
            if ( (_DWORD)v5 != 20 )
            {
              if ( (_DWORD)v5 != 21 )
              {
                if ( (_DWORD)v5 != 22 )
                {
                  if ( (_DWORD)v5 == 23 )
                  {
                    if ( v9 )
                    {
                      updated = UpdateWinIniInt(0LL, 13LL, 106LL, v4);
                      v11 = updated;
                    }
                    if ( !v11 )
                      goto LABEL_68;
                    gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * v4);
                    goto LABEL_67;
                  }
                  goto LABEL_771;
                }
                SystemArgument1_high = (gnKeyboardSpeed >> 5) & 3;
                goto LABEL_75;
              }
              v184 = (__int64)Src;
              if ( v4 == -1 && Src )
              {
LABEL_5:
                v14 = 87LL;
LABEL_439:
                UserSetLastError(v14);
                return 0LL;
              }
              v27 = (struct _UNICODE_STRING *)CreateProfileUserName(&v186);
              if ( (unsigned int)CheckDesktopPolicy(v27, 2LL) )
              {
                v9 = 0;
                v11 = 0;
              }
              v55 = v184;
              if ( v9 && v184 )
              {
                FastGetProfileStringFromIDW(v27, 4LL, 2LL, &word_1C02E436C, v211, 260, 0);
                updated = FastUpdateWinIni(v27, 4LL, 2LL, v184);
                v11 = updated;
                v55 = v184;
              }
              if ( v11 )
              {
                if ( !(unsigned int)SetDesktopPattern(v27, v55) )
                {
                  if ( v9 && v184 )
                    FastUpdateWinIni(v27, 4LL, 2LL, v211);
                  FreeProfileUserName(v27, &v186);
                  return 0LL;
                }
                xxxSendNotifyMessage(-1LL, 21LL, 0LL, 0LL, 1);
                v56 = *(_QWORD *)(gptiCurrent + 456LL);
                if ( v56 )
                  v57 = *(struct tagWND **)(*(_QWORD *)(v56 + 8) + 24LL);
                else
                  v57 = 0LL;
                xxxInternalInvalidate(v57, (HRGN)1, 0x10485u);
              }
              goto LABEL_85;
            }
            v58 = CreateProfileUserName(&v186);
            if ( (unsigned int)CheckDesktopPolicy(v58, 67LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              if ( v4 == -1 )
              {
                v11 = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v58, 4LL, 67LL, &word_1C02E436C, v211, 260, 8);
                updated = FastUpdateWinIni(v58, 4LL, 67LL, Src);
                v11 = updated;
              }
            }
            if ( v11 )
            {
              if ( (unsigned int)xxxSetDeskWallpaper(v58, Src) )
              {
                xxxInvalidateWallpaperWindow();
              }
              else
              {
                if ( v9 )
                {
                  if ( v4 == -1 )
                    goto LABEL_170;
                  FastUpdateWinIni(v58, 4LL, 67LL, v211);
                }
                v11 = 0;
                updated = 0;
              }
            }
LABEL_170:
            v29 = v58;
            goto LABEL_86;
          }
          if ( v4 - 2 <= 0xFFFFFFFC )
            return 0LL;
          if ( !gdwRITdemonLockState || (_DWORD)v12 )
          {
            gbLockConsoleActive = v4 == -1;
            if ( !gfSwitchInProgress )
            {
              if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
              {
                v9 = 0;
                v11 = 0;
                v182 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 100LL, v4);
                v181 = updated;
                v11 = updated;
                v182 = updated;
              }
              if ( !v11 )
                goto LABEL_68;
              if ( !gbBlockSendInputResets )
              {
                CInputGlobals::UpdateLastInputTime(
                  gpInputGlobals,
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                  7LL);
                updated = v181;
                v11 = v182;
              }
              if ( giScreenSaveTimeOutMs < 0 )
              {
                if ( v4 )
                  goto LABEL_186;
                if ( giScreenSaveTimeOutMs < 0 )
                  goto LABEL_68;
              }
              if ( v4 )
                goto LABEL_68;
LABEL_186:
              giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
              goto LABEL_68;
            }
            return 0LL;
          }
LABEL_762:
          v14 = 329LL;
          goto LABEL_439;
        }
        *(_QWORD *)&v199 = giScreenSaveTimeOutMs;
        if ( gfSwitchInProgress )
          return 0LL;
        if ( gdwRITdemonLockState && !(_DWORD)v12 )
          goto LABEL_762;
        v59 = 1000 * v4;
        v60 = 1000 * GetEasTimeout();
        LODWORD(v185) = v60;
        if ( v60 )
        {
          if ( *(int *)v199 > 0 && v60 < v59 || v59 <= 0 )
          {
            UserSetLastError(1260LL);
            v9 = 0;
            v11 = 0;
            v182 = 0;
          }
        }
        else
        {
          v8 = 0;
        }
        if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL) )
        {
          if ( v8 )
          {
            v183 = 0;
            if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
              goto LABEL_206;
            v61 = 1000 * v183;
            v183 = v61;
            if ( !v61 || v61 >= (int)v185 || *(int *)v199 <= 0 || v61 >= v59 )
              goto LABEL_206;
            UserSetLastError(1260LL);
          }
          v182 = 0;
          v11 = 0;
          v9 = 0;
        }
LABEL_206:
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 99LL, v59 / 0x3E8u);
          v181 = updated;
          v11 = updated;
          v182 = updated;
        }
        if ( v11 )
        {
          if ( !gbBlockSendInputResets )
          {
            CInputGlobals::UpdateLastInputTime(
              gpInputGlobals,
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              7LL);
            updated = v181;
            v11 = v182;
          }
          if ( *(int *)v199 < 0 && !v8 )
            v59 = -1000 * v4;
          *(_DWORD *)v199 = v59;
        }
        goto LABEL_68;
      }
      if ( (unsigned int)v5 <= 0x21 )
      {
        switch ( (_DWORD)v5 )
        {
          case 0x21:
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 5LL, v4);
              v11 = updated;
            }
            if ( v11 )
              _SwapMouseButton(v4 != 0);
            goto LABEL_68;
          case 0x19:
            v40 = gdwPUDFlags >> 21;
            goto LABEL_109;
          case 0x1A:
            if ( v9 )
            {
              updated = SetWindowMetricInt(0LL, 0x42u, v4 != 0);
              v11 = updated;
            }
            if ( v11 )
            {
              if ( v4 )
                gdwPUDFlags |= 0x200000u;
              else
                gdwPUDFlags &= ~0x200000u;
              xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
            }
            goto LABEL_68;
          case 0x1B:
            v62 = *(_DWORD *)(gpsi + 2056LL);
            goto LABEL_216;
        }
        if ( (_DWORD)v5 != 28 )
        {
          if ( (_DWORD)v5 == 29 )
          {
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 97LL, v4);
              v11 = updated;
            }
            if ( v11 )
              *(_DWORD *)(gpsi + 2040LL) = v4;
            goto LABEL_68;
          }
          if ( (_DWORD)v5 == 30 )
          {
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 98LL, v4);
              v11 = updated;
            }
            if ( v11 )
              *(_DWORD *)(gpsi + 2044LL) = v4;
            goto LABEL_68;
          }
          if ( (_DWORD)v5 != 31 )
          {
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 6LL, v4);
              v11 = updated;
            }
            if ( v11 )
              SetDoubleClickTime(v4, v10, v12, CurrentProcessWin32Process);
            goto LABEL_68;
          }
          DPIMetrics = GetDPIMetrics(v15, 2LL, v12, CurrentProcessWin32Process);
          goto LABEL_245;
        }
LABEL_880:
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 3LL, 96LL, v4);
          v11 = updated;
        }
        if ( v11 )
        {
          v176 = *(_DWORD *)(gpsi + 2056LL);
          v177 = v4 != 0;
          *(_DWORD *)(gpsi + 2056LL) = v177;
          TraceLoggingSPISetMenuDropAlignmentEvent(v176, v177);
        }
        goto LABEL_68;
      }
      if ( (_DWORD)v5 != 34 )
      {
        switch ( (_DWORD)v5 )
        {
          case '#':
            *(_DWORD *)Src = 1;
            goto LABEL_68;
          case '$':
LABEL_68:
            v21 = v178;
LABEL_69:
            v22 = v179;
            goto LABEL_70;
          case '%':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 107LL, v4 == 1);
              v11 = updated;
            }
            if ( v11 )
            {
              v120 = v4 == 1;
              v21 = v178;
              if ( v120 )
                gdwPUDFlags |= 0x100000u;
              else
                gdwPUDFlags &= ~0x100000u;
              goto LABEL_69;
            }
            goto LABEL_68;
          case '&':
            v40 = gdwPUDFlags >> 20;
            goto LABEL_109;
          case ')':
            if ( Src )
            {
              GetWindowNCMetrics(Src, 2LL, v12, CurrentProcessWin32Process);
              goto LABEL_68;
            }
            return 0LL;
        }
        if ( (_DWORD)v5 != 42 )
          goto LABEL_771;
        goto LABEL_274;
      }
      if ( Src )
      {
        if ( v4 != 92 )
          return 0LL;
      }
      else if ( v4 )
      {
        return 0LL;
      }
      v76 = (struct _UNICODE_STRING *)CreateProfileUserName(&v186);
      v77 = xxxSetSPIMetrics(v76, 34, (struct tagMINIMIZEDMETRICS *)Src, v9, &v181);
      FreeProfileUserName(v76, &v186);
      if ( v77 )
      {
        updated = v181;
        v21 = v178;
        v22 = v179;
        if ( v9 )
          v11 = v181;
        goto LABEL_70;
      }
      v11 = 0;
LABEL_294:
      updated = v181;
      goto LABEL_68;
    }
    if ( (unsigned int)v5 <= 0x48 )
    {
      if ( (_DWORD)v5 == 72 )
      {
        v115 = Src;
        if ( !Src || v4 != 8 )
          return 0LL;
        *(_DWORD *)Src = 8;
        v115[1] = *((_WORD *)&gdwPUDFlags + 1) & 1;
        goto LABEL_68;
      }
      if ( (unsigned int)v5 <= 0x39 )
      {
        switch ( (_DWORD)v5 )
        {
          case '9':
            if ( v9 )
            {
              RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", v4 == 1);
              updated = FastWriteProfileStringW(0LL, 20LL, L"On", v209);
              v11 = updated;
            }
            if ( v11 )
            {
              if ( v4 == 1 )
                gdwPUDFlags |= 0x8000u;
              else
                gdwPUDFlags &= ~0x8000u;
              SetAccessEnabledFlag();
              *(_DWORD *)(gpsi + 2176LL) = (gdwPUDFlags >> 15) & 1;
            }
            goto LABEL_68;
          case ',':
            goto LABEL_274;
          case '-':
            v99 = Src;
            *(_DWORD *)Src = 108;
            v100 = GetDpiForSystem(v15, 2LL);
            v99[1] = GetDpiDependentMetric(18LL, v100);
            v103 = GetDpiForSystem(v102, v101);
            v99[2] = GetDpiDependentMetric(19LL, v103);
            v99[3] = (gdwPUDFlags >> 21) & 1;
            DPIMetrics = ((__int64 (*)(void))GetDPIMetrics)();
LABEL_245:
            GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 64));
            goto LABEL_68;
          case '.':
LABEL_274:
            v75 = xxxSetSPIMetrics(0LL, v5, (struct tagMINIMIZEDMETRICS *)Src, v9, &v181);
            updated = v181;
            if ( v75 )
            {
              if ( v9 )
                v11 = v181;
            }
            else
            {
              v11 = 0;
            }
            RtlLoadStringOrError(135LL, v210, 40LL);
            goto LABEL_68;
          case '/':
            v199 = 0LL;
            if ( Src )
            {
              if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                return 0LL;
              v89 = MonitorFromRect((struct tagRECT *)Src);
            }
            else
            {
              v89 = *(_QWORD *)(GetDispInfo(v15, 2LL, v12, CurrentProcessWin32Process) + 96);
            }
            v188 = v89;
            v201 = *(_OWORD *)GetMonitorRect(v195, v89);
            v90 = &v201;
            if ( Src )
              v90 = (__int128 *)Src;
            if ( !(unsigned int)IntersectRect(&v199, v90, &v201) || v199 != *v90 )
              goto LABEL_5;
            v208 = *(_OWORD *)GetMonitorWorkRect(v196, v188);
            if ( v208 != v199 )
            {
              v91 = 0LL;
              if ( v4 )
              {
                v91 = SnapshotMonitorRects();
                if ( !v91 )
                  return 0LL;
              }
              if ( (((__int64 (*)(void))W32GetCurrentThreadDpiAwarenessContext)() & 0xF) != 2
                && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL)
                              + 64LL) & 1) != 0 )
              {
                v94 = *(_QWORD *)(v188 + 40);
                v95 = ((__int64 (*)(void))W32GetCurrentThreadDpiAwarenessContext)();
                LogicalToPhysicalDPIRect(v94 + 44, &v199, v95, &v188);
              }
              else
              {
                v96 = v188;
                *(_QWORD *)(*(_QWORD *)(v188 + 40) + 44LL) = v199;
                *(_DWORD *)(*(_QWORD *)(v96 + 40) + 52LL) = DWORD2(v199);
                v97 = *(_QWORD *)(v96 + 40);
                *(_DWORD *)(v97 + 56) = HIDWORD(v199);
              }
              DispInfo = GetDispInfo(v97, v96, v92, v93);
              if ( v188 == *(_QWORD *)(DispInfo + 96) )
                UpdateDesktopThresholds();
              if ( v4 )
              {
                v191 = 0LL;
                v192 = 0LL;
                PushW32ThreadLock(v91, &v191, Win32FreePool);
                xxxDesktopRecalc(*(ShellWindowManagement **)(gptiCurrent + 456LL));
                PopAndFreeAlwaysW32ThreadLock(&v191);
              }
              updated = 1;
            }
            goto LABEL_363;
        }
        if ( (_DWORD)v5 != 48 )
        {
          if ( (_DWORD)v5 == 54 )
          {
            if ( v4 && v4 != 28 )
              return 0LL;
            v84 = (char *)Src;
            if ( !Src || *(_DWORD *)Src != 28 )
              return 0LL;
            *(_OWORD *)((char *)Src + 4) = *(_OWORD *)((char *)&gMouseKeys + 4);
            *(struct tagMOUSEKEYS **)(v84 + 20) = *(struct tagMOUSEKEYS *const *)((char *)&gMouseKeys + 20);
            v85 = *((_DWORD *)v84 + 1) & 0x4CFFFFFF;
            *((_DWORD *)v84 + 1) = v85;
            if ( gbMKMouseMode )
            {
              v85 |= 0x80000000;
              *((_DWORD *)v84 + 1) = v85;
            }
            v86 = v85 | ((gwMKButtonState & 3) << 24);
            *((_DWORD *)v84 + 1) = v86;
            *((_DWORD *)v84 + 1) = v86 | ((gwMKCurrentButton & 3) << 28);
            goto LABEL_68;
          }
          if ( (_DWORD)v5 == 55 )
          {
            v79 = (struct tagMOUSEKEYS *)Src;
            if ( v4 && v4 != 28 )
              return 0LL;
            if ( !Src )
              return 0LL;
            if ( *(_DWORD *)Src != 28 )
              return 0LL;
            v80 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
            *((_DWORD *)Src + 1) = v80;
            if ( (unsigned __int8)v80 != v80 )
              return 0LL;
            v81 = (HIDWORD(gMouseKeys) & 2) != 0 ? v80 | 2 : v80 & 0xFFFFFFFD;
            *((_DWORD *)v79 + 1) = v81;
            if ( (unsigned int)(*((_DWORD *)v79 + 2) - 10) > 0x15E
              || (unsigned int)(*((_DWORD *)v79 + 3) - 1000) > 0xFA0 )
            {
              return 0LL;
            }
            if ( v9 )
            {
              v82 = (struct _UNICODE_STRING *)CreateProfileUserName(&v186);
              updated = SetMouseKeys(v82, v79);
              v11 = updated;
              if ( !updated )
                SetMouseKeys(v82, gMouseKeys);
              FreeProfileUserName(v82, &v186);
            }
            if ( v11 )
            {
              memmove(gMouseKeys, v79, *(unsigned int *)v79);
              LODWORD(gMouseKeys) = 28;
              CalculateMouseTable();
              v83 = HIDWORD(gMouseKeys);
              if ( (v83 & 1) != 0 )
              {
                gbMKMouseMode = ((v83 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
                MKShowMouseCursor();
              }
              else
              {
                MKHideMouseCursor();
              }
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11, 3uLL, 0LL, 10);
              PostShellHookMessagesEx(0xBuLL, 3LL, 0LL);
            }
            goto LABEL_68;
          }
          if ( (_DWORD)v5 != 56 )
            goto LABEL_771;
          v40 = gdwPUDFlags >> 15;
          goto LABEL_109;
        }
        v87 = GetDispInfo(v15, 2LL, v12, CurrentProcessWin32Process);
        MonitorWorkRect = (_OWORD *)GetMonitorWorkRect(v194, *(_QWORD *)(v87 + 96));
LABEL_340:
        *(_OWORD *)Src = *MonitorWorkRect;
        goto LABEL_68;
      }
      switch ( (_DWORD)v5 )
      {
        case '@':
          if ( v4 && v4 != 56 )
            return 0LL;
          v114 = (char *)Src;
          if ( !Src || *(_DWORD *)Src != 56 )
            return 0LL;
          *(_OWORD *)((char *)Src + 4) = *(_OWORD *)((char *)&gSoundSentry + 4);
          *(_OWORD *)(v114 + 20) = *(_OWORD *)((char *)&gSoundSentry + 20);
          *(_OWORD *)(v114 + 36) = *(_OWORD *)((char *)&gSoundSentry + 36);
          *((_DWORD *)v114 + 13) = *((_DWORD *)&gSoundSentry + 13);
          goto LABEL_68;
        case 'A':
          v109 = (struct tagSOUNDSENTRYW *)Src;
          if ( v4 && v4 != 56 )
            return 0LL;
          if ( !Src )
            return 0LL;
          if ( *(_DWORD *)Src != 56 )
            return 0LL;
          v110 = *((_DWORD *)Src + 1);
          if ( (v110 & 7) != v110 || *((_DWORD *)Src + 8) > 3u || *((_DWORD *)Src + 2) || *((_DWORD *)Src + 5) )
            return 0LL;
          v111 = v110 & 0xFFFFFFFD;
          v112 = v110 | 2;
          if ( (HIDWORD(gSoundSentry) & 2) == 0 )
            v112 = v111;
          *((_DWORD *)Src + 1) = v112;
          if ( v9 )
          {
            v113 = (struct _UNICODE_STRING *)CreateProfileUserName(&v186);
            updated = SetSoundSentry(v113, v109);
            v11 = updated;
            if ( !updated )
              SetSoundSentry(v113, gSoundSentry);
            FreeProfileUserName(v113, &v186);
          }
          if ( v11 )
          {
            memmove(gSoundSentry, v109, *(unsigned int *)v109);
            LODWORD(gSoundSentry) = 56;
            SetAccessEnabledFlag();
          }
          goto LABEL_68;
        case 'B':
          v106 = Src;
          *((_DWORD *)Src + 1) = gHighContrast[1];
          v107 = (_OWORD *)v106[1];
          v108 = gHighContrastDefaultScheme;
          do
          {
            *v107 = *(_OWORD *)v108;
            v107[1] = *((_OWORD *)v108 + 1);
            v107[2] = *((_OWORD *)v108 + 2);
            v107[3] = *((_OWORD *)v108 + 3);
            v107[4] = *((_OWORD *)v108 + 4);
            v107[5] = *((_OWORD *)v108 + 5);
            v107[6] = *((_OWORD *)v108 + 6);
            v107 += 8;
            *(v107 - 1) = *((_OWORD *)v108 + 7);
            v108 += 64;
            --v10;
          }
          while ( v10 );
          v21 = v178;
          v22 = v179;
          goto LABEL_70;
      }
      if ( (_DWORD)v5 != 67 )
      {
        switch ( (_DWORD)v5 )
        {
          case 'D':
            v40 = gdwPUDFlags >> 17;
            break;
          case 'E':
            if ( v9 )
            {
              v105 = L"1";
              if ( !v4 )
                v105 = L"0";
              updated = FastWriteProfileStringW(0LL, 27LL, L"On", v105);
              v11 = updated;
            }
            if ( v11 )
            {
              v120 = v4 == 0;
              v21 = v178;
              if ( v120 )
                gdwPUDFlags &= ~0x20000u;
              else
                gdwPUDFlags |= 0x20000u;
              goto LABEL_69;
            }
            goto LABEL_68;
          case 'F':
            v40 = gdwPUDFlags >> 18;
            break;
          case 'G':
            if ( v9 )
            {
              v104 = L"1";
              if ( !v4 )
                v104 = L"0";
              updated = FastWriteProfileStringW(0LL, 28LL, L"On", v104);
              v11 = updated;
            }
            if ( v11 )
            {
              v120 = v4 == 0;
              v21 = v178;
              if ( v120 )
                gdwPUDFlags &= ~0x40000u;
              else
                gdwPUDFlags |= 0x40000u;
              goto LABEL_69;
            }
            goto LABEL_68;
          default:
            goto LABEL_771;
        }
        goto LABEL_109;
      }
      updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v9, &v182);
LABEL_399:
      v11 = v182;
      goto LABEL_68;
    }
    if ( (unsigned int)v5 <= 0x5A )
    {
      if ( (_DWORD)v5 == 90 )
      {
        v118 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src, v12, CurrentProcessWin32Process);
        if ( !v118 )
          return 0LL;
        if ( v11 )
        {
          *(_QWORD *)&v190 = gspklBaseLayout;
          *((_QWORD *)&v190 + 1) = v118;
          v193 = v190;
          HMAssignmentLock(&v193);
        }
        goto LABEL_68;
      }
      if ( (_DWORD)v5 == 73 )
        goto LABEL_274;
      if ( (_DWORD)v5 != 74 )
      {
        switch ( (_DWORD)v5 )
        {
          case 'K':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            v116 = v4 != 0 ? 2 : 0;
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 200LL, v116);
              v11 = updated;
            }
            if ( v11 )
              GreSetFontEnumeration(v116 | 4);
            goto LABEL_68;
          case 'L':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 198LL, v4);
              v11 = updated;
            }
            if ( v11 )
              *(_DWORD *)(gpsi + 2168LL) = v4;
            goto LABEL_68;
          case 'M':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 199LL, v4);
              v11 = updated;
            }
            if ( v11 )
              *(_DWORD *)(gpsi + 2172LL) = v4;
            goto LABEL_68;
          case 'W':
            v58 = CreateProfileUserName(&v186);
            xxxUpdateSystemCursorsFromRegistry(v58, 2LL);
            break;
          case 'X':
            v58 = CreateProfileUserName(&v186);
            xxxUpdateSystemIconsFromRegistry(v58);
            break;
          case 'Y':
            if ( !gspklBaseLayout )
            {
              v14 = 21LL;
              goto LABEL_439;
            }
            *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
            goto LABEL_68;
          default:
            goto LABEL_771;
        }
        goto LABEL_170;
      }
      v117 = gulFontInformation;
LABEL_463:
      v40 = v117 >> 1;
      goto LABEL_109;
    }
    switch ( (_DWORD)v5 )
    {
      case '[':
        return GetKbdLangSwitch(0LL);
      case ']':
        if ( v9 )
        {
          RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", v4);
          updated = FastUpdateWinIni(0LL, 12LL, 613LL, v209);
          v11 = updated;
        }
        if ( v11 )
          SetMouseTrails(v4);
        goto LABEL_68;
      case '^':
        SystemArgument1_high = LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) + 1;
        if ( !LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
          SystemArgument1_high = 0;
        goto LABEL_75;
    }
    if ( (_DWORD)v5 != 95 )
    {
      if ( (_DWORD)v5 == 96 )
      {
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 7LL, v4 != 0);
          v11 = updated;
        }
        if ( v11 )
        {
          v22 = v179;
          v120 = v4 == 0;
          v21 = v178;
          if ( v120 )
            *(_DWORD *)(gpsi + 7004LL) &= ~2u;
          else
            *(_DWORD *)(gpsi + 7004LL) |= 2u;
          goto LABEL_70;
        }
        goto LABEL_68;
      }
      if ( (_DWORD)v5 != 98 )
      {
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 91LL, v4);
          v11 = updated;
        }
        v22 = v179;
        if ( v11 )
          LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = v4;
        goto LABEL_480;
      }
      SystemArgument1_high = (int)WPP_MAIN_CB.Dpc.SystemArgument2;
      goto LABEL_75;
    }
    v119 = *(_DWORD *)(gpsi + 7004LL) >> 1;
LABEL_489:
    v62 = v119 & 1;
    goto LABEL_216;
  }
  if ( (unsigned int)v5 > 0x89 )
  {
    if ( (unsigned int)v5 <= 0x9C )
    {
      if ( (_DWORD)v5 == 156 )
        goto LABEL_698;
      if ( (unsigned int)v5 <= 0x94 )
      {
        if ( (_DWORD)v5 != 148 )
        {
          switch ( (_DWORD)v5 )
          {
            case 0x8A:
              SystemArgument1_high = dword_1C032FC04;
              goto LABEL_75;
            case 0x8B:
              if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 < dword_1C032FC00 || v4 < dword_1C032FBF4 )
                goto LABEL_68;
              UpdateThresholdFromMetric(v9, &v181, &v182, 0x16u, v4, 5);
              goto LABEL_609;
            case 0x8C:
              v117 = dword_1C032FC0C;
              goto LABEL_463;
            case 0x8D:
              v129 = 624;
              v8 = 2;
              break;
            case 0x8E:
              v40 = dword_1C032FC0C >> 2;
              goto LABEL_109;
            case 0x8F:
              v129 = 626;
              v8 = 4;
              break;
            case 0x90:
              v40 = dword_1C032FC0C >> 3;
              goto LABEL_109;
            case 0x91:
              v129 = 625;
              v8 = 8;
              break;
            default:
              goto LABEL_771;
          }
          goto LABEL_677;
        }
        goto LABEL_698;
      }
      if ( (_DWORD)v5 != 149 && ((_DWORD)v5 == 150 || (_DWORD)v5 != 151 && ((_DWORD)v5 == 152 || (_DWORD)v5 == 154)) )
      {
LABEL_698:
        PointerDeviceSettingsFull = ReadPointerDeviceSettingsFull(
                                      (unsigned int)v5,
                                      Src,
                                      v12,
                                      CurrentProcessWin32Process);
        goto LABEL_699;
      }
LABEL_697:
      updated = WritePointerDeviceSettingsFull((unsigned int)v5, Src, v9, CurrentProcessWin32Process);
      goto LABEL_68;
    }
    if ( (unsigned int)v5 > 0xA6 )
    {
      if ( (_DWORD)v5 != 167 )
      {
        if ( (_DWORD)v5 == 168 )
        {
          SystemArgument1_high = gbLockScreenAutoLockActive;
          goto LABEL_75;
        }
        if ( (_DWORD)v5 != 169 )
        {
          if ( (_DWORD)v5 != 170 )
          {
            switch ( (_DWORD)v5 )
            {
              case 0xAB:
                if ( *(_DWORD *)(CurrentProcessWin32Process + 56) != gpidLogonUI )
                  return 0LL;
                gbLockScreenActive = v4 != 0;
                if ( gbLockScreenActive )
                {
                  if ( !gptiForeground
                    || (v140 = *(_QWORD *)(gptiForeground + 432LL)) == 0
                    || (v141 = *(_QWORD *)(v140 + 120)) == 0
                    || (unsigned int)IsWindowUnderActiveLockScreen(v141, 2LL, v12) )
                  {
                    xxxSetForegroundWindow2(0LL, 0LL, 0LL);
                  }
                  ClearKeyboardStates();
                }
                GreLddmProcessLockScreen(gbLockScreenActive, v10, v12);
                goto LABEL_68;
              case 0xAC:
                v139 = InteractiveControlManager::Instance();
                v11 = (int)InteractiveControlManager::GetExternalParameters(
                             v139,
                             (struct tagINTERACTIVECTRL_PARAMETERS *)Src) >= 0;
                goto LABEL_68;
              case 0xAD:
                v138 = InteractiveControlManager::Instance();
                LOBYTE(updated) = (int)InteractiveControlManager::SetExternalParameters(
                                         v138,
                                         (struct tagINTERACTIVECTRL_PARAMETERS *)Src,
                                         v9) >= 0;
                goto LABEL_68;
            }
            goto LABEL_771;
          }
          v127 = (int *)gbLockScreenActive;
LABEL_593:
          SystemArgument1_high = *v127;
          goto LABEL_75;
        }
        if ( gfSwitchInProgress )
          return 0LL;
        if ( gdwRITdemonLockState && !(_DWORD)v12 )
          goto LABEL_762;
        gbLockScreenAutoLockActive = v4 != 0;
        if ( !v9 )
          goto LABEL_68;
        PointerDeviceSettingsFull = UpdateWinIniInt(0LL, 4LL, 205LL, v4);
        updated = PointerDeviceSettingsFull;
LABEL_699:
        v11 = PointerDeviceSettingsFull;
        goto LABEL_68;
      }
    }
    else
    {
      if ( (_DWORD)v5 == 166 )
        goto LABEL_731;
      if ( (_DWORD)v5 == 157 )
        goto LABEL_697;
      if ( (_DWORD)v5 != 158 )
      {
        if ( (_DWORD)v5 != 159 )
        {
          switch ( (_DWORD)v5 )
          {
            case 0xA0:
              *(_DWORD *)Src = 6;
              goto LABEL_68;
            case 0xA1:
              goto LABEL_363;
            case 0xA2:
              v136 = GetDispInfo(v15, 2LL, v12, CurrentProcessWin32Process);
              MonitorWorkRect = (_OWORD *)GetMonitorMenuRect(v198, *(_QWORD *)(v136 + 96));
              goto LABEL_340;
            case 0xA3:
              v200 = 0LL;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v133 = MonitorFromRect((struct tagRECT *)Src);
              }
              else
              {
                v133 = *(_QWORD *)(GetDispInfo(v15, 2LL, v12, CurrentProcessWin32Process) + 96);
              }
              v185 = v133;
              v202 = *(_OWORD *)GetMonitorRect(v197, v133);
              v134 = &v202;
              if ( Src )
                v134 = (__int128 *)Src;
              if ( !(unsigned int)IntersectRect(&v200, v134, &v202) || v200 != *v134 )
                goto LABEL_5;
              if ( (((__int64 (*)(void))W32GetCurrentThreadDpiAwarenessContext)() & 0xF) != 2 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
                  && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL)
                                + 64LL) & 1) != 0 )
                {
                  v135 = ((__int64 (*)(void))W32GetCurrentThreadDpiAwarenessContext)();
                  LogicalToPhysicalDPIRect(v185 + 296, &v200, v135, &v185);
                  goto LABEL_609;
                }
                updated = v181;
                v11 = v182;
              }
              *(_OWORD *)(v185 + 296) = v200;
              goto LABEL_68;
          }
          if ( (_DWORD)v5 != 165 )
            goto LABEL_771;
          goto LABEL_710;
        }
LABEL_731:
        if ( v4 + 11 > 0x16 )
          return 0LL;
        if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
        {
          v9 = 0;
          v11 = 0;
        }
        if ( !v9 )
          goto LABEL_68;
        v205 = 0LL;
        v206 = 0;
        v207 = v4;
        LODWORD(v184) = v4 != 159;
        if ( (int)DrvDisplayConfigSetScaleFactorOverride(&v205, &v184) < 0 )
        {
          v11 = 0;
          goto LABEL_68;
        }
        if ( v4 == 159 )
          TraceLoggingSPISetModernDPIOverrideEvent(v137, 159);
        else
          TraceLoggingSPISetDesktopDPIOverrideEvent(v137, v4);
        goto LABEL_363;
      }
    }
LABEL_710:
    v203 = 0LL;
    v204 = 0LL;
    if ( (int)DrvDisplayConfigGetScaleFactorOverrides(&v203, 1LL, v12, CurrentProcessWin32Process) < 0 )
      return 0LL;
    v120 = v4 == 158;
    v21 = v178;
    if ( !v120 )
    {
      v142 = Src;
      *(_QWORD *)Src = *(_QWORD *)((char *)&v204 + 4);
      v142[2] = HIDWORD(v204);
      goto LABEL_69;
    }
    v132 = DWORD2(v204);
    goto LABEL_713;
  }
  if ( (_DWORD)v5 == 137 )
  {
    if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 > dword_1C032FC04 || v4 < gWinArrGlobal[0] )
      goto LABEL_68;
    UpdateThresholdFromMetric(v9, &v181, &v182, 0x15u, v4, 4);
    goto LABEL_609;
  }
  if ( (unsigned int)v5 > 0x78 )
  {
    if ( (unsigned int)v5 <= 0x81 )
    {
      if ( (_DWORD)v5 != 129 )
      {
        switch ( (_DWORD)v5 )
        {
          case 'y':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 621LL, v4);
              v11 = updated;
            }
            if ( !v11 )
              goto LABEL_68;
            v128 = (unsigned int *)gdwHungAppTimeout;
            break;
          case 'z':
            SystemArgument1_high = gdwWaitToKillTimeout;
            goto LABEL_75;
          case '{':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 622LL, v4);
              v11 = updated;
            }
            v22 = v179;
            if ( v11 )
              gdwWaitToKillTimeout = v4;
            goto LABEL_480;
          case '|':
            v127 = (int *)gdwWaitToKillServiceTimeout;
            goto LABEL_593;
          case '}':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 52LL, 623LL, v4);
              v11 = updated;
            }
            if ( !v11 )
              goto LABEL_68;
            v128 = (unsigned int *)gdwWaitToKillServiceTimeout;
            break;
          case '~':
            SystemArgument1_high = gWinArrGlobal[0];
            goto LABEL_75;
          case '\x7F':
            if ( v4 > *(_DWORD *)(gpDispInfo + 136LL)
              || v4 > dword_1C032FBF4
              || v4 > dword_1C032FBF8
              || v4 > dword_1C032FC00 )
            {
              goto LABEL_68;
            }
            UpdateThresholdFromMetric(v9, &v181, &v182, 0x10u, v4, 0);
            goto LABEL_609;
          default:
            SystemArgument1_high = dword_1C032FBF4;
            goto LABEL_75;
        }
        *v128 = v4;
        goto LABEL_68;
      }
      if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 < gWinArrGlobal[0] || v4 > dword_1C032FBFC || v4 > dword_1C032FC04 )
        goto LABEL_68;
      UpdateThresholdFromMetric(v9, &v181, &v182, 0x11u, v4, 1);
LABEL_609:
      updated = v181;
      goto LABEL_399;
    }
    if ( (_DWORD)v5 == 130 )
    {
      LOBYTE(v40) = dword_1C032FC0C;
      goto LABEL_109;
    }
    if ( (_DWORD)v5 != 131 )
    {
      switch ( (_DWORD)v5 )
      {
        case 0x84:
          SystemArgument1_high = dword_1C032FBF8;
          goto LABEL_75;
        case 0x85:
          if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 > dword_1C032FBFC || v4 < gWinArrGlobal[0] )
            goto LABEL_68;
          UpdateThresholdFromMetric(v9, &v181, &v182, 0x13u, v4, 2);
          break;
        case 0x86:
          SystemArgument1_high = dword_1C032FBFC;
          goto LABEL_75;
        case 0x87:
          if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 < dword_1C032FBF8 || v4 < dword_1C032FBF4 )
            goto LABEL_68;
          UpdateThresholdFromMetric(v9, &v181, &v182, 0x14u, v4, 3);
          break;
        default:
          SystemArgument1_high = dword_1C032FC00;
          goto LABEL_75;
      }
      goto LABEL_609;
    }
    v129 = 18;
LABEL_677:
    if ( (unsigned int)CheckDesktopPolicy(0LL, v129) )
    {
      v9 = 0;
      v11 = 0;
    }
    if ( v9 )
    {
      updated = UpdateWinIniInt(0LL, 4LL, v129, v4);
      v11 = updated;
    }
    if ( v11 )
    {
      v130 = dword_1C032FC0C;
      if ( v4 )
        dword_1C032FC0C |= v8;
      else
        dword_1C032FC0C &= ~v8;
      PostWindowArrangementCheck(v130);
    }
    goto LABEL_68;
  }
  if ( (_DWORD)v5 == 120 )
  {
    v127 = (int *)gdwHungAppTimeout;
    goto LABEL_593;
  }
  if ( (unsigned int)v5 <= 0x6F )
  {
    switch ( (_DWORD)v5 )
    {
      case 'o':
        v11 = xxxSetIMEShowStatus(v4 != 0, v9, &v181, CurrentProcessWin32Process);
        goto LABEL_294;
      case 'e':
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 92LL, v4);
          v11 = updated;
        }
        v22 = v179;
        if ( v11 )
          HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = v4;
        goto LABEL_480;
      case 'f':
        SystemArgument1_high = (int)WPP_MAIN_CB.Dpc.SystemArgument1;
        goto LABEL_75;
      case 'g':
        if ( v4 >= 0xA )
          v19 = v4;
        if ( v19 > 0x7FFFFFFF )
          v19 = 0x7FFFFFFF;
        LODWORD(v184) = v19;
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 93LL, v19);
          v11 = updated;
          v19 = v184;
        }
        v21 = v178;
        v22 = v179;
        if ( v11 )
          LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = v19;
        goto LABEL_70;
      case 'j':
        SystemArgument1_high = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
        goto LABEL_75;
      case 'k':
        if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
        {
          v9 = 0;
          v11 = 0;
        }
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 94LL, v4);
          v11 = updated;
        }
        v22 = v179;
        if ( v11 )
          *(&WPP_MAIN_CB.ActiveThreadCount + 1) = v4;
        goto LABEL_480;
      case 'l':
        v62 = *(_DWORD *)(gpsi + 4992LL);
        goto LABEL_216;
      case 'm':
        if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
        {
          v9 = 0;
          v11 = 0;
        }
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 15LL, v4);
          v11 = updated;
        }
        if ( v11 )
          *(_DWORD *)(gpsi + 4992LL) = v4;
        goto LABEL_68;
    }
    if ( (_DWORD)v5 != 110 )
    {
LABEL_771:
      if ( (unsigned int)v5 < 0xB0 )
      {
        v14 = 1439LL;
        goto LABEL_439;
      }
      v143 = v5 & 0x3000;
      if ( (v5 & 1) == 0 )
      {
        if ( v143 == 4096 )
        {
          v144 = 0;
          v145 = 0;
          if ( (unsigned int)v5 >= 0x103E )
            goto LABEL_797;
          if ( (int)gpdwCPUserPreferencesMask < 0 )
          {
            switch ( (_DWORD)v5 )
            {
              case 0x1008:
                goto LABEL_795;
              case 0x100A:
                v144 = (gdwPUDFlags >> 17) & 1;
                v145 = v144;
                goto LABEL_797;
              case 0x1012:
              case 0x1014:
              case 0x1018:
              case 0x101A:
LABEL_795:
                if ( gbDisableAlpha )
                  v145 = 1;
                goto LABEL_797;
            }
            if ( (_DWORD)v5 != 4132 )
              goto LABEL_797;
            if ( !gbDisableAlpha )
            {
              v146 = gcOverlays == 0;
              goto LABEL_792;
            }
          }
          else
          {
            if ( (_DWORD)v5 == 4096 )
              goto LABEL_797;
            if ( (_DWORD)v5 != 4106 )
            {
              if ( (_DWORD)v5 == 4108 || (_DWORD)v5 == 4124 )
                goto LABEL_797;
              v146 = (_DWORD)v5 == 4126;
LABEL_792:
              if ( !v146 )
                goto LABEL_793;
LABEL_797:
              if ( v145 )
              {
                *(_DWORD *)Src = v144;
                goto LABEL_68;
              }
              if ( (_DWORD)v5 == 4158 && gProtocolType && !(unsigned int)IsWDAGContainer() )
              {
                v120 = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) == 0;
                goto LABEL_513;
              }
              v147 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(unsigned int)(v5 - 4096) >> 6));
              v62 = _bittest(
                      &v147,
                      (unsigned __int8)(((unsigned int)(v5 - 4096) >> 1) - 32 * ((unsigned int)(v5 - 4096) >> 6)));
LABEL_216:
              *(_DWORD *)Src = v62;
              goto LABEL_68;
            }
            v144 = 1;
          }
LABEL_793:
          v145 = 1;
          goto LABEL_797;
        }
        v148 = (int *)UPDWORDPointer((unsigned int)v5);
        v149 = *v148;
        *(_DWORD *)Src = *v148;
        if ( (_DWORD)v5 != 8204 )
          goto LABEL_68;
        v21 = v178;
        if ( v149 )
          goto LABEL_69;
        v132 = gulGamma;
LABEL_713:
        *(_DWORD *)Src = v132;
        goto LABEL_69;
      }
      v150 = CreateProfileUserName(&v186);
      v184 = v150;
      if ( v143 != 4096 )
      {
        if ( *(_DWORD *)(UPDWORDPointer((unsigned int)v5) + 4) == 4 )
        {
          v170 = UPDWORDPointer((unsigned int)v5);
          if ( (unsigned int)CheckDesktopPolicy(v184, *(_QWORD *)(v170 + 8)) )
          {
            v9 = 0;
            v11 = 0;
          }
        }
        if ( v9 )
        {
          v5 = UPDWORDPointer((unsigned int)v5);
          v171 = UPDWORDPointer(v178);
          updated = FastWriteProfileValue(v184, *(unsigned int *)(v171 + 4), *(_QWORD *)(v5 + 8), 4LL, &Src, 4);
          v11 = updated;
          LODWORD(v5) = v178;
        }
        v172 = *(_DWORD *)UPDWORDPointer((unsigned int)v5);
        if ( v11 )
        {
          v173 = (int)Src;
          v21 = v178;
          *(_DWORD *)UPDWORDPointer(v178) = v173;
          switch ( v178 )
          {
            case 0x2007u:
              *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8199LL);
              break;
            case 0x200Bu:
              v175 = (_BYTE *)UPDWORDPointer(8203LL);
              GreSetFontEnumeration(8 * (*v175 & 2 | 4));
              break;
            case 0x200Du:
              gulGamma = *(_DWORD *)UPDWORDPointer(8205LL);
              break;
            case 0x200Fu:
              if ( *(_DWORD *)UPDWORDPointer(8207LL) )
                *(_DWORD *)(gpsi + 2228LL) = *(_DWORD *)UPDWORDPointer(8207LL);
              break;
            case 0x2011u:
              if ( *(_DWORD *)UPDWORDPointer(8209LL) )
                *(_DWORD *)(gpsi + 2232LL) = *(_DWORD *)UPDWORDPointer(8209LL);
              break;
            case 0x2013u:
              v120 = (*(_DWORD *)UPDWORDPointer(8211LL) & 1) == 0;
              v174 = &unk_1C02E2EA0;
              if ( v120 )
                v174 = &unk_1C02F30F0;
              off_1C032A0D0 = v174;
              break;
            case 0x201Du:
              TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
              break;
            case 0x201Fu:
              TraceLoggingSPISetPenVisualizationEvent(v172, (unsigned int)Src);
              break;
            case 0x2029u:
              CCursorSizes::RefreshSizes(gpCursorSizes);
              break;
          }
          goto LABEL_830;
        }
LABEL_829:
        v21 = v178;
LABEL_830:
        FreeProfileUserName(v184, &v186);
        goto LABEL_69;
      }
      if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
      {
        v151 = CheckDesktopPolicy(v150, *((_QWORD *)&gpviCPUserPreferences + 1));
        v150 = v184;
        if ( v151 )
        {
          v9 = 0;
          v11 = 0;
        }
      }
      if ( v9 )
      {
        ProfileValue = FastGetProfileValue(
                         v150,
                         *((unsigned int *)&gpviCPUserPreferences + 1),
                         *((_QWORD *)&gpviCPUserPreferences + 1),
                         0LL,
                         v189,
                         8,
                         0);
        memmove((char *)v189 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
        v153 = v5 - 4096;
        v154 = 1 << (((unsigned int)(v5 - 4096) >> 1) - 32 * ((unsigned int)(v5 - 4096) >> 6));
        v155 = (unsigned __int64)(unsigned int)(v5 - 4096) >> 6;
        v156 = v189[v155];
        if ( Src )
          v157 = v154 | v156;
        else
          v157 = ~v154 & v156;
        v189[v155] = v157;
        updated = FastWriteProfileValue(
                    v184,
                    *((unsigned int *)&gpviCPUserPreferences + 1),
                    *((_QWORD *)&gpviCPUserPreferences + 1),
                    3LL,
                    v189,
                    8);
        v11 = updated;
      }
      else
      {
        v153 = v5 - 4096;
      }
      if ( !v11 )
        goto LABEL_829;
      v158 = 1 << ((v153 >> 1) - 32 * (v153 >> 6));
      v159 = (unsigned __int64)v153 >> 6;
      if ( Src )
        *((_DWORD *)&gpdwCPUserPreferencesMask + v159) |= v158;
      else
        *((_DWORD *)&gpdwCPUserPreferencesMask + v159) &= ~v158;
      if ( (unsigned int)v5 <= 0x1023 )
      {
        if ( (_DWORD)v5 == 4131 )
        {
LABEL_835:
          v167 = *(_QWORD *)(gptiCurrent + 456LL);
          if ( v167 )
            v168 = *(struct tagWND **)(*(_QWORD *)(v167 + 8) + 24LL);
          else
            v168 = 0LL;
          xxxInternalInvalidate(v168, (HRGN)1, 0x10485u);
          goto LABEL_829;
        }
        v160 = v5 - 4101;
        if ( v160 )
        {
          v161 = v160 - 2;
          if ( v161 )
          {
            v162 = v161 - 2;
            if ( v162 )
            {
              v163 = v162 - 2;
              if ( v163 )
              {
                if ( v163 == 16 )
                  SetPointer(1LL);
                goto LABEL_829;
              }
              v164 = gpsi;
              v165 = *(_DWORD *)(gpsi + 7004LL);
              v166 = ((unsigned int)gpdwCPUserPreferencesMask ^ v165) & 0x20;
              goto LABEL_832;
            }
            goto LABEL_847;
          }
          v164 = gpsi;
          v165 = *(_DWORD *)(gpsi + 7004LL);
          v166 = ((unsigned int)gpdwCPUserPreferencesMask ^ v165) & 8;
        }
        else
        {
          v164 = gpsi;
          v165 = *(_DWORD *)(gpsi + 7004LL);
          v166 = ((unsigned int)gpdwCPUserPreferencesMask ^ v165) & 4;
        }
LABEL_832:
        *(_DWORD *)(v164 + 7004) = v165 ^ v166;
        goto LABEL_829;
      }
      if ( (_DWORD)v5 == 4133 )
      {
        v169 = (void *)ReferenceDwmApiPort(0LL);
        DwmAsyncNotifyWindowShadowChange(v169);
        goto LABEL_829;
      }
      if ( (_DWORD)v5 != 4159 )
      {
        if ( (_DWORD)v5 == 4175 || (_DWORD)v5 == 4177 )
        {
          xxxWindowEvent(0x80000007, 0);
        }
        else if ( (_DWORD)v5 == 4179 )
        {
          NotifyISMPenButtonYieldSettingChange();
        }
        goto LABEL_829;
      }
      *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 0x80000000;
      SetPointer(1LL);
LABEL_847:
      CreateBitmapStrip();
      goto LABEL_835;
    }
    v120 = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) == 0;
LABEL_513:
    SystemArgument1_high = !v120;
    goto LABEL_75;
  }
  switch ( (_DWORD)v5 )
  {
    case 'p':
      UserHandedness = GetMouseSensitivity(0LL, 2LL, v12, CurrentProcessWin32Process);
      goto LABEL_113;
    case 'q':
      if ( !(unsigned __int8)IsValidMouseSensitivity((unsigned int)Src, 2LL, v12, CurrentProcessWin32Process) )
        return 0LL;
      if ( v9 )
      {
        RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", Src);
        updated = FastUpdateWinIni(0LL, 12LL, 608LL, v209);
        v11 = updated;
      }
      if ( v11 )
      {
        UpdateMouseSensitivity((unsigned int)Src);
        for ( i = 0; i < 2; ++i )
          ResetAccelerationCurves(i);
      }
      goto LABEL_68;
    case 'r':
      v120 = gppiScreenSaver == 0LL;
      goto LABEL_513;
    case 's':
      if ( g_pWallpaperSettings )
      {
        RtlStringCchCopyW((unsigned __int16 *)Src, 0x104uLL, (const unsigned __int16 *)(g_pWallpaperSettings + 4LL));
        goto LABEL_68;
      }
      v58 = CreateProfileUserName(&v186);
      LoadWallpaperFilenameFromRegistry(v58, Src, 260LL);
      goto LABEL_170;
    case 't':
      if ( v4 && v4 != 12 || !Src || *(_DWORD *)Src != 12 )
        return 0LL;
      *(void **)((char *)Src + 4) = *(void *const *)((char *)&gAudioDescription + 4);
      goto LABEL_68;
    case 'u':
      if ( v4 && v4 != 12 || !Src || *(_DWORD *)Src != 12 )
        return 0LL;
      if ( v9 )
      {
        v121 = CreateProfileUserName(&v186);
        v122 = v121;
        v123 = L"1";
        v124 = L"1";
        if ( !*((_DWORD *)Src + 1) )
          v124 = L"0";
        v125 = FastWriteProfileStringW(v121, 48LL, L"On", v124);
        RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", *((unsigned int *)Src + 2));
        updated = FastWriteProfileStringW(v122, 48LL, L"Locale", v209) & v125;
        v11 = updated;
        if ( !updated )
        {
          if ( !HIDWORD(gAudioDescription) )
            v123 = L"0";
          FastWriteProfileStringW(v122, 48LL, L"On", v123);
          RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", *((unsigned int *)&gAudioDescription + 2));
          FastWriteProfileStringW(v122, 48LL, L"Locale", v209);
        }
        FreeProfileUserName(v122, &v186);
      }
      if ( v11 )
      {
        memmove(gAudioDescription, Src, *(unsigned int *)Src);
        LODWORD(gAudioDescription) = 12;
      }
      goto LABEL_68;
    case 'v':
      v119 = *gpsi >> 9;
      goto LABEL_489;
  }
  if ( gdwRITdemonLockState && !(_DWORD)v12 )
    goto LABEL_762;
  if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
  {
    v9 = 0;
    v11 = 0;
    v182 = 0;
  }
  if ( v9 )
  {
    updated = UpdateWinIniInt(0LL, 4LL, 618LL, v4 != 0);
    v181 = updated;
    v11 = updated;
    v182 = updated;
  }
  if ( !v11 )
    goto LABEL_68;
  v22 = v179;
  v120 = v4 == 0;
  v21 = v178;
  if ( v120 )
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  else
    _InterlockedOr(gpsi, 0x200u);
  updated = v181;
  v11 = v182;
LABEL_70:
  if ( updated )
  {
    if ( v22 )
      EditionxxxBroadcastSPIChange(v21, v210);
  }
  return v11;
}
