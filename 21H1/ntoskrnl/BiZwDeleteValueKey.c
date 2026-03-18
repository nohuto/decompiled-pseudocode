/*
 * XREFs of BiZwDeleteValueKey @ 0x140398128
 * Callers:
 *     BiDeleteRegistryValue @ 0x14076D9F4 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
