/*
 * XREFs of MmMapMemoryDumpMdlEx2 @ 0x140383B80
 * Callers:
 *     PopGetNextTable @ 0x140383810 (PopGetNextTable.c)
 *     PopDecompressHiberBlocks @ 0x140995874 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x1409998A0 (PopHiberCheckResume.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140383BB4 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  MiMapMemoryDumpMdl();
  return 0LL;
}
