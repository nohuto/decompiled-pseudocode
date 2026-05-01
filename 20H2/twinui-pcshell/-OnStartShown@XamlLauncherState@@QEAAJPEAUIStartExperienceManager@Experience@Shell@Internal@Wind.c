/*
 * XREFs of ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180085220
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180046D24 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180046E5C (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ??$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180052450 (--$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Int.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18005DBC4 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z @ 0x18005E5C0 (-ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180080BD4 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180080D1C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180080D58 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180084F4C (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x18008530C (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180336A28 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnStartShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rdi
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  bool v9; // r14
  bool v10; // si
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16[4]; // [rsp+20h] [rbp-E0h] BYREF
  char v17; // [rsp+30h] [rbp-D0h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v19; // [rsp+50h] [rbp-B0h]
  _BYTE v20[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v16[0] = v5;
  *(_QWORD *)&v16[2] = this;
  v17 = 1;
  v6 = 2;
  if ( v5 == 1 )
    goto LABEL_2;
  if ( v5 <= 2 )
    goto LABEL_35;
  if ( v5 <= 4 )
  {
LABEL_18:
    v9 = (unsigned int)(v5 - 20) <= 1;
    v10 = v5 == 3 || v5 == 20;
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
      (__int64)this + 296,
      (struct wil::details::IFailureCallback *)v20);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16));
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x54E,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 144LL))(*((_QWORD *)this + 11));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x54F,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v13);
    *v4 = 5;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
    if ( v10 )
      XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 123));
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v20);
    if ( v9 )
    {
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"StartMode=AppTransition",
        0x18u,
        0x17u);
      v14 = XamlLauncherState::ShowCortanaFromOpenStart(this, v19);
      v7 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x559,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v14);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v20);
        goto LABEL_10;
      }
    }
    goto LABEL_24;
  }
  if ( v5 != 15 )
  {
    if ( v5 == 18 )
    {
LABEL_2:
      if ( v5 != 1 )
        v6 = 19;
      *v4 = v6;
      if ( !*((_BYTE *)this + 968) || XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this) )
      {
        if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this)
          || *((_BYTE *)this + 971)
          || *((_BYTE *)this + 972) )
        {
          XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
        }
        else
        {
          XamlLauncherState::BeginCortanaReadinessCutoff(this);
        }
      }
      else
      {
        *((_BYTE *)this + 968) = 0;
        XamlLauncherState::BeginCortanaReadinessCutoff(this);
        v15 = XamlLauncherState::ShowSearchWithStart(this, (*((_DWORD *)this + 73) & 4) != 0);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x52C,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v15);
      }
      goto LABEL_9;
    }
    if ( v5 > 19 && v5 <= 21 )
      goto LABEL_18;
LABEL_35:
    *((_BYTE *)this + 973) = 1;
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    *v4 = 0;
    goto LABEL_9;
  }
  CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
    (__int64)this + 296,
    (struct wil::details::IFailureCallback *)v20);
  *v4 = 16;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x53D,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v11);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v20);
LABEL_24:
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v20);
LABEL_9:
  v7 = 0;
LABEL_10:
  v17 = 0;
  StartWindowTelemetry::OnStartShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v16,
    v4);
  return v7;
}
