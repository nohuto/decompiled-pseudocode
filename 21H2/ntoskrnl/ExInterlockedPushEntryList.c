/*
 * XREFs of ExInterlockedPushEntryList @ 0x14063F2E0
 * Callers:
 *     WheapPushPendingOfflineWrapper @ 0x140A0A460 (WheapPushPendingOfflineWrapper.c)
 *     WheapTrackPendingPage @ 0x140A0A490 (WheapTrackPendingPage.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x140243164 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14024319C (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  char v6; // al
  struct _SINGLE_LIST_ENTRY *Next; // rbx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return Next;
}
