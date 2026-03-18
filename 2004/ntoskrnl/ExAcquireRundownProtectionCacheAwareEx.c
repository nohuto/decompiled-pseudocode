/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x1402FEF90
 * Callers:
 *     EtwpOpenLogger @ 0x14026D558 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     RawBeginOperation @ 0x1402FEF58 (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x14036A514 (EtwpFailLogging.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1770 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A194C (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x1405A77F0 (EtwpCompressionDpc.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwInitialize @ 0x14079A310 (EtwInitialize.c)
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
