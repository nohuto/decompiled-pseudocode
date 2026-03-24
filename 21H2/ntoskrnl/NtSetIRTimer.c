/*
 * XREFs of NtSetIRTimer @ 0x1402D2C30
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140280144 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtSetIRTimer(void *a1, __int64 a2)
{
  return ExpSetTimer2(a1, a2, 0LL, 0LL);
}
