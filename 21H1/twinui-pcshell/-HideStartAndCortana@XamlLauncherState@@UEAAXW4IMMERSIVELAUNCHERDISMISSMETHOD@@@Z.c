/*
 * XREFs of ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180312610
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180312450 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18004EFCC (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18005258C (--0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054CA8 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800553C4 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180082D7C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1803101EC (--$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18031367C (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall XamlLauncherState::HideStartAndCortana(__int64 a1, unsigned int a2)
{
  int *v4; // rsi
  struct wil::details::IFailureCallback *v5; // rax
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+28h] [rbp-D8h]
  char v9; // [rsp+30h] [rbp-D0h]
  _BYTE v10[48]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v11; // [rsp+70h] [rbp-90h]
  _BYTE v12[320]; // [rsp+180h] [rbp+80h] BYREF

  v7 = *(_DWORD *)(a1 + 40);
  v4 = (int *)(a1 - 24);
  v8 = a1 - 24;
  v9 = 1;
  if ( v7 != 3 )
  {
    if ( v7 == 5 )
      goto LABEL_10;
    if ( v7 <= 11 )
    {
LABEL_7:
      *(_BYTE *)(a1 + 949) = a2 == 7;
      if ( a2 == 7 )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
        *(_DWORD *)(a1 + 40) = 0;
      }
      goto LABEL_18;
    }
    if ( v7 <= 14 )
    {
LABEL_10:
      *(_DWORD *)(a1 + 40) = 9;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
      goto LABEL_18;
    }
    if ( v7 == 16 )
    {
      *(_DWORD *)(a1 + 40) = 17;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
      goto LABEL_18;
    }
    if ( v7 != 20 )
      goto LABEL_7;
  }
  CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v10);
  if ( **(_DWORD **)(a1 + 320) == 1 && a2 == 7 )
  {
    v5 = CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
           a1 + 272,
           (struct wil::details::IFailureCallback *)v12);
    CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v10, (__int64)v5);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v12);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v10);
  }
  *(_DWORD *)(a1 + 40) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
  if ( *v11 == 1 && a2 == 7 )
    XamlLauncherState::CompleteStartShowTelemetry(
      (XamlLauncherState *)v4,
      0,
      (struct CommonStartTelemetry::LauncherInvokeActivity *)v10);
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v10);
LABEL_18:
  v9 = 0;
  return StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
           &v7,
           v4 + 16);
}
