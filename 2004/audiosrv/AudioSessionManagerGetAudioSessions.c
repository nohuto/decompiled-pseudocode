/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x1800D1090
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800CF880 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(
        _QWORD *a1,
        unsigned int *a2,
        void ***a3,
        unsigned __int16 ***a4)
{
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  int AudioSessions; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v9, (struct _TP_TIMER *)L"AudioSessionManagerGetAudioSessions");
  v10 = (_QWORD *)*a1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Bu,
      (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
      *v10);
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v10[1] + 112LL))(v10[1]) )
  {
    v11 = -2147024891;
    v12 = 2080LL;
    v13 = 2147942405LL;
  }
  else
  {
    AudioSessions = CAudioSessionManager::GetAudioSessions(
                      (const unsigned __int16 **)*v10,
                      (struct IAudioProcess *)v10[1],
                      a2,
                      a3,
                      a4);
    v11 = AudioSessions;
    if ( AudioSessions >= 0 )
    {
      v11 = 0;
      goto LABEL_11;
    }
    v13 = (unsigned int)AudioSessions;
    v12 = 2082LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)v13);
LABEL_11:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
