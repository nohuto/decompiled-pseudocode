/*
 * XREFs of sub_180043DEC @ 0x180043DEC
 * Callers:
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180043DEC(_QWORD *a1, __int64 a2, unsigned int a3)
{
  *a1 = a2;
  a1[1] = a2 + a3;
  return a1;
}
