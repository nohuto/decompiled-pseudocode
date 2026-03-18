/*
 * XREFs of EtwpCloseLogger @ 0x140377084
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1402D5FC0 (NtTraceEvent.c)
 *     EtwpOpenLogger @ 0x1402D6EF8 (EtwpOpenLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AA58C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403AAD38 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1405A0370 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A04E0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A0988 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140780158 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
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
