/*
 * XREFs of sub_18009ED9C @ 0x18009ED9C
 * Callers:
 *     sub_1800329B4 @ 0x1800329B4 (sub_1800329B4.c)
 *     sub_180032F30 @ 0x180032F30 (sub_180032F30.c)
 *     sub_180033110 @ 0x180033110 (sub_180033110.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18009ED9C(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // rax

  *a1 = a2;
  a1[2] = 1;
  a1[3] = 1;
  a1[5] = a5;
  a1[6] = a6;
  result = a1;
  a1[1] = a3;
  a1[4] = a4;
  return result;
}
