/*
 * XREFs of PpmPerfCommitPerformance @ 0x140397930
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1402FFE5C (PpmPerfControlExecuteAction.c)
 */

bool PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction((void (__fastcall *)(__int64 (__fastcall *)()))PpmPerfControlCommitPerformance);
}
