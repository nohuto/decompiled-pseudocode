/*
 * XREFs of _RtlInterlockedPushEntrySList@8 @ 0x4B2C2130
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

PSLIST_ENTRY __stdcall RtlInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  struct _SINGLE_LIST_ENTRY *Next; // esi

  RtlAcquireSRWLockExclusive((char *)&RtlpSlistLockedAltLocks + 4 * (((unsigned int)ListHead >> 2) & 0x1F));
  Next = ListHead->Next.Next;
  ListEntry->Next = (_SINGLE_LIST_ENTRY *)ListHead->Next;
  ++ListHead->Depth;
  ListHead->Next.Next = ListEntry;
  RtlReleaseSRWLockExclusive((char *)&RtlpSlistLockedAltLocks + 4 * (((unsigned int)ListHead >> 2) & 0x1F));
  return Next;
}
