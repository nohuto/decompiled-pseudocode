/*
 * XREFs of AudioVolumeGetVolumeRange @ 0x1800C5330
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeGetVolumeRange(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v8 = (_QWORD *)a1;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v10,
    (struct _TP_TIMER *)L"AudioVolumeGetVolumeRange");
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)*v8 + 200LL))(
                  *v8,
                  a2,
                  a3,
                  a4,
                  a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v8;
}
