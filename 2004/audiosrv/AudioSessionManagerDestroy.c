/*
 * XREFs of AudioSessionManagerDestroy @ 0x18002B630
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerDestroy(_QWORD *a1)
{
  _QWORD *v2; // rbx
  struct _TP_TIMER **v3; // rax
  __int64 v4; // r8
  CAudioSessionManager *v5; // rcx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (_QWORD *)*a1;
  v3 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v3[1], v4, (struct _TP_TIMER *)L"AudioSessionManagerDestroy");
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, *v2);
      v5 = WPP_GLOBAL_Control;
    }
    if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v5 + 28) & 0x40) != 0
      && *((_BYTE *)v5 + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)v5 + 2), 57LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, *v2);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2[1] + 16LL))(v2[1]);
  operator delete(v2, (const struct std::nothrow_t *)0x10);
  *a1 = 0LL;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return 0LL;
}
