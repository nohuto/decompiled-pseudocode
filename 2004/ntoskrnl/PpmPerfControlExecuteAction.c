/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14033C75C
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140339FB0 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x14033C740 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x140398560 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
