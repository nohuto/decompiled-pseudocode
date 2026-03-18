/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x1402EF7D0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140348CA0 (MiCoalesceFreeLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x14052CC78 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1406262A0 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075AC78 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C0540 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C1384 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408CD18C (MmRelocatePfnList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

char __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al
  __int64 v5; // rcx

  v2 = a1 + 192;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 192), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery(v5);
  return result;
}
