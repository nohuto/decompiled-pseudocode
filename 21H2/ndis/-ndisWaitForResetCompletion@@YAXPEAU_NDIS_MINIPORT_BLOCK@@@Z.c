/*
 * XREFs of ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015E08
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014E7C (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137C18 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWaitForResetCompletion(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v2; // zf
  KIRQL v3; // dl
  KIRQL v4; // dl
  struct _KEVENT Event; // [rsp+20h] [rbp-28h] BYREF
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  NewIrql = 0;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  while ( 1 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( !a1->LockAcquired )
      break;
    v4 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    KeStallExecutionProcessor(1u);
  }
  v2 = (a1->Flags & 0x200000) == 0;
  a1->LockAcquired = 1;
  if ( !v2 )
    a1->ResetCompletedEvent = &Event;
  v3 = NewIrql;
  a1->LockThread = 0LL;
  a1->MiniportThread = 0LL;
  a1->LockAcquired = 0;
  KeReleaseSpinLock(&a1->Lock, v3);
  if ( a1->ResetCompletedEvent )
    ndisWaitForKernelObject(&Event);
  a1->ResetCompletedEvent = 0LL;
}
