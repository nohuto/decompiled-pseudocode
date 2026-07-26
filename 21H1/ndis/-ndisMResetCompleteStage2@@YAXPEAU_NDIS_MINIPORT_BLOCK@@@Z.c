/*
 * XREFs of ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00701C0
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F2F0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMResetComplete @ 0x1C0071560 (NdisMResetComplete.c)
 * Callees:
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015B28 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001970C (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019AC0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C006DE80 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 */

void __fastcall ndisMResetCompleteStage2(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int Flags; // ecx
  _NDIS_OPEN_BLOCK *ResetOpen; // rax
  void *v4; // rsi
  void *v5; // rcx
  struct _KEVENT *ResetCompletedEvent; // rcx
  void *v7; // [rsp+20h] [rbp-49h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-39h] BYREF

  v7 = 0LL;
  Flags = a1->Flags;
  if ( (Flags & 0x40000) != 0 )
  {
    ResetOpen = a1->ResetOpen;
    a1->ResetOpen = 0LL;
    v7 = ResetOpen;
  }
  else
  {
    ndisMDeQueueWorkItem(a1, NdisWorkItemResetInProgress, (_SINGLE_LIST_ENTRY **)&v7, 0LL);
    Flags = a1->Flags;
  }
  a1->Flags = Flags & 0xFFDFFFFF;
  ndisMRestoreOpenHandlers(a1, 1u);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.StatusBuffer = &a1->ResetStatus;
  StatusIndication.SourceHandle = a1;
  StatusIndication.StatusCode = 1073807365;
  StatusIndication.StatusBufferSize = 4;
  NdisMIndicateStatusEx(a1, &StatusIndication);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  v4 = v7;
  a1->MiniportThread = KeGetCurrentThread();
  if ( v4 )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    (*((void (__fastcall **)(_QWORD, _QWORD))v4 + 25))(*((_QWORD *)v4 + 4), (unsigned int)a1->ResetStatus);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v5 = v7;
    a1->MiniportThread = KeGetCurrentThread();
    ndisMDereferenceOpenLocked((__int64)v5, 8u);
  }
  ResetCompletedEvent = a1->ResetCompletedEvent;
  if ( ResetCompletedEvent )
    KeSetEvent(ResetCompletedEvent, 0, 0);
}
