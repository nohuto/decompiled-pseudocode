/*
 * XREFs of sub_180122574 @ 0x180122574
 * Callers:
 *     sub_18011D4D8 @ 0x18011D4D8 (sub_18011D4D8.c)
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 */

_QWORD *__fastcall sub_180122574(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001277C(a2, a1 + 8);
  return a2;
}
