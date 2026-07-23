/*
 * XREFs of BiZwDeleteKey @ 0x14038D198
 * Callers:
 *     BiDeleteKey @ 0x140779B20 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
