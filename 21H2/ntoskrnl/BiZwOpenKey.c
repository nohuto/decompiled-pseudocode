/*
 * XREFs of BiZwOpenKey @ 0x1403A7830
 * Callers:
 *     BiCreateKey @ 0x1408036C8 (BiCreateKey.c)
 *     BiOpenKey @ 0x140813164 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
