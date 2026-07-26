/*
 * XREFs of ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00978A8
 * Callers:
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C0097A10 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     NdisUnbindAdapter @ 0x1C00988A0 (NdisUnbindAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDCB0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01231D4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisUnbindAdapterInner(struct _NDIS_OPEN_BLOCK *a1)
{
  int v2; // edx
  char v3[160]; // [rsp+40h] [rbp-A8h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x36u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
  Ndis::BindEngine::BeginPolicyUpdates(&a1->MiniportHandle->BindEngine);
  if ( Ndis::BindState::SetBinding(&a1->Bind->BindState, BindingDisabled, Reason_DriverRejectedBinding) )
  {
    memset(v3, 0, sizeof(v3));
    if ( (unsigned __int8)byte_1C00E434B >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v3);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v2,
          0x1Cu,
          0x37u,
          (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
          *(unsigned __int16 **)&v3[8],
          *(_QWORD *)v3);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->MiniportHandle->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->MiniportHandle->BindEngine, RunAsynchronous, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x38u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
}
