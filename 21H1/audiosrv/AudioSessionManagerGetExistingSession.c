/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x1800D10E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180002420 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800024B0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180044AE0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800CF484 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800D4B3C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetExistingSession(
        CAudioSessionManager ***a1,
        const unsigned __int16 *a2,
        struct CServerAudioSessionControl **a3)
{
  CAudioSessionManager **v3; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  RPC_STATUS v9; // eax
  int AudioSessionControl; // ebx
  int AudioSession; // eax
  struct CAudioSession *v12; // rdi
  unsigned int Pid; // [rsp+30h] [rbp-79h] BYREF
  struct CAudioSession *v15; // [rsp+38h] [rbp-71h] BYREF
  struct CServerAudioSessionControl *v16; // [rsp+40h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v18[80]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v18);
  v15 = 0LL;
  v16 = 0LL;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v6,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v8,
    (struct _TP_TIMER *)L"AudioSessionManagerGetExistingSession");
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Du, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, *v3);
  }
  v9 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  AudioSessionControl = v9;
  if ( v9 )
  {
    if ( v9 > 0 )
      AudioSessionControl = (unsigned __int16)v9 | 0x80070000;
  }
  else
  {
    AudioSessionControl = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v18, a2);
    if ( AudioSessionControl < 0 )
    {
LABEL_15:
      AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetExistingSession", 2285, AudioSessionControl);
      goto LABEL_16;
    }
    AudioSession = CAudioSessionManager::FindAudioSession(*v3, (struct CAudioSessionInstanceId *)v18, &v15);
    v12 = v15;
    AudioSessionControl = AudioSession;
    if ( AudioSession >= 0 )
    {
      AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(*v3, Pid, 0, v15, &v16);
      if ( AudioSessionControl >= 0 )
        *a3 = v16;
    }
    if ( v12 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( AudioSessionControl < 0 )
    goto LABEL_15;
LABEL_16:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v18);
  return (unsigned int)AudioSessionControl;
}
