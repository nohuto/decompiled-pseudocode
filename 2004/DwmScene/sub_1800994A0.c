/*
 * XREFs of sub_1800994A0 @ 0x1800994A0
 * Callers:
 *     sub_18002DD64 @ 0x18002DD64 (sub_18002DD64.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800994A0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
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
