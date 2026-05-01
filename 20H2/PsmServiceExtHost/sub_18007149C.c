/*
 * XREFs of sub_18007149C @ 0x18007149C
 * Callers:
 *     sub_180014F00 @ 0x180014F00 (sub_180014F00.c)
 * Callees:
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 */

__int64 __fastcall sub_18007149C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a1 + 144;
  sub_180071A28(a1, 0, a1 + 144, 67, (__int64)sub_1800714F0, 2LL);
  return sub_180071AA0(a2, v2);
}
