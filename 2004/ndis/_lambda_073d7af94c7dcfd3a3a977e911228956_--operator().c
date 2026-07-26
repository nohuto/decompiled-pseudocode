/*
 * XREFs of _lambda_073d7af94c7dcfd3a3a977e911228956_::operator() @ 0x1C003DD08
 * Callers:
 *     _lambda_073d7af94c7dcfd3a3a977e911228956_::_lambda_invoker_cdecl_ @ 0x1C003DCF0 (_lambda_073d7af94c7dcfd3a3a977e911228956_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDCB0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01230C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall lambda_073d7af94c7dcfd3a3a977e911228956_::operator()(__int64 a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  int v4; // edx
  char v5[160]; // [rsp+40h] [rbp-B8h] BYREF

  p_BindEngine = &a2->BindState.Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  if ( Ndis::BindState::SetBinding(
         &a2->BindState,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
  {
    memset(v5, 0, sizeof(v5));
    if ( (unsigned __int8)byte_1C00E448B >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v5);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v4,
          0x1Cu,
          0x73u,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          *(unsigned __int16 **)&v5[8],
          *(_QWORD *)v5);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
}
