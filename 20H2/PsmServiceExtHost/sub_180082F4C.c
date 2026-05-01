/*
 * XREFs of sub_180082F4C @ 0x180082F4C
 * Callers:
 *     sub_180081F98 @ 0x180081F98 (sub_180081F98.c)
 *     sub_180083024 @ 0x180083024 (sub_180083024.c)
 * Callees:
 *     sub_18008299C @ 0x18008299C (sub_18008299C.c)
 */

BOOLEAN __fastcall sub_180082F4C(void *a1)
{
  sub_18008299C((__int64)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
