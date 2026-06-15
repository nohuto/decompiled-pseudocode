/*
 * XREFs of s_apmUnregisterAudioStateMonitor @ 0x1800028A0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmUnregisterAudioStateMonitor(__int64 a1, __int64 a2)
{
  _BYTE pv[72]; // [rsp+30h] [rbp-48h] BYREF

  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  LODWORD(a2) = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64))(*(_QWORD *)g_PolicyManager
                                                                                          + 304LL))(
                  g_PolicyManager,
                  a1,
                  a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return (unsigned int)a2;
}
