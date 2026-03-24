/*
 * XREFs of MmMapMemoryDumpMdlEx2 @ 0x1403839D0
 * Callers:
 *     PopGetNextTable @ 0x140383660 (PopGetNextTable.c)
 *     PopDecompressHiberBlocks @ 0x140994874 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x1409988A0 (PopHiberCheckResume.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140383A04 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  MiMapMemoryDumpMdl();
  return 0LL;
}
