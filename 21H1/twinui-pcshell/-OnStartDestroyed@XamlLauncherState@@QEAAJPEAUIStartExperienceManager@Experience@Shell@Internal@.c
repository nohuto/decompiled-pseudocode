/*
 * XREFs of ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180314400
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18004EFCC (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800553C4 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x1800554FC (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180082D7C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1800852D0 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180310A4C (--$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW.c)
 *     ?StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x1803154DC (-StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rsi
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+28h] [rbp-E0h] BYREF
  int v10; // [rsp+30h] [rbp-D8h] BYREF
  XamlLauncherState *v11; // [rsp+38h] [rbp-D0h]
  char v12; // [rsp+40h] [rbp-C8h]
  _BYTE v13[320]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v10 = v5;
  v11 = this;
  v12 = 1;
  if ( !XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
LABEL_19:
        *v4 = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
        goto LABEL_20;
      }
      if ( v5 <= 2 )
        goto LABEL_20;
      if ( v5 > 4 )
      {
        if ( v5 == 18 || v5 == 20 )
          goto LABEL_19;
        if ( v5 != 21 )
          goto LABEL_20;
      }
    }
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
      (__int64)this + 296,
      (struct wil::details::IFailureCallback *)v13);
    XamlLauncherState::CompleteStartShowTelemetry(
      this,
      -2147467260,
      (struct CommonStartTelemetry::LauncherInvokeActivity *)v13);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v13);
    goto LABEL_19;
  }
  StartWindowTelemetry::StartViewDestroyedWhileVisible();
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12), 3LL);
  if ( !XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this)
    && !*((_BYTE *)this + 971)
    && !*((_BYTE *)this + 972) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5CE,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
  }
  *v4 = 0;
  v7 = *((_QWORD *)this + 13);
  if ( v7 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 24LL))(v7, &v9) >= 0 && v9 )
    *((_BYTE *)this + 975) = 1;
LABEL_20:
  v12 = 0;
  StartWindowTelemetry::OnStartDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v10,
    v4);
  return 0LL;
}
