/*
 * XREFs of ObpLookupDirectoryEntry @ 0x1407962FC
 * Callers:
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x1406F1554 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(struct _DMA_ADAPTER *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0LL, 0, a4);
}
