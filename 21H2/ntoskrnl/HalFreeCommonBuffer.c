/*
 * XREFs of HalFreeCommonBuffer @ 0x140382230
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x140295F20 (MmFreeContiguousMemory.c)
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
