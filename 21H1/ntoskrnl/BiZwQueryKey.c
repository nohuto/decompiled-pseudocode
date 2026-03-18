/*
 * XREFs of BiZwQueryKey @ 0x1403980A8
 * Callers:
 *     BiEnumerateSubKeys @ 0x14076ED38 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140770010 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1403F25F0 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
