/*
 * XREFs of _RtlInterlockedFlushSList@4 @ 0x4B2E4DA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

PSLIST_ENTRY __stdcall RtlInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SINGLE_LIST_ENTRY *Next; // esi

  RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)ListHead >> 2) & 0x1F));
  Next = ListHead->Next.Next;
  ListHead->Next.Next = 0;
  ListHead->Depth = 0;
  RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)ListHead >> 2) & 0x1F));
  return (PSLIST_ENTRY)Next;
}
