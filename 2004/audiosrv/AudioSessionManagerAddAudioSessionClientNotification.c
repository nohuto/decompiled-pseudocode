/*
 * XREFs of AudioSessionManagerAddAudioSessionClientNotification @ 0x1800D0ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800CED10 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 */

__int64 __fastcall AudioSessionManagerAddAudioSessionClientNotification(CAudioSessionManager ***a1)
{
  CAudioSessionManager **v1; // rbx
  struct _TP_TIMER **v2; // rax
  __int64 v3; // r8
  int v4; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  v2 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v2[1],
    v3,
    (struct _TP_TIMER *)L"AudioSessionManagerAddAudioSessionClientNotification");
  if ( (*(unsigned int (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v1[1] + 112LL))(v1[1]) )
  {
    v4 = -2147024891;
LABEL_4:
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddAudioSessionClientNotification", 2178, v4);
    goto LABEL_5;
  }
  v4 = CAudioSessionManager::AddAudioSessionClientNotification(*v1, v1[1]);
  if ( v4 < 0 )
    goto LABEL_4;
LABEL_5:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v4;
}
