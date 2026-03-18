/*
 * XREFs of HalFreeCommonBuffer @ 0x1403993C0
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
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
