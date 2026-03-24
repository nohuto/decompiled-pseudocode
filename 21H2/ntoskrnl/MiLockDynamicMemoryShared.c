/*
 * XREFs of MiLockDynamicMemoryShared @ 0x1402A72BC
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F930 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x140532798 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1406F2BB0 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F768 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C4E90 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C5CD4 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408D1ADC (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 192, 0LL);
}
