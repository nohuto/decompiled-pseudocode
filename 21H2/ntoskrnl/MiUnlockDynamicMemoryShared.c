/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x14029BEF0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x1403031A0 (MiCoalesceFreeLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F930 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x140532798 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1406F2BB0 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F768 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C4E90 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C5CD4 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408D1ADC (MmRelocatePfnList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
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
