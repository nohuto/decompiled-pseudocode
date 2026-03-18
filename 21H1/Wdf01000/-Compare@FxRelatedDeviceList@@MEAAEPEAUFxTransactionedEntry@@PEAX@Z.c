/*
 * XREFs of ?Compare@FxRelatedDeviceList@@MEAAEPEAUFxTransactionedEntry@@PEAX@Z @ 0x1C0091400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxRelatedDeviceList::Compare(FxRelatedDeviceList *this, FxTransactionedEntry *Entry, _LIST_ENTRY *Data)
{
  return Entry[1].m_ListLink.Flink == Data;
}
