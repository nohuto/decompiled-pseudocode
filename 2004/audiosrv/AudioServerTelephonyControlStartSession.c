/*
 * XREFs of AudioServerTelephonyControlStartSession @ 0x1800E1E00
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlStartSession(__int64 a1, unsigned int a2)
{
  struct _TP_TIMER **v3; // rax
  __int64 v4; // r8
  unsigned int v5; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v3[1], v4, (struct _TP_TIMER *)L"AudioServerTelephonyControlStartSession");
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))g_TelephonyControl->lpVtbl[1].QueryInterface)(
         g_TelephonyControl,
         a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v5;
}
