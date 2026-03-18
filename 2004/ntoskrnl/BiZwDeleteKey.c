/*
 * XREFs of BiZwDeleteKey @ 0x14038A688
 * Callers:
 *     BiDeleteKey @ 0x140766980 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1403F5020 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
