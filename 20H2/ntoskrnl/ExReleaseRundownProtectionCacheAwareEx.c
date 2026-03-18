/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10
 * Callers:
 *     RawEndOperation @ 0x140202CD8 (RawEndOperation.c)
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x140226150 (EtwpLogKernelEvent.c)
 *     EtwpTraceMessageVa @ 0x140245640 (EtwpTraceMessageVa.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140360568 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFailLogging @ 0x14036C4F4 (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x140379D38 (EtwpCloseLogger.c)
 *     EtwpFinalizePendingApc @ 0x1405A517C (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A5210 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A53EC (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1405A56B0 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x1405AB3A0 (EtwpCompressionProc.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwInitialize @ 0x1407A9640 (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  _EX_RUNDOWN_REF *RunRefs; // r8
  signed __int64 v3; // r9
  unsigned __int64 v4; // r9

  RunRefs = (_EX_RUNDOWN_REF *)((char *)RunRef->RunRefs + RunRef->RunRefSize
                                                        * (KeGetPcr()->Prcb.Number % RunRef->Number));
  _m_prefetchw(RunRefs);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = RunRefs->Count;
      if ( (RunRefs->Count & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRefs, v3 - 2 * Count, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    RunRefs = RunRef->RunRefs;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, -Count) == Count )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}
