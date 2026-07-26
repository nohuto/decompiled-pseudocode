/*
 * XREFs of ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B2D30
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C4F8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0019320 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A418 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A4B0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

char __fastcall ndisIfScheduleTimestampCapabilityChangeNotification(struct _NDIS_MINIPORT_BLOCK *a1, KIRQL a2)
{
  char v4; // bl
  struct _NDIS_IF_BLOCK *v5; // rsi
  struct _NDIS_WORK_ITEM *PoolWithTag; // rax
  struct _NDIS_WORK_ITEM *v7; // r14
  KIRQL v8; // bl
  unsigned __int8 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = ndisMReferenceIfBlock(a1, 0x1Au);
  if ( v5 )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, a2);
    PoolWithTag = (struct _NDIS_WORK_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, sizeof(struct _NDIS_WORK_ITEM));
      v7->Context = v5;
      v7->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisNsiQueuedTimestampingChangeNotification;
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v5->RefCountTracker, 0xAu);
      ++v5->Ref;
      KeReleaseSpinLock(&ndisIfListLock, v8);
      ndisScheduleWorkItemInternal(v7);
      v4 = 1;
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v10);
    ndisMDereferenceIfBlock(a1, MPIFREF_TIMESTAMPING);
  }
  return v4;
}
