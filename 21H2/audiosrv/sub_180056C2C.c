/*
 * XREFs of sub_180056C2C @ 0x180056C2C
 * Callers:
 *     sub_18002BC4C @ 0x18002BC4C (sub_18002BC4C.c)
 *     sub_18002BDA0 @ 0x18002BDA0 (sub_18002BDA0.c)
 *     sub_180055E9C @ 0x180055E9C (sub_180055E9C.c)
 *     sub_180055F74 @ 0x180055F74 (sub_180055F74.c)
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 *     sub_1800CFB48 @ 0x1800CFB48 (sub_1800CFB48.c)
 *     sub_180107110 @ 0x180107110 (sub_180107110.c)
 *     sub_180107EE4 @ 0x180107EE4 (sub_180107EE4.c)
 *     sub_180108014 @ 0x180108014 (sub_180108014.c)
 *     sub_18011E8C8 @ 0x18011E8C8 (sub_18011E8C8.c)
 *     sub_180139FC0 @ 0x180139FC0 (sub_180139FC0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180056C2C(__int64 a1)
{
  unsigned __int64 v1; // rdx
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax

  v1 = 0LL;
  v2 = (float)*(int *)(a1 + 16);
  v3 = v2 * *(float *)(a1 + 28);
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v1 = 0x8000000000000000uLL;
  }
  v4 = v2 * *(float *)(a1 + 24);
  v5 = v1 + (unsigned int)(int)v3;
  v6 = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  result = v6 + (unsigned int)(int)v4;
  if ( result < 0x11 )
    result = 0LL;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
