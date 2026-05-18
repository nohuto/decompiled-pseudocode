/*
 * XREFs of sub_1800496BC @ 0x1800496BC
 * Callers:
 *     sub_180049844 @ 0x180049844 (sub_180049844.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800496BC(_QWORD *a1, __int64 a2, unsigned int a3)
{
  *a1 = a2;
  a1[1] = a2 + a3;
  return a1;
}
