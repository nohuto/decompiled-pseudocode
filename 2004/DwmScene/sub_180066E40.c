/*
 * XREFs of sub_180066E40 @ 0x180066E40
 * Callers:
 *     sub_18002ABB0 @ 0x18002ABB0 (sub_18002ABB0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180066E40(__int64 a1, float a2, float a3)
{
  char result; // al

  if ( a2 < 0.1 || a2 > 1.0 || a3 < 0.1 || a3 > 1.0 )
    return 0;
  *(float *)(a1 + 192) = a2;
  result = 1;
  *(float *)(a1 + 196) = a3;
  return result;
}
