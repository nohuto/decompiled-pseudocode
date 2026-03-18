/*
 * XREFs of BiZwDeleteKey @ 0x140395610
 * Callers:
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
