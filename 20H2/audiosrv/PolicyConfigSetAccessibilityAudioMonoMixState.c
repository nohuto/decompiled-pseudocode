/*
 * XREFs of PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800D9880
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18005854C (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800D68F4 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800D6ABC (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 */

__int64 __fastcall PolicyConfigSetAccessibilityAudioMonoMixState(__int64 a1, unsigned int a2)
{
  struct _TP_TIMER **v4; // rax
  __int64 v5; // r8
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v4 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v4[1],
    v5,
    (struct _TP_TIMER *)L"PolicyConfigSetAccessibilityAudioMonoMixState");
  v6 = (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD))(*(_QWORD *)g_PolicyConfig + 168LL))(g_PolicyConfig, a2);
  if ( v6 >= 0 )
  {
    CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
    v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager);
    if ( v7 == 1 )
    {
      v12 = 0LL;
      if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
             g_PolicyManager,
             a1,
             &v12) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
        CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v9);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    else if ( v7 == 2 )
    {
      CPolicyConfig::DisconnectAllRenderEndpoints(v8);
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v6;
}
