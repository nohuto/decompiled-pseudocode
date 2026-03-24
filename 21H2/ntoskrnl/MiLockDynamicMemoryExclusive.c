/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x1402AC3F4
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403F39F4 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     MiGetChannelInformation @ 0x14069256C (MiGetChannelInformation.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F768 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C4E90 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C5F8C (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408DB778 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
}
