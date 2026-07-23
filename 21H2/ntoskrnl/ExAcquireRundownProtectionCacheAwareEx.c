/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x1402A58B0
 * Callers:
 *     EtwpOpenLogger @ 0x14027F6C8 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     RawBeginOperation @ 0x1402A586C (RawBeginOperation.c)
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     EtwpFailLogging @ 0x14036CCD4 (EtwpFailLogging.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6E70 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A704C (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x1405ACF80 (EtwpCompressionDpc.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwInitialize @ 0x140798F94 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x14093FAA0 (PeriodicCaptureStateTimerCallback.c)
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
