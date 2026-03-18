/*
 * XREFs of PpmPerfReadFeedback @ 0x14033C740
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14033C75C (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmPerfControlExecuteAction(PpmPerfControlReadFeedback);
}
