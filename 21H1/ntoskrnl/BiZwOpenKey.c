/*
 * XREFs of BiZwOpenKey @ 0x140398064
 * Callers:
 *     BiCreateKey @ 0x14076F420 (BiCreateKey.c)
 *     BiOpenKey @ 0x14076FC14 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
