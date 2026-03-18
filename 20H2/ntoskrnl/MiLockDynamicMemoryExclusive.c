/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x140263AA0
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403F21AC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F2560 (MiMarkHugePfnGood.c)
 *     MiGetChannelInformation @ 0x140660ACC (MiGetChannelInformation.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076B808 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408DDFB8 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
}
