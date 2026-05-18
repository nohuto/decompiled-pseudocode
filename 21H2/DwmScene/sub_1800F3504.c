/*
 * XREFs of sub_1800F3504 @ 0x1800F3504
 * Callers:
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 * Callees:
 *     sub_1800F1A40 @ 0x1800F1A40 (sub_1800F1A40.c)
 */

float *__fastcall sub_1800F3504(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_1800F1A40(a1, a2);
  *result = a3;
  return result;
}
