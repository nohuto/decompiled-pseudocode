/*
 * XREFs of sub_1800830A0 @ 0x1800830A0
 * Callers:
 *     sub_18007EC44 @ 0x18007EC44 (sub_18007EC44.c)
 * Callees:
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 */

void __fastcall sub_1800830A0(__int64 a1)
{
  sub_180083A6C(a1);
  sub_18007DA58(
    *(__int64 **)(a1 + 376),
    *(__int64 **)(a1 + 384),
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800EB1C0);
}
