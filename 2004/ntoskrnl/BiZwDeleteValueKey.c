/*
 * XREFs of BiZwDeleteValueKey @ 0x1403988BC
 * Callers:
 *     BiDeleteRegistryValue @ 0x14076FE04 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1403F5080 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
