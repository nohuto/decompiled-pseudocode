/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800E0800
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009DFA0 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
