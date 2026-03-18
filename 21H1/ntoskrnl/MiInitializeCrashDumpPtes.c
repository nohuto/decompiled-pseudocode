/*
 * XREFs of MiInitializeCrashDumpPtes @ 0x140A90114
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 */

ULONG_PTR MiInitializeCrashDumpPtes()
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4EE80, 32LL);
  qword_140C4E670 = result;
  return result;
}
