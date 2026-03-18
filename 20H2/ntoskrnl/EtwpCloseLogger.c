/*
 * XREFs of EtwpCloseLogger @ 0x140379D38
 * Callers:
 *     EtwpLogKernelEvent @ 0x140226150 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x140244D40 (NtTraceEvent.c)
 *     EtwpOpenLogger @ 0x140245C78 (EtwpOpenLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A9378 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403A9B28 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1405A4500 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A4670 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A4B18 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x14078D08C (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
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
