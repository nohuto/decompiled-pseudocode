/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180335F90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180046E5C (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18005DBC4 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18005DD2C (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x18020939C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180332074 (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18033318C (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8[4]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)this + 944) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  *(_WORD *)((char *)this + 939) = 0;
  v8[0] = *((_DWORD *)this + 8);
  *(_QWORD *)&v8[2] = (char *)this - 32;
  v9 = 1;
  if ( !v8[0] )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *((_BYTE *)this + 941) = 0;
    goto LABEL_16;
  }
  if ( v8[0] == 5 )
  {
    v7 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 32), a2);
LABEL_18:
    v6 = v7;
    if ( v7 < 0 )
      goto LABEL_20;
LABEL_19:
    v6 = 0;
    goto LABEL_20;
  }
  if ( v8[0] <= 5 )
    goto LABEL_19;
  if ( v8[0] <= 7 )
    goto LABEL_17;
  if ( v8[0] <= 11 )
    goto LABEL_19;
  if ( v8[0] <= 14 )
  {
LABEL_17:
    v7 = XamlLauncherState::ShowSearchOrCortana((XamlLauncherState *)((char *)this - 32), a2);
    goto LABEL_18;
  }
  if ( v8[0] != 16 )
    goto LABEL_19;
  XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
  *((_DWORD *)this + 8) = 17;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 7LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
LABEL_16:
    *((_DWORD *)this + 8) = 6;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x379,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v5);
LABEL_20:
  v9 = 0;
  StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v8,
    (int *)this + 8);
  return v6;
}
