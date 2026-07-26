/*
 * XREFs of ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C002D334
 * Callers:
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002D0B4 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C002D210 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C00A4AE0 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C002D4F0 (ndisAllocateFreeSlotFromDescriptor.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00364E8 (ndisAllocatePerProcessorPageDescriptor.c)
 */

struct PNDIS_PER_PROCESSOR_SLOT__ *__fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rcx
  KIRQL v4; // si
  struct _LIST_ENTRY **v5; // rcx
  __int64 FreeSlotFromDescriptor; // rbx
  __int64 PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *v10; // rax

  if ( (a1 & 0xFE000000) == 0xFE000000 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  Flink = ndisPerProcessorDescriptorList.Flink;
  v4 = v2;
  while ( Flink != &ndisPerProcessorDescriptorList )
  {
    FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(Flink, a1);
    if ( FreeSlotFromDescriptor )
      goto LABEL_5;
    Flink = *v5;
  }
  FreeSlotFromDescriptor = 0LL;
LABEL_5:
  if ( !FreeSlotFromDescriptor )
  {
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, a1);
      v10 = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v9->Flink = ndisPerProcessorDescriptorList.Flink;
      v9->Blink = &ndisPerProcessorDescriptorList;
      v10->Blink = v9;
      ndisPerProcessorDescriptorList.Flink = v9;
    }
  }
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v4);
  return (struct PNDIS_PER_PROCESSOR_SLOT__ *)FreeSlotFromDescriptor;
}
