/*
 * XREFs of ?ClaimForeground@XamlLauncherState@@UEAAXXZ @ 0x180333340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$ClaimForeground@AEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEAW4InternalState@XamlLauncherState@@@Z @ 0x180330B24 (--$ClaimForeground@AEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEAW4Internal.c)
 */

void __fastcall XamlLauncherState::ClaimForeground(XamlLauncherState *this)
{
  _DWORD *v1; // rbx
  void (*v3)(void); // rax

  v1 = (_DWORD *)((char *)this + 40);
  StartWindowTelemetry::ClaimForeground<enum XamlLauncherState::InternalState &>((int *)this + 10);
  if ( *v1 == 5 )
  {
    v3 = *(void (**)(void))(**((_QWORD **)this + 8) + 104LL);
  }
  else
  {
    if ( *v1 != 16 )
      return;
    v3 = *(void (**)(void))(**((_QWORD **)this + 7) + 128LL);
  }
  v3();
}
