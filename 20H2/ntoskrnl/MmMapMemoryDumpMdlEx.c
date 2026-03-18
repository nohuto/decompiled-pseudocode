/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x140382F90
 * Callers:
 *     PopCreateDumpMdl @ 0x140996BB4 (PopCreateDumpMdl.c)
 *     IopLiveDumpBufferDumpData @ 0x1409AE4FC (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140383414 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225714LL;
  MiMapMemoryDumpMdl();
  return 0LL;
}
