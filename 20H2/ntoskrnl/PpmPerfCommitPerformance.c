/*
 * XREFs of PpmPerfCommitPerformance @ 0x14039AA20
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14030F2CC (PpmPerfControlExecuteAction.c)
 */

bool PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction((void (__fastcall *)(__int64 (__fastcall *)()))PpmPerfControlCommitPerformance);
}
