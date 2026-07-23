/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x1402749A0
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403F39F4 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     MiGetChannelInformation @ 0x14067D1AC (MiGetChannelInformation.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F928 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408DB8D8 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
}
