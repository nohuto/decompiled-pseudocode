/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x14022B0E0
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406FA730 (MmPrefetchPagesEx.c)
 *     PfpPfnPrioRequest @ 0x140739F40 (PfpPfnPrioRequest.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408525D8 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140978C9C (MmRelocatePfnList.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  v2 = a1 + 192;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 192), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
