/*
 * XREFs of MiInitializeCrashDumpPtes @ 0x140A95404
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 */

ULONG_PTR MiInitializeCrashDumpPtes()
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4EDC0, 0x20u);
  qword_140C4E5B0 = result;
  return result;
}
