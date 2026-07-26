/*
 * XREFs of _lambda_9fb80ce725682629beaa04a7bfe2f579_::_lambda_invoker_cdecl_ @ 0x1C010AE80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall lambda_9fb80ce725682629beaa04a7bfe2f579_::_lambda_invoker_cdecl_(Ndis::BindState *this)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx

  Miniport = this->Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetBinding(
         this,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00E434B >= 4u
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v3,
      0x1Cu,
      0xFu,
      (struct _GUID *)&WPP_f6ee4bdc0fdd3b51b82310b53c412aee_Traceguids,
      0LL,
      0LL);
  }
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine, v3);
}
