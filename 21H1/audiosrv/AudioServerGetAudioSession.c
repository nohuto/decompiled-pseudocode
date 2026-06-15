/*
 * XREFs of AudioServerGetAudioSession @ 0x180046B30
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046C04 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAudioSession(void *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-78h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v12[16]; // [rsp+70h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+80h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v12, a1);
  v10 = 0LL;
  v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v4,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v5[1],
    v6,
    (struct _TP_TIMER *)L"AudioServerGetAudioSession");
  v7 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)a1 + 40LL))(a1, &v10);
  v8 = v7;
  if ( !v7 )
    *a2 = v10;
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 0xBBAu, v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v13);
  return v8;
}
