/*
 * XREFs of ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801AD330
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801AD000 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800136E0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180018A6C (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001AB3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x1801AC294 (--$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExper.c)
 *     ??$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1801AC414 (--$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1801ACD50 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShoulderTapExperienceManager::PositionShoulderTap(CShoulderTapExperienceManager *this)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, PCWSTR, RECT *); // rbx
  PCWSTR v5; // rax
  int v6; // eax
  unsigned int LastError; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, SID *, GUID *, __int64 *); // rbx
  int v10; // eax
  HMONITOR v11; // r14
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  int PeopleBarScreenEdge; // eax
  int v18; // eax
  unsigned int v19; // r9d
  LONG bottom; // eax
  UINT v21; // ebx
  LONG left; // eax
  HMONITOR v23; // r8
  const char *v24; // r9
  int v25; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v26; // rdx
  HWND v27; // rax
  POINT anchorPoint; // [rsp+70h] [rbp-39h] BYREF
  SIZE windowSize; // [rsp+78h] [rbp-31h] BYREF
  int v31; // [rsp+80h] [rbp-29h] BYREF
  int v32[2]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v33; // [rsp+90h] [rbp-19h] BYREF
  UINT32 length; // [rsp+98h] [rbp-11h] BYREF
  PCWSTR StringRawBuffer; // [rsp+A0h] [rbp-9h] BYREF
  PCWSTR v36; // [rsp+A8h] [rbp-1h] BYREF
  RECT rc; // [rsp+B0h] [rbp+7h] BYREF
  RECT excludeRect; // [rsp+C0h] [rbp+17h] BYREF
  RECT popupWindowPosition; // [rsp+D0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 34), 0LL);
  ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart<unsigned short const *>(&StringRawBuffer, v2);
  rc = 0LL;
  length = 0;
  v3 = *((_QWORD *)this + 32);
  v4 = *(__int64 (__fastcall **)(__int64, PCWSTR, RECT *))(*(_QWORD *)v3 + 112LL);
  v5 = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), &length);
  v6 = v4(v3, v5, &rc);
  LastError = v6;
  if ( v6 >= 0 )
  {
    v33 = 0LL;
    v8 = *((_QWORD *)this + 31);
    v9 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v33);
    v10 = v9(v8, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v33);
    LastError = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_30:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v33);
      return LastError;
    }
    v11 = MonitorFromRect(&rc, 1u);
    *(_QWORD *)v32 = 0LL;
    v12 = v33;
    v13 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v33 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v32);
    v14 = v13(v12, v11, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v32);
    LastError = v14;
    if ( v14 < 0 )
    {
      v15 = (unsigned int)v14;
      v16 = 283LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)v15);
      goto LABEL_29;
    }
    v31 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v31);
    LastError = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v15 = (unsigned int)PeopleBarScreenEdge;
      v16 = 286LL;
      goto LABEL_28;
    }
    excludeRect = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v32 + 168LL))(*(_QWORD *)v32, &excludeRect);
    LastError = v18;
    if ( v18 < 0 )
    {
      v15 = (unsigned int)v18;
      v16 = 289LL;
      goto LABEL_28;
    }
    v19 = 184;
    windowSize.cx = 184;
    windowSize.cy = 184;
    if ( v31 == -1 )
      goto LABEL_27;
    if ( v31 )
    {
      if ( v31 == 1 )
      {
        anchorPoint.x = (rc.left + rc.right) / 2;
        bottom = rc.bottom;
        v21 = 65540;
        goto LABEL_17;
      }
      if ( v31 != 2 )
      {
        if ( v31 == 3 )
        {
          anchorPoint.x = (rc.left + rc.right) / 2;
          bottom = rc.top;
          v21 = 65572;
LABEL_17:
          windowSize.cy = 202;
          goto LABEL_22;
        }
LABEL_27:
        LastError = -2147024809;
        v15 = 2147942487LL;
        v16 = 329LL;
        goto LABEL_28;
      }
      left = excludeRect.left;
      v21 = 65560;
    }
    else
    {
      left = excludeRect.right;
      v21 = 65552;
    }
    anchorPoint.x = left;
    v19 = 202;
    windowSize.cx = 202;
    bottom = (rc.bottom + rc.top) / 2;
LABEL_22:
    anchorPoint.y = bottom;
    windowSize.cx = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                      (ExperienceManagerUtils *)v19,
                      (__int64)v11,
                      (HMONITOR)2);
    windowSize.cy = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                      (ExperienceManagerUtils *)(unsigned int)windowSize.cy,
                      (__int64)v11,
                      v23);
    if ( CalculatePopupWindowPosition(&anchorPoint, &windowSize, v21, &excludeRect, &popupWindowPosition) )
    {
      v25 = CSingleViewShellExperience::SetPosition(
              (CShoulderTapExperienceManager *)((char *)this + 40),
              &popupWindowPosition);
      LastError = v25;
      if ( v25 < 0 )
      {
        v15 = (unsigned int)v25;
        v16 = 339LL;
        goto LABEL_28;
      }
      v27 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 8), v26);
      SetWindowPos(v27, 0LL, 0, 0, 0, 0, 0x13u);
      CSingleViewShellExperience::Show(
        (__int64)this + 40,
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
      LODWORD(StringRawBuffer) = v31;
      v36 = WindowsGetStringRawBuffer(*((HSTRING *)this + 34), 0LL);
      ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd<unsigned short const *,int,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &>(
        &v36,
        (int *)&StringRawBuffer,
        (int *)&anchorPoint,
        &anchorPoint.y,
        (int *)&windowSize,
        &windowSize.cy,
        &rc.left,
        &rc.right,
        &excludeRect.top,
        &excludeRect.bottom,
        &popupWindowPosition.left,
        &popupWindowPosition.top,
        &popupWindowPosition.right,
        &popupWindowPosition.bottom);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x152,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
                    v24);
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v32);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x112,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return LastError;
}
