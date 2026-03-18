/*
 * XREFs of MmMapMemoryDumpMdl @ 0x140533680
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140381734 (MiMapMemoryDumpMdl.c)
 */

char __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140C4E530 << 25 >> 16, a2, a1, 0);
}
