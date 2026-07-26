/*
 * XREFs of ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006F694
 * Callers:
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F2F0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0018FD0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019AC0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C005F9F8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C006DE80 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 */

__int64 __fastcall ndisMProcessResetRequested(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-98h] BYREF

  ndisMDeQueueWorkItem(a1, NdisWorkItemResetRequested, 0LL, 0LL);
  if ( (a1->PnPFlags & 0x80000) != 0 )
  {
    a1->Flags &= ~0x100000u;
    return (unsigned int)-2147418111;
  }
  else
  {
    a1->Flags = a1->Flags & 0xFFCFFFFF | 0x200000;
    ndisMSwapOpenHandlers(a1, 1u);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807364;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x11u,
        0x46u,
        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
        a1);
    if ( (byte_1C00E6081 & 4) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        v5,
        &CallMiniportReset,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
    v4 = ((__int64 (__fastcall *)(unsigned __int8 *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
           a2,
           a1->MiniportAdapterContext);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  return v4;
}
