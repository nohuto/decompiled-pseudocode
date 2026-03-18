/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x1402D4B48
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403ECC84 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403ED038 (MiMarkHugePfnGood.c)
 *     MiGetChannelInformation @ 0x14066282C (MiGetChannelInformation.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075AC78 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C0540 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408D6E28 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
}
