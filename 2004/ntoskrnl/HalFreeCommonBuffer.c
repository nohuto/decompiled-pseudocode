/*
 * XREFs of HalFreeCommonBuffer @ 0x14037FD70
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x140337010 (MmFreeContiguousMemory.c)
 */

void __stdcall HalFreeCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PHYSICAL_ADDRESS LogicalAddress,
        PVOID VirtualAddress,
        BOOLEAN CacheEnabled)
{
  MmFreeContiguousMemory(VirtualAddress);
}
