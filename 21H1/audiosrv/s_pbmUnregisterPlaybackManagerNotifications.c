/*
 * XREFs of s_pbmUnregisterPlaybackManagerNotifications @ 0x1800F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmUnregisterPlaybackManagerNotifications(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v8,
    (struct _TP_TIMER *)L"s_pbmUnregisterPlaybackManagerNotifications");
  if ( (unsigned int)IsPbmUnregisterPlaybackManagerNotificationsSupported() )
  {
    v6 = PbmUnregisterPlaybackManagerNotifications(a1, a2, a3);
  }
  else if ( !a2 && g_PolicyManager )
  {
    v14 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v14);
    v10 = v14;
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 336LL))(v14);
      v10 = v14;
      v6 = v11;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
