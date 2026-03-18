/*
 * XREFs of BiZwDeleteKey @ 0x14038C928
 * Callers:
 *     BiDeleteKey @ 0x1407759B0 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1403F9BF0 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
