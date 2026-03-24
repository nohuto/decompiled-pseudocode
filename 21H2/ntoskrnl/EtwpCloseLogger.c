/*
 * XREFs of EtwpCloseLogger @ 0x140379F38
 * Callers:
 *     NtTraceEvent @ 0x14025CC60 (NtTraceEvent.c)
 *     EtwpOpenLogger @ 0x14025DB98 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AEB1C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403AF2C8 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1405A5F30 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A60A0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6548 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x14079743C (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140360770 (ExReleaseRundownProtectionCacheAwareEx.c)
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
