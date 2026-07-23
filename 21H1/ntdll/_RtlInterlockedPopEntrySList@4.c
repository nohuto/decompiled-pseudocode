/*
 * XREFs of _RtlInterlockedPopEntrySList@4 @ 0x4B2C20E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

PSLIST_ENTRY __stdcall RtlInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *Next; // edi
  _SINGLE_LIST_ENTRY *v2; // ecx

  RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)ListHead >> 2) & 0x1F));
  Next = (_SLIST_ENTRY *)ListHead->Next.Next;
  if ( ListHead->Next.Next )
  {
    v2 = (_SINGLE_LIST_ENTRY *)Next->Next;
    --ListHead->Depth;
    ListHead->Next.Next = v2;
  }
  RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)ListHead >> 2) & 0x1F));
  return Next;
}
