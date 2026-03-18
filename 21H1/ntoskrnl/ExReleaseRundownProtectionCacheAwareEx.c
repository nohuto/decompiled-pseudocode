/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1402D68C0 (EtwpTraceMessageVa.c)
 *     RawEndOperation @ 0x1402E5028 (RawEndOperation.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x14033FFE0 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFailLogging @ 0x140369B54 (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x140377084 (EtwpCloseLogger.c)
 *     EtwpFinalizePendingApc @ 0x1405A0FEC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1080 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A125C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1405A1520 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x1405A7150 (EtwpCompressionProc.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 *     EtwInitialize @ 0x1407867D8 (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
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
