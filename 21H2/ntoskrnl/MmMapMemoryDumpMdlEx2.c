/*
 * XREFs of MmMapMemoryDumpMdlEx2 @ 0x14038C498
 * Callers:
 *     PopGetNextTable @ 0x14038C118 (PopGetNextTable.c)
 *     PopDecompressHiberBlocks @ 0x140A4CD9C (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140A4E0E0 (PopHiberCheckResume.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14038C4CC (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  MiMapMemoryDumpMdl();
  return 0LL;
}
