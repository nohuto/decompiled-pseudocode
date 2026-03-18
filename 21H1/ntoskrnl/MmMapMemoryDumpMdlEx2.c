/*
 * XREFs of MmMapMemoryDumpMdlEx2 @ 0x140380EC0
 * Callers:
 *     PopGetNextTable @ 0x140380B50 (PopGetNextTable.c)
 *     PopDecompressHiberBlocks @ 0x14098D8EC (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140993F10 (PopHiberCheckResume.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140380EF4 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  MiMapMemoryDumpMdl();
  return 0LL;
}
