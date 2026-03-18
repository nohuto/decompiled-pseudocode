/*
 * XREFs of MmPrefetchPages @ 0x1406F9970
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x1406FA730 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
