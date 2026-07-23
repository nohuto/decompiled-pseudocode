/*
 * XREFs of BiZwDeleteValueKey @ 0x14039B798
 * Callers:
 *     BiDeleteRegistryValue @ 0x1407823A4 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
