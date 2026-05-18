/*
 * XREFs of sub_18006AB4C @ 0x18006AB4C
 * Callers:
 *     sub_18007565C @ 0x18007565C (sub_18007565C.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 */

_QWORD *__fastcall sub_18006AB4C(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001269C(a2, a1 + 176);
  return a2;
}
