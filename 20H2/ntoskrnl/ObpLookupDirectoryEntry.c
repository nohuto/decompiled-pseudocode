/*
 * XREFs of ObpLookupDirectoryEntry @ 0x14078BBDC
 * Callers:
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x1406B51E8 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(struct _DMA_ADAPTER *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0LL, 0, a4);
}
