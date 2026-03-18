/*
 * XREFs of BiZwDeleteValueKey @ 0x1403A7894
 * Callers:
 *     BiDeleteRegistryValue @ 0x140812318 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
