/*
 * XREFs of MiCacheImageSymbols @ 0x1407619F4
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiCacheImageSymbols(int a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 6, (int)&v2);
}
