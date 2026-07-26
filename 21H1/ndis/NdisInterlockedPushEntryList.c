/*
 * XREFs of NdisInterlockedPushEntryList @ 0x1C00BDD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PSINGLE_LIST_ENTRY __fastcall NdisInterlockedPushEntryList(
        _SINGLE_LIST_ENTRY *a1,
        _SINGLE_LIST_ENTRY *a2,
        KSPIN_LOCK *a3)
{
  return ExInterlockedPushEntryList(a1, a2, a3);
}
