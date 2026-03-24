/*
 * XREFs of ExInterlockedPushEntryList @ 0x1405B6F10
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x1402A03F4 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x1402A04C4 (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  __int64 v3; // r9
  char v7; // al
  struct _SINGLE_LIST_ENTRY *Next; // rbx

  v7 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, (__int64)ListEntry, (__int64)Lock, v3);
  Next = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v7);
  return Next;
}
