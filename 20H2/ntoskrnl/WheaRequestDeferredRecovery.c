/*
 * XREFs of WheaRequestDeferredRecovery @ 0x1405BB660
 * Callers:
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CE560 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404CE778 (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x1404BC370 (HalRequestDeferredRecoveryServiceInterrupt.c)
 */

char __fastcall WheaRequestDeferredRecovery(signed __int64 a1, __int64 a2)
{
  signed __int64 v2; // rax

  if ( !WheaDrsInitialized || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) )
    return 0;
  *(_QWORD *)(a1 + 32) = a2;
  while ( 1 )
  {
    v2 = WheaDrsList;
    *(_QWORD *)a1 = WheaDrsList;
    if ( v2 == _InterlockedCompareExchange64(&WheaDrsList, a1, v2) )
      break;
    _mm_pause();
  }
  if ( _InterlockedIncrement(&WheaDrsItemsToProcess) == 1 )
  {
    _InterlockedExchange(&WheaPendingDrsInterrupt, 1);
    HalRequestDeferredRecoveryServiceInterrupt();
  }
  return 1;
}
