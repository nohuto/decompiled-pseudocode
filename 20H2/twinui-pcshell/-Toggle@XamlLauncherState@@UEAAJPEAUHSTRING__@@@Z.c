/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180336850
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180046E5C (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18005DBC4 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18005DD2C (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEAUHSTRING__@@@Z @ 0x18005DDA4 (-GetMainViewMode@ViewModeHelpers@Cortana@@YA-AW4MainViewMode@12@PEAUHSTRING__@@@Z.c)
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18005F5E0 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x18020939C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180332868 (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18033318C (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x180334A00 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  int MainViewMode; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v13; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 944) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v10[0] = *((_DWORD *)this + 8);
  *(_QWORD *)&v10[2] = (char *)this - 32;
  v11 = 1;
  if ( !v10[0] )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *(_WORD *)((char *)this + 939) = 0;
    *((_BYTE *)this + 941) = 0;
    *((_DWORD *)this + 8) = 6;
    goto LABEL_26;
  }
  if ( v10[0] == 5 )
  {
    v13 = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 152LL))(*((_QWORD *)this + 7), &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1031LL;
      goto LABEL_17;
    }
    if ( v13 )
    {
      XamlLauncherState::MinimizeCortanaToBoxMode((XamlLauncherState *)((char *)this - 8));
      goto LABEL_20;
    }
    v9 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 32), a2);
LABEL_23:
    v7 = v9;
    if ( v9 < 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( v10[0] != 7 )
  {
LABEL_20:
    v7 = 0;
    goto LABEL_21;
  }
  MainViewMode = 0;
  if ( IsSearchAndCortanaSplitEnabled() )
    MainViewMode = Cortana::ViewModeHelpers::GetMainViewMode(a2);
  if ( *((_DWORD *)this + 258) != MainViewMode )
  {
LABEL_26:
    v9 = XamlLauncherState::ShowSearchOrCortana((XamlLauncherState *)((char *)this - 32), a2);
    goto LABEL_23;
  }
  *((_DWORD *)this + 8) = 8;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_20;
  v8 = 1023LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v6);
LABEL_21:
  v11 = 0;
  StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v10,
    (int *)this + 8);
  return v7;
}
