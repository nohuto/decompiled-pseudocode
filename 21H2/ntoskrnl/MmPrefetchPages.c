/*
 * XREFs of MmPrefetchPages @ 0x14061AB60
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x14061C354 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
