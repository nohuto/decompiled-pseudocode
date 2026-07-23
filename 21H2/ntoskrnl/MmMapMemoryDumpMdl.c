/*
 * XREFs of MmMapMemoryDumpMdl @ 0x140538D90
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140383BB4 (MiMapMemoryDumpMdl.c)
 */

char __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140C4E770 << 25 >> 16, a2, a1, 0);
}
