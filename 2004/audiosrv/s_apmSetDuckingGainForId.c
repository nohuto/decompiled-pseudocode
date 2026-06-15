/*
 * XREFs of s_apmSetDuckingGainForId @ 0x1800F8C80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetDuckingGainForId(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  struct _TP_TIMER **v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned int v8; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v5[1], v6, (struct _TP_TIMER *)L"s_apmSetDuckingGainForId");
  if ( (unsigned int)IsApmDuckingGainForIdSupported() )
  {
    v11 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v11) >= 0 )
    {
      v7 = *(_QWORD *)g_PolicyManager;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(v7 + 144))(g_PolicyManager, v8, a2);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 144LL))(
           g_PolicyManager,
           0LL,
           a2);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v4;
}
