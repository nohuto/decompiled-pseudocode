/*
 * XREFs of MiCacheImageSymbols @ 0x1407465A0
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140745004 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiCacheImageSymbols(int a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 6, (int)&v2);
}
