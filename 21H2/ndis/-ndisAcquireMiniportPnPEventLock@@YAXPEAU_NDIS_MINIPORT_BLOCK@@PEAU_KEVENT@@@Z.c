/*
 * XREFs of ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x1C0019BF8
 * Callers:
 *     ?ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C010A508 (-ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012B8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisAcquireMiniportPnPEventLock(struct _NDIS_MINIPORT_BLOCK *a1, PRKEVENT Event)
{
  unsigned int SyncFlags; // eax
  KIRQL v5; // dl
  _KEVENT *PnPEventLockEvent; // rdi
  KIRQL v7; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  KeInitializeEvent(Event, NotificationEvent, 0);
  while ( 1 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    SyncFlags = a1->SyncFlags;
    if ( (SyncFlags & 8) == 0 )
      break;
    PnPEventLockEvent = a1->PnPEventLockEvent;
    if ( !PnPEventLockEvent )
    {
      KeClearEvent(Event);
      a1->PnPEventLockEvent = Event;
      PnPEventLockEvent = Event;
    }
    v7 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
    ndisWaitForKernelObject(PnPEventLockEvent);
  }
  a1->MiniportThread = 0LL;
  v5 = NewIrql;
  a1->SyncFlags = SyncFlags | 8;
  KeReleaseSpinLock(&a1->Lock, v5);
}
