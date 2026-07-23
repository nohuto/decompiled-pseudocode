/*
 * XREFs of _FirstEntrySList@4 @ 0x4B33E920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall FirstEntrySList(const SLIST_HEADER *ListHead)
{
  return (PSLIST_ENTRY)ListHead->Next.Next;
}
