/*
 * XREFs of BiZwQueryKey @ 0x14039ACFC
 * Callers:
 *     BiEnumerateSubKeys @ 0x14077F748 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140780A20 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1403F8430 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
