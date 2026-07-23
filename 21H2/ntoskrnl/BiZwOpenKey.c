/*
 * XREFs of BiZwOpenKey @ 0x14039B6D4
 * Callers:
 *     BiCreateKey @ 0x140783DD0 (BiCreateKey.c)
 *     BiOpenKey @ 0x1407845C4 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
