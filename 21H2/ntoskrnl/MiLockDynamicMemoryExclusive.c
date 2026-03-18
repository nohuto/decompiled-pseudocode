/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x140360A00
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiGetChannelInformation @ 0x1407DECE0 (MiGetChannelInformation.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408525D8 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140982150 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
}
