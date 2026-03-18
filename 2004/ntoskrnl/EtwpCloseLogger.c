/*
 * XREFs of EtwpCloseLogger @ 0x140377E94
 * Callers:
 *     NtTraceEvent @ 0x14026C620 (NtTraceEvent.c)
 *     EtwpOpenLogger @ 0x14026D558 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A68BC (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403A7068 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1405A0A60 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A0BD0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A1078 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x14077F77C (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

_QWORD *__fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  _QWORD *result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
