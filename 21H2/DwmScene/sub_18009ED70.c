/*
 * XREFs of sub_18009ED70 @ 0x18009ED70
 * Callers:
 *     sub_180033634 @ 0x180033634 (sub_180033634.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18009ED70(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // rax

  a1[4] = a5;
  a1[5] = a6;
  a1[6] = a7;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  a1[3] = 2;
  return result;
}
