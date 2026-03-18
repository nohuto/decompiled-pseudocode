/*
 * XREFs of BiZwOpenKey @ 0x1403987F8
 * Callers:
 *     BiCreateKey @ 0x140771830 (BiCreateKey.c)
 *     BiOpenKey @ 0x140772024 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
