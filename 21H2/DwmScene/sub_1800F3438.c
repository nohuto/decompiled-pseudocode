/*
 * XREFs of sub_1800F3438 @ 0x1800F3438
 * Callers:
 *     sub_1800F30C8 @ 0x1800F30C8 (sub_1800F30C8.c)
 * Callees:
 *     sub_1800F1A40 @ 0x1800F1A40 (sub_1800F1A40.c)
 */

_DWORD *__fastcall sub_1800F3438(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1800F1A40(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  return result;
}
