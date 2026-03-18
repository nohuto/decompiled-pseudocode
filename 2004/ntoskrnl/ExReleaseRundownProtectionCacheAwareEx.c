/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0
 * Callers:
 *     EtwpTraceMessageVa @ 0x14026CF20 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1402FFBB0 (EtwpCancelPendingStackwalkApcs.c)
 *     RawEndOperation @ 0x140311D78 (RawEndOperation.c)
 *     EtwpFailLogging @ 0x14036A514 (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x140377E94 (EtwpCloseLogger.c)
 *     EtwpFinalizePendingApc @ 0x1405A16DC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1770 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A194C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1405A1C10 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x1405A7840 (EtwpCompressionProc.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     EtwInitialize @ 0x14079A310 (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
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
