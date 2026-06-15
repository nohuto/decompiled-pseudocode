/*
 * XREFs of s_pbmUnregisterAppClosureNotification @ 0x1800F9A20
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmUnregisterAppClosureNotification(__int64 a1)
{
  struct _TP_TIMER **v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v2[1], v3, (struct _TP_TIMER *)L"s_pbmUnregisterAppClosureNotification");
  v4 = 0;
  if ( (unsigned int)IsPbmUnregisterAppClosureNotificationSupported() )
    v4 = PbmUnregisterAppClosureNotification(a1);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v4;
}
