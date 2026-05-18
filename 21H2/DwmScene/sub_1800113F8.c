/*
 * XREFs of sub_1800113F8 @ 0x1800113F8
 * Callers:
 *     sub_18011EA6C @ 0x18011EA6C (sub_18011EA6C.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 */

__int64 __fastcall sub_1800113F8(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  sub_18001277C(a1, a2);
  return a1;
}
