/*
 * XREFs of sub_180088970 @ 0x180088970
 * Callers:
 *     sub_180084514 @ 0x180084514 (sub_180084514.c)
 * Callees:
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 */

void __fastcall sub_180088970(__int64 a1)
{
  sub_18008933C(a1);
  sub_180083328(
    *(__int64 **)(a1 + 376),
    *(__int64 **)(a1 + 384),
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800F0A90);
}
