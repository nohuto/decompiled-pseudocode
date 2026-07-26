/*
 * XREFs of ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C011734C
 * Callers:
 *     ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00AC640 (-ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C000AE90 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C000AEE8 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000AF04 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00F9620 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

__int64 __fastcall ndisMRawInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  unsigned __int64 Oid; // rsi
  _NDIS_M_DRIVER_BLOCK *v6; // rax
  NDISWATCHDOG__ *m_ptr; // rcx
  struct NDISWATCHDOG__ *v8; // rax
  int v9; // eax
  unsigned int v10; // edi

  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v6 = DriverHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xF2u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      a2->DATA.QUERY_INFORMATION.Oid);
    v6 = a1->DriverHandle;
  }
  if ( v6->HookType != NdisMiniportHookDriverTypeWdi )
  {
    m_ptr = a1->PendingOidWatchdog.m_ptr;
    if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    {
      v8 = WatchdogFromHandle(m_ptr);
      ndisWaitForKernelObject(v8 + 42);
      m_ptr = a1->PendingOidWatchdog.m_ptr;
    }
    ndisArmWatchdog(
      m_ptr,
      a1,
      35,
      DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler,
      0x88B8u,
      Oid);
  }
  if ( ndisIsMiniportVerified(DriverHandle) )
    v9 = (*((__int64 (__fastcall **)(void *, struct _NDIS_OID_REQUEST *, struct _NDIS_MINIPORT_BLOCK *, void *, int (__fastcall *)(void *, _NDIS_OID_REQUEST *)))ndisVerifierNdisDispatch
          + 3))(
           a1->MiniportAdapterContext,
           a2,
           a1,
           a1->VerifierContext,
           DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler);
  else
    v9 = DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler(a1->MiniportAdapterContext, a2);
  v10 = v9;
  if ( v9 != 259 && a1->DriverHandle->HookType != NdisMiniportHookDriverTypeWdi )
    ndisDisarmWatchdogAsync(a1->PendingOidWatchdog.m_ptr);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xF3u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      Oid,
      v10);
  return v10;
}
