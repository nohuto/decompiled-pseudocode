/*
 * XREFs of MmPrefetchPages @ 0x14063EC90
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x14063ECA8 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
