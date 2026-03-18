/*
 * XREFs of MiLockDynamicMemoryShared @ 0x14030A6AC
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x140530C98 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1406138B0 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076B808 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C8514 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408D431C (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 192, 0LL);
}
