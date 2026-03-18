/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0
 * Callers:
 *     EtwpFailLogging @ 0x14022A6DC (EtwpFailLogging.c)
 *     EtwpOpenLogger @ 0x14022AFF8 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     RawBeginOperation @ 0x1402D2BA0 (RawBeginOperation.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpFailLoggingOld @ 0x14041A870 (EtwpFailLoggingOld.c)
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x140631710 (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x140634F40 (EtwpCompressionDpc.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409EC2D0 (PeriodicCaptureStateTimerCallback.c)
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
