/*
 * XREFs of BiZwDeleteKey @ 0x14038D048
 * Callers:
 *     BiDeleteKey @ 0x140779960 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1403FBE20 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
