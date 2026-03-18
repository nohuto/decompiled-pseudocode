/*
 * XREFs of MiLockDynamicMemoryShared @ 0x140333BEC
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x14052D2C8 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1405F0C80 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075D0A8 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C1890 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C26D4 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408CE4DC (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 192, 0LL);
}
