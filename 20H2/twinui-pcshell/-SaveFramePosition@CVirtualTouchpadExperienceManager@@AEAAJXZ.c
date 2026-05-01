/*
 * XREFs of ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801E4E00
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801E3C7C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801E4580 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801A0394 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x1801E1514 (--$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEB.c)
 *     ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x1801E3804 (-GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::SaveFramePosition(CVirtualTouchpadExperienceManager *this)
{
  int FramePosition; // ebx
  __int64 v3; // rdx
  HMONITOR v5; // rax
  const char *v6; // r9
  HMONITOR v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+44h] [rbp-BCh]
  RECT rc; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[64]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v15; // [rsp+A4h] [rbp-5Ch]
  struct tagMONITORINFO mi; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v17[72]; // [rsp+D8h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  FramePosition = CVirtualTouchpadExperienceManager::GetFramePosition(this, (struct tagPOINT *)&rc);
  if ( FramePosition < 0 )
  {
    v3 = 454LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)FramePosition);
    return (unsigned int)FramePosition;
  }
  v13 = 1;
  memset_0(v14, 0, 0x48uLL);
  v5 = MonitorFromRect(&rc, 0);
  v7 = v5;
  if ( !v5 )
  {
    v8 = 457LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v6);
  }
  mi.cbSize = 104;
  if ( !GetMonitorInfoW(v5, &mi) )
  {
    v8 = 460LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v6);
  }
  _o_wcscpy_s(v14, 32LL, v17);
  FramePosition = GetScaleFactorForMonitor(v7, &v10);
  if ( FramePosition < 0 )
  {
    v3 = 463LL;
    goto LABEL_3;
  }
  LODWORD(v11) = (int)(float)((float)((float)(mi.rcMonitor.right - rc.right) * 100.0) / (float)v10);
  HIDWORD(v11) = (int)(float)((float)((float)(mi.rcMonitor.bottom - rc.bottom) * 100.0) / (float)v10);
  v15 = v11;
  v9 = _RegSetKeyValueWithSDDL(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Touchpad\\",
         L"Anchor",
         3u,
         (BYTE *)&v13,
         0x4Cu);
  FramePosition = v9;
  if ( v9 > 0 )
    FramePosition = (unsigned __int16)v9 | 0x80070000;
  if ( FramePosition < 0 )
  {
    v3 = 467LL;
    goto LABEL_3;
  }
  TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
    &rc.left,
    &rc.right,
    (__int128 *)(*((_QWORD *)this + 53) + 8LL));
  return 0LL;
}
