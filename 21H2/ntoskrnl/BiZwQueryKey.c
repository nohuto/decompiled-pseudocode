/*
 * XREFs of BiZwQueryKey @ 0x14039B5C8
 * Callers:
 *     BiEnumerateSubKeys @ 0x140783528 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140784800 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1403FA660 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
