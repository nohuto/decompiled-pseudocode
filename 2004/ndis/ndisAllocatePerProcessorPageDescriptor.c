/*
 * XREFs of ndisAllocatePerProcessorPageDescriptor @ 0x1C0036188
 * Callers:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C002CFD4 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     NdisAllocateRWLock @ 0x1C002D080 (NdisAllocateRWLock.c)
 *     ?ndisInitializePerProcessorSlotAllocator@@YAXXZ @ 0x1C0146234 (-ndisInitializePerProcessorSlotAllocator@@YAXXZ.c)
 * Callees:
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C0109338 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 */

char *ndisAllocatePerProcessorPageDescriptor()
{
  unsigned int v0; // edi
  char *result; // rax
  _DWORD *v2; // rbx
  unsigned int *v3; // rdx

  v0 = 0;
  if ( KeGetCurrentIrql() )
    result = (char *)ExAllocatePoolWithTag(
                       NonPagedPoolNxCacheAligned,
                       (ndisMaxNumberOfProcessors + 1) << 12,
                       0x6D61444Eu);
  else
    result = (char *)ndisAllocateNumaStripedPages();
  v2 = result;
  if ( result )
  {
    memset(result + 4096, 0, ndisMaxNumberOfProcessors << 12);
    v3 = v2 + 5;
    do
      *v3++ = ++v0 | 0xFE000000;
    while ( v0 < 0x1FF );
    v2[516] = -16777217;
    result = (char *)v2;
    v2[4] = -33554432;
  }
  return result;
}
