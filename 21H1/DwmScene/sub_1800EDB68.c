/*
 * XREFs of sub_1800EDB68 @ 0x1800EDB68
 * Callers:
 *     sub_1800ED7F8 @ 0x1800ED7F8 (sub_1800ED7F8.c)
 * Callees:
 *     sub_1800EC170 @ 0x1800EC170 (sub_1800EC170.c)
 */

_DWORD *__fastcall sub_1800EDB68(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1800EC170(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  return result;
}
