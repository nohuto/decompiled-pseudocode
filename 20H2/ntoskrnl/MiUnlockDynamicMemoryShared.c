/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x1402FFEF0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14034D440 (MiCoalesceFreeLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x140530C98 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1406138B0 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076B808 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C8514 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408D431C (MmRelocatePfnList.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rdi
  char result; // al
  __int64 v5; // rcx

  v2 = (signed __int64 *)(a1 + 192);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 192), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery(v5);
  return result;
}
