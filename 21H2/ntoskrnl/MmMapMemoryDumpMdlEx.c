/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x14038C0F0
 * Callers:
 *     PopCreateDumpMdl @ 0x140A4BE04 (PopCreateDumpMdl.c)
 *     IopLiveDumpBufferDumpData @ 0x140A6581C (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14038C4CC (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225714LL;
  MiMapMemoryDumpMdl();
  return 0LL;
}
