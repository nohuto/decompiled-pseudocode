/*
 * XREFs of sub_1800EDC34 @ 0x1800EDC34
 * Callers:
 *     sub_18009027C @ 0x18009027C (sub_18009027C.c)
 * Callees:
 *     sub_1800EC170 @ 0x1800EC170 (sub_1800EC170.c)
 */

float *__fastcall sub_1800EDC34(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_1800EC170(a1, a2);
  *result = a3;
  return result;
}
