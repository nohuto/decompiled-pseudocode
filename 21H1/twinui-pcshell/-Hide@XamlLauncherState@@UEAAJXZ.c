/*
 * XREFs of ?Hide@XamlLauncherState@@UEAAJXZ @ 0x1803124E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x1800554FC (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18030FFD4 (--$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Hide(XamlLauncherState *this)
{
  int *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (int *)((char *)this - 32);
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v6[0] = *((_DWORD *)this + 8);
  *(_QWORD *)&v6[2] = v2;
  v7 = 1;
  if ( v6[0] == 7
    && (*((_DWORD *)this + 8) = 8,
        v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7)),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A5,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  v7 = 0;
  StartWindowTelemetry::HideCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v6,
    v2 + 16);
  return v5;
}
