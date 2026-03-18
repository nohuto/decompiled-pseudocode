/*
 * XREFs of MmPrefetchPages @ 0x140658090
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x1406580A8 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists);
}
