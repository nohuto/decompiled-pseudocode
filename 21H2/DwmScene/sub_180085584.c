/*
 * XREFs of sub_180085584 @ 0x180085584
 * Callers:
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 */

_QWORD *__fastcall sub_180085584(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_180020B7C(a2, a1 + 400);
  return a2;
}
