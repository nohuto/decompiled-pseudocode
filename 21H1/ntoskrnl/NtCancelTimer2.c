/*
 * XREFs of NtCancelTimer2 @ 0x140321D60
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1402424F4 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtCancelTimer2(void *a1)
{
  return ExpSetTimer2(a1, 0LL, 0LL, 0LL);
}
