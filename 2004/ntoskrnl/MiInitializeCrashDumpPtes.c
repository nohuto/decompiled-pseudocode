/*
 * XREFs of MiInitializeCrashDumpPtes @ 0x140A8F704
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiInitializeCrashDumpPtes(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4ED40, 0x20u, a3, a4);
  qword_140C4E530 = result;
  return result;
}
