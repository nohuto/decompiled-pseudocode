/*
 * XREFs of BiZwOpenKey @ 0x14039ACB8
 * Callers:
 *     BiCreateKey @ 0x14077FE30 (BiCreateKey.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
