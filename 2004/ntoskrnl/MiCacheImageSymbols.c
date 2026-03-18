/*
 * XREFs of MiCacheImageSymbols @ 0x140748120
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140746B84 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiCacheImageSymbols(int a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 6, (int)&v2);
}
