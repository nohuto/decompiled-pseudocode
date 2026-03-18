/*
 * XREFs of BiZwDeleteKey @ 0x140389618
 * Callers:
 *     BiDeleteKey @ 0x140764FC0 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1403F3D90 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
