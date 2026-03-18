/*
 * XREFs of MmPrefetchPages @ 0x140609B40
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x140609B58 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
