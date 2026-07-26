/*
 * XREFs of ?ndisInitializePerProcessorSlotAllocator@@YAXXZ @ 0x1C0146258
 * Callers:
 *     NdisDllInitialize @ 0x1C0036470 (NdisDllInitialize.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00364E8 (ndisAllocatePerProcessorPageDescriptor.c)
 */

void ndisInitializePerProcessorSlotAllocator(void)
{
  _LIST_ENTRY *PerProcessorPageDescriptor; // rax
  _LIST_ENTRY *Flink; // rcx

  KeInitializeSpinLock(&ndisPerProcessorDescriptorLock);
  qword_1C00E5DF0 = (__int64)&ndisPerProcessorDescriptorList;
  ndisPerProcessorDescriptorList.Flink = &ndisPerProcessorDescriptorList;
  PerProcessorPageDescriptor = (_LIST_ENTRY *)ndisAllocatePerProcessorPageDescriptor();
  if ( PerProcessorPageDescriptor )
  {
    Flink = ndisPerProcessorDescriptorList.Flink;
    if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
      __fastfail(3u);
    PerProcessorPageDescriptor->Flink = ndisPerProcessorDescriptorList.Flink;
    PerProcessorPageDescriptor->Blink = &ndisPerProcessorDescriptorList;
    Flink->Blink = PerProcessorPageDescriptor;
    ndisPerProcessorDescriptorList.Flink = PerProcessorPageDescriptor;
  }
}
