/*
 * XREFs of ObpLookupDirectoryEntry @ 0x14077E63C
 * Callers:
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x1406DD708 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(struct _DMA_ADAPTER *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0LL, 0, a4);
}
