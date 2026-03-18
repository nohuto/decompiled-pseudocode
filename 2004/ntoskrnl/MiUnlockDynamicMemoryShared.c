/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x140273450
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140319960 (MiCoalesceFreeLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x14052D2C8 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1405F0C80 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075D0A8 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C1890 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C26D4 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408CE4DC (MmRelocatePfnList.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

char __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al

  v2 = a1 + 192;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 192), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
