/*
 * XREFs of MiInitializeCrashDumpPtes @ 0x140A93264
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiInitializeCrashDumpPtes(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4EF80, 0x20u, a3, a4);
  qword_140C4E770 = result;
  return result;
}
