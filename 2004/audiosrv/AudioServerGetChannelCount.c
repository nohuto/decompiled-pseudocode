/*
 * XREFs of AudioServerGetChannelCount @ 0x1800085C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetChannelCount(__int64 a1, __int64 a2)
{
  GUID v4; // xmm0
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-78h] BYREF
  GUID v10; // [rsp+68h] [rbp-40h]
  GUID v11; // [rsp+78h] [rbp-30h]
  GUID v12; // [rsp+88h] [rbp-20h] BYREF

  if ( a1 )
    v4 = *(GUID *)(a1 + 280);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v10 = v4;
  v11 = v4;
  v12 = v4;
  EtwEventActivityIdControl(4LL, &v12);
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v5,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetChannelCount", 0xD70u, v6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v12);
  return v7;
}
