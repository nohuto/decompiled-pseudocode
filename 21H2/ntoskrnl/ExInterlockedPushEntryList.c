/*
 * XREFs of ExInterlockedPushEntryList @ 0x1405B7140
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14021D974 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14021DA44 (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  char v6; // al
  _SINGLE_LIST_ENTRY *Next; // rbx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return Next;
}
