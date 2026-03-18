/*
 * XREFs of NtSetIRTimer @ 0x14025D390
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1402D5824 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetIRTimer(void *a1)
{
  return ExpSetTimer2(a1);
}
