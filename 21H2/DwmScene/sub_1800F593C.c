/*
 * XREFs of sub_1800F593C @ 0x1800F593C
 * Callers:
 *     sub_1800F5908 @ 0x1800F5908 (sub_1800F5908.c)
 * Callees:
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 */

float *__fastcall sub_1800F593C(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_1800F558C(a1, a2, 2);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
