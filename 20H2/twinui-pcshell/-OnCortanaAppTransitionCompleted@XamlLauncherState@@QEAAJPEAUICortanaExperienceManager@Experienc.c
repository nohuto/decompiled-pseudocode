/*
 * XREFs of ?OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180334AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180331448 (--$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTel.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaAppTransitionCompleted(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int *)((char *)this + 64);
  v7[0] = *((_DWORD *)this + 16);
  *(_QWORD *)&v7[2] = this;
  v8 = 1;
  if ( v7[0] == 13
    && (*v3 = 14,
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IInspectable *))(**((_QWORD **)this + 10) + 64LL))(
               *((_QWORD *)this + 10),
               7LL,
               a3),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89E,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  v8 = 0;
  StartWindowTelemetry::OnCortanaAppTransitionCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v7,
    v3);
  return v5;
}
