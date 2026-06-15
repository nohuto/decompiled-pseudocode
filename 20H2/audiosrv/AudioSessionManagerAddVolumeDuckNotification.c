/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x180046950
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(__int64 a1, __int64 a2, __int64 a3)
{
  signed int v5; // ebx
  struct _TP_TIMER **v6; // rax
  __int64 v7; // r8
  RPC_STATUS v8; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int Pid; // [rsp+98h] [rbp+20h] BYREF

  v5 = 0;
  v6 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v6[1],
    v7,
    (struct _TP_TIMER *)L"AudioSessionManagerAddVolumeDuckNotification");
  v8 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( !v8 )
  {
    if ( !g_DuckingManager )
      goto LABEL_7;
    v8 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, __int64, _QWORD, __int64))(*(_QWORD *)g_DuckingManager
                                                                                            + 32LL))(
           g_DuckingManager,
           a3,
           Pid,
           a2);
    goto LABEL_4;
  }
  if ( v8 <= 0 )
  {
LABEL_4:
    v5 = v8;
    goto LABEL_5;
  }
  v5 = (unsigned __int16)v8 | 0x80070000;
LABEL_5:
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddVolumeDuckNotification", 0x8A2u, v5);
LABEL_7:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v5;
}
