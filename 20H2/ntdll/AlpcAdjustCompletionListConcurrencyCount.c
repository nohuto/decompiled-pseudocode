/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800E0BA0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009E240 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
