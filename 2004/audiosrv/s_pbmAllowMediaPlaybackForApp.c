/*
 * XREFs of s_pbmAllowMediaPlaybackForApp @ 0x1800F9220
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmAllowMediaPlaybackForApp(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  unsigned int v9; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"s_pbmAllowMediaPlaybackForApp");
  if ( (unsigned int)IsPbmAllowMediaPlaybackForAppSupported() )
  {
    v9 = PbmAllowMediaPlaybackForApp(a1, a2, a3);
LABEL_5:
    v6 = v9;
    goto LABEL_6;
  }
  if ( g_PolicyManager )
  {
    v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 184LL))(
           g_PolicyManager,
           a2);
    goto LABEL_5;
  }
LABEL_6:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
