/*
 * XREFs of sub_18007041C @ 0x18007041C
 * Callers:
 *     sub_18007AF2C @ 0x18007AF2C (sub_18007AF2C.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 */

_QWORD *__fastcall sub_18007041C(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001277C(a2, a1 + 176);
  return a2;
}
