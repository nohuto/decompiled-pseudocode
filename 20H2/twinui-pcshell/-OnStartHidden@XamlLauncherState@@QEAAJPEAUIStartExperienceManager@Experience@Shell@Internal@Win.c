/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180087010
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180052500 (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?LauncherClosed@CommonStartTelemetry@@SAXXZ @ 0x180087080 (-LauncherClosed@CommonStartTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v3; // rbx
  int v5; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+30h] [rbp-18h]

  v3 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v6 = this;
  v7 = 1;
  (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::IStartExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 16) + 32LL))(
    *((_QWORD *)this + 16),
    a2,
    a3);
  switch ( *v3 )
  {
    case 14:
      *v3 = 7;
      break;
    case 9:
      *v3 = 10;
      break;
    case 11:
    case 17:
      *v3 = 0;
      break;
  }
  CommonStartTelemetry::LauncherClosed();
  v7 = 0;
  StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v5,
    v3);
  return 0LL;
}
