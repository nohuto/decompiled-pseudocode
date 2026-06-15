/*
 * XREFs of AudioSessionManagerDeleteVolumeDuckNotification @ 0x1800D0340
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerDeleteVolumeDuckNotification(__int64 a1, __int64 a2)
{
  signed int v3; // ebx
  struct _TP_TIMER **v4; // rax
  __int64 v5; // r8
  RPC_STATUS v6; // eax
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int Pid; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0;
  v4 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v4[1],
    v5,
    (struct _TP_TIMER *)L"AudioSessionManagerDeleteVolumeDuckNotification");
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v6 )
  {
    if ( v6 > 0 )
    {
      v3 = (unsigned __int16)v6 | 0x80070000;
      goto LABEL_7;
    }
  }
  else
  {
    if ( !g_DuckingManager )
      goto LABEL_9;
    v6 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, _QWORD, __int64))(*(_QWORD *)g_DuckingManager + 40LL))(
           g_DuckingManager,
           Pid,
           a2);
  }
  v3 = v6;
LABEL_7:
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerDeleteVolumeDuckNotification", 2230, v3);
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v3;
}
