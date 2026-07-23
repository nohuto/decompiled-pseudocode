/*
 * XREFs of EtwpCloseLogger @ 0x140379A88
 * Callers:
 *     NtTraceEvent @ 0x14027E790 (NtTraceEvent.c)
 *     EtwpOpenLogger @ 0x14027F6C8 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AEC8C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403AF438 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1405A6160 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A62D0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6778 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  return result;
}
