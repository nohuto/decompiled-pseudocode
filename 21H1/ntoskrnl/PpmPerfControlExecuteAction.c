/*
 * XREFs of PpmPerfControlExecuteAction @ 0x1402FFE5C
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x1402FCC70 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x1402FFE40 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x140397930 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
