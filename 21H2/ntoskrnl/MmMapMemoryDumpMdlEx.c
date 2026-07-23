/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x140383730
 * Callers:
 *     PopCreateDumpMdl @ 0x140994BB4 (PopCreateDumpMdl.c)
 *     IopLiveDumpBufferDumpData @ 0x1409AC32C (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140383BB4 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225714LL;
  MiMapMemoryDumpMdl();
  return 0LL;
}
