/*
 * XREFs of EtwpCloseLogger @ 0x1403860B0
 * Callers:
 *     EtwpOpenLogger @ 0x14022AFF8 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AB658 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403AC3AC (EtwpCCSwapFlush.c)
 *     EtwpKernelTraceRundown @ 0x140814360 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

char __fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  char result; // al

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
