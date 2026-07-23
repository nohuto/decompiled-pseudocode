/*
 * XREFs of MiLockDynamicMemoryShared @ 0x1402253FC
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x1405329D8 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x140709F90 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F928 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C5E34 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408D1C3C (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 192, 0LL);
}
