/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x14026B1A8
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403EDD44 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403EE0F8 (MiMarkHugePfnGood.c)
 *     MiGetChannelInformation @ 0x14061D10C (MiGetChannelInformation.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075D0A8 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C1890 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C298C (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408D8178 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
}
