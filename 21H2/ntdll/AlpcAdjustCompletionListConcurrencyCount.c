/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800E0950
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009E7D0 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
