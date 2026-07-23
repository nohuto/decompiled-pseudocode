/*
 * XREFs of BiZwQueryKey @ 0x14039B718
 * Callers:
 *     BiEnumerateSubKeys @ 0x1407836E8 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x1407849C0 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
