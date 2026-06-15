/*
 * XREFs of s_SetScreenReaderState @ 0x1800F7C90
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_SetScreenReaderState(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _TP_TIMER **v6; // rax
  __int64 v7; // r8
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v6 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v6[1], v7, (struct _TP_TIMER *)L"s_SetScreenReaderState");
  v8 = 0;
  if ( (unsigned int)IsScreenReaderStateSupported() )
    v8 = PbmSetScreenReaderState(a1, a2, a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v8;
}
