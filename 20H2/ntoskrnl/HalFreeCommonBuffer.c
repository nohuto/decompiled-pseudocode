/*
 * XREFs of HalFreeCommonBuffer @ 0x140381B30
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x1402619D0 (MmFreeContiguousMemory.c)
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
