/*
 * XREFs of sub_1800703A4 @ 0x1800703A4
 * Callers:
 *     sub_18007AF2C @ 0x18007AF2C (sub_18007AF2C.c)
 *     sub_18007F580 @ 0x18007F580 (sub_18007F580.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 */

_QWORD *__fastcall sub_1800703A4(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001277C(a2, a1 + 112);
  return a2;
}
