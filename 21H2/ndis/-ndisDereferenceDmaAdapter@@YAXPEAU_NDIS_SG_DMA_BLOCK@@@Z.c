/*
 * XREFs of ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005F9B4
 * Callers:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C0033CE4 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 *     ndisFreeSharedMemoryInternal @ 0x1C005FA7C (ndisFreeSharedMemoryInternal.c)
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C005FC70 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 *     NdisFreeSharedMemory @ 0x1C00640D0 (NdisFreeSharedMemory.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1C0064300 (NdisMDeregisterScatterGatherDma.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00808D8 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C011DEF4 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E438 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     NdisMAllocateMapRegisters @ 0x1C0136130 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0136760 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C0136870 (NdisMFreeMapRegisters.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137C18 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A28 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     PplDestroyLookasideList @ 0x1C00C5470 (PplDestroyLookasideList.c)
 */

void __fastcall ndisDereferenceDmaAdapter(PVOID P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  struct _KEVENT *v5; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)P + 1);
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF) == 1 )
  {
    v3 = *((_QWORD *)P + 3);
    if ( v3 )
    {
      *((_QWORD *)P + 16) = v3;
      (*(void (**)(void))(*(_QWORD *)(v3 + 8) + 8LL))();
      *((_QWORD *)P + 3) = 0LL;
    }
    v4 = (void *)*((_QWORD *)P + 8);
    if ( v4 )
    {
      PplDestroyLookasideList(v4);
      *((_QWORD *)P + 8) = 0LL;
    }
    v5 = (struct _KEVENT *)*((_QWORD *)P + 10);
    if ( v5 )
      KeSetEvent(v5, 0, 0);
    v1->MiniportSGDmaBlock = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, NewIrql);
}
