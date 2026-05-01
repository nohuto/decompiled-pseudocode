/*
 * XREFs of ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180087E00
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18005FAB4 (--$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x1803138B0 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDismissRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (int *)((char *)this + 64);
  v8[0] = *((_DWORD *)this + 16);
  *(_QWORD *)&v8[2] = this;
  v9 = 1;
  if ( v8[0] == 5 )
  {
    XamlLauncherState::MinimizeCortanaToBoxMode((XamlLauncherState *)((char *)this + 24));
  }
  else if ( v8[0] == 7 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, struct IInspectable *))(**((_QWORD **)this + 12) + 24LL))(
      *((_QWORD *)this + 12),
      3LL,
      a3);
    *v4 = 8;
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x771,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_5;
    }
  }
  v6 = 0;
LABEL_5:
  v9 = 0;
  StartWindowTelemetry::OnCortanaDismissRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v8,
    v4);
  return v6;
}
