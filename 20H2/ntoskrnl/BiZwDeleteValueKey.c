/*
 * XREFs of BiZwDeleteValueKey @ 0x14039AD7C
 * Callers:
 *     BiDeleteRegistryValue @ 0x14077E404 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
