/*
 * XREFs of MmMapMemoryDumpMdl @ 0x140538B50
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x140383A04 (MiMapMemoryDumpMdl.c)
 */

char __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140C4E730 << 25 >> 16, a2, a1, 0);
}
