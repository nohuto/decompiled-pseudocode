/*
 * XREFs of PpmPerfCommitPerformance @ 0x140398560
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14033C75C (PpmPerfControlExecuteAction.c)
 */

bool PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction((void (__fastcall *)(__int64 (__fastcall *)()))PpmPerfControlCommitPerformance);
}
