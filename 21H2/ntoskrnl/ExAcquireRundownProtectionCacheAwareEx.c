/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x1403609B0
 * Callers:
 *     EtwpOpenLogger @ 0x14025DB98 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
 *     RawBeginOperation @ 0x14036096C (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x14036CB24 (EtwpFailLogging.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6C40 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A6E1C (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x1405ACD50 (EtwpCompressionDpc.c)
 *     EtwpWriteUserEvent @ 0x140627BC0 (EtwpWriteUserEvent.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     EtwInitialize @ 0x140798D94 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x14093F8D0 (PeriodicCaptureStateTimerCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v2);
  v3 = *v2;
  if ( (*v2 & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, 2 * Count + v3, v3);
    if ( v4 == v3 )
      break;
    if ( (v3 & 1) != 0 )
      return 0;
  }
  return 1;
}
