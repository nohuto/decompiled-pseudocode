/*
 * XREFs of ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x1803357EC
 * Callers:
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180334C20 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?OnStartFailedToGetForeground@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1803357B0 (-OnStartFailedToGetForeground@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@She.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180336A28 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180046D24 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180080D1C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180084F4C (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180331DB4 (--$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x1803347CC (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?StartBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x180336424 (-StartBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::OnStartFailedToGetForegroundImpl(XamlLauncherState *this)
{
  int *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v7[4]; // [rsp+20h] [rbp-E0h] BYREF
  char v8; // [rsp+30h] [rbp-D0h]
  _BYTE v9[320]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  StartWindowTelemetry::StartBlockedBySetForegroundFailure();
  v2 = (int *)((char *)this + 64);
  v7[0] = *((_DWORD *)this + 16);
  *(_QWORD *)&v7[2] = this;
  v8 = 1;
  if ( v7[0] == 15 )
  {
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
      (__int64)this + 296,
      (struct wil::details::IFailureCallback *)v9);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v9);
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v9);
    *v2 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x611,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v9);
      goto LABEL_9;
    }
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v9);
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  if ( v7[0] != 16 )
    goto LABEL_8;
  *v2 = 17;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
  v4 = v3;
  if ( v3 >= 0 )
    goto LABEL_8;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x618,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v3);
LABEL_9:
  v8 = 0;
  StartWindowTelemetry::OnStartFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v7,
    v2);
  return v4;
}
