/*
 * XREFs of ndisIfDetachMiniportBlock @ 0x1C00B1FB0
 * Callers:
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x1C0126900 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 * Callees:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00189B4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A5E8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE920 (NdisFreeRefCount.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisIfDetachMiniportBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // rsi
  KIRQL v3; // al
  KIRQL v4; // al
  KIRQL v5; // bl
  ULONG_PTR MpRefCountTracker; // rcx
  KIRQL v7; // bl
  struct _KEVENT Event; // [rsp+20h] [rbp-28h] BYREF

  IfBlock = a1->IfBlock;
  v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  IfBlock->MiniportAvailable = 0;
  a1->IfBlockAvailable = 0;
  KeReleaseSpinLock(&SpinLock, v3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  a1->IfBlockPointerRefZeroEvent = &Event;
  ndisMDereferenceIfBlock(a1, MPIFREF_NUMBER_OF_TAGS|MPIFREF_QUERYOBJ|0xE0);
  ndisWaitForKernelObject(&Event);
  a1->IfBlockPointerRefZeroEvent = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  a1->IfBlock = 0LL;
  v5 = v4;
  MpRefCountTracker = (ULONG_PTR)IfBlock->MpRefCountTracker;
  IfBlock->Miniport = 0LL;
  NdisFreeRefCount(MpRefCountTracker);
  IfBlock->MpRefCountTracker = 0LL;
  KeReleaseSpinLock(&SpinLock, v5);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(IfBlock, 0xCu);
  KeReleaseSpinLock(&ndisIfListLock, v7);
}
