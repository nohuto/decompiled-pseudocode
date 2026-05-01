/*
 * XREFs of ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180335A50
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180052810 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180055F2C (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180089B40 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1803322D8 (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x180333088 (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180337488 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        int a3)
{
  int *v4; // rdi
  char v5; // al
  int v7; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = (int *)((char *)this + 64);
  v7 = *((_DWORD *)this + 16);
  v8 = this;
  v9 = 1;
  v10 = a3;
  v5 = 0;
  if ( a3 == -2147009295 || a3 == -2144927148 )
    v5 = 1;
  *((_BYTE *)this + 969) = v5;
  *((_BYTE *)this + 971) = a3 < 0;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this) || *((_BYTE *)this + 971) )
  {
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    SetExistingEvent(L"ShellSearchReadyEvent");
    StartWindowTelemetry::StartRunningWithoutCortana<long>(&v10);
    if ( *v4 == 2 || *v4 == 19 )
    {
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( *v4 == 6 )
    {
      *v4 = 0;
    }
  }
  v9 = 0;
  StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v7,
    v4);
  return 0LL;
}
