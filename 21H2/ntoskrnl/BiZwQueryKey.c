/*
 * XREFs of BiZwQueryKey @ 0x1403A7874
 * Callers:
 *     BiEnumerateSubKeys @ 0x14081287C (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140813564 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
