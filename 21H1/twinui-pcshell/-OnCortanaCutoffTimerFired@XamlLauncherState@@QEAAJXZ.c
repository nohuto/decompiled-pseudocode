/*
 * XREFs of ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x1803139F0
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180314080 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800520CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180055530 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEBKAEAW4InternalState@XamlLauncherState@@@Z @ 0x18030FAF4 (--$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTeleme.c)
 *     ??$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180310404 (--$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1803158D8 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaCutoffTimerFired(XamlLauncherState *this)
{
  _DWORD *v2; // rdi
  int v3; // eax
  int v5[4]; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 119,
    0LL);
  if ( !XamlLauncherState::DoesCortanaHaveForeground((XamlLauncherState *)((char *)this + 24)) )
  {
    v2 = (_DWORD *)((char *)this + 64);
    v5[0] = *((_DWORD *)this + 16);
    *(_QWORD *)&v5[2] = this;
    v6 = 1;
    StartWindowTelemetry::CortanaCancelledDueToTimerCutoff<unsigned long const &,enum XamlLauncherState::InternalState &>(
      (int *)this + 18,
      (int *)this + 16);
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x911,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
    if ( *v2 != 1 )
    {
      if ( *v2 == 2 )
        goto LABEL_8;
      if ( *v2 != 18 )
      {
        if ( *v2 != 19 )
        {
LABEL_10:
          v6 = 0;
          StartWindowTelemetry::OnCortanaCutoffTimerFired<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
            v5,
            (int *)this + 16);
          return 0LL;
        }
LABEL_8:
        XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
        goto LABEL_10;
      }
    }
    *((_BYTE *)this + 972) = 1;
    goto LABEL_10;
  }
  return 0LL;
}
