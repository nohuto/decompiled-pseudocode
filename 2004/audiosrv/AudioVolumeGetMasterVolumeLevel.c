/*
 * XREFs of AudioVolumeGetMasterVolumeLevel @ 0x1800C5330
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeGetMasterVolumeLevel(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  struct _TP_TIMER **v4; // rax
  __int64 v5; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (_QWORD *)a1;
  v4 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v4[1], v5, (struct _TP_TIMER *)L"AudioVolumeGetMasterVolumeLevel");
  LODWORD(v3) = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 72LL))(*v3, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v3;
}
