/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x1800C67B0
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x1800C6790 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800C6508 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

__int64 __fastcall s_afxCloseAudioEffectsWatcher(struct AudioEffectsWatcher ***a1)
{
  struct AudioEffectsWatcher **v1; // rdi
  struct AudioEffectsWatcher *v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // r8
  AudioEffectsWatcherFactory *v6; // rcx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  v3 = **a1;
  v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v4[1],
    v5,
    (struct _TP_TIMER *)L"s_afxCloseAudioEffectsWatcher");
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    AudioEffectsWatcherFactory::ReleaseWatcher(v6, v3);
    CoUninitialize();
  }
  operator delete(v1, (const struct std::nothrow_t *)8);
  *a1 = 0LL;
  return CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
}
