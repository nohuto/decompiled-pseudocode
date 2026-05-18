/*
 * XREFs of sub_180070374 @ 0x180070374
 * Callers:
 *     sub_18007F580 @ 0x18007F580 (sub_18007F580.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 */

_QWORD *__fastcall sub_180070374(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001277C(a2, a1 + 80);
  return a2;
}
