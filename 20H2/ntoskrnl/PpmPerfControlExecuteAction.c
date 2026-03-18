/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14030F2CC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x14030C7D0 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x14030F2B0 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x14039AA20 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
