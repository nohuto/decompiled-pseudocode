/*
 * XREFs of sub_1800CA5FC @ 0x1800CA5FC
 * Callers:
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 *     sub_18011E3D4 @ 0x18011E3D4 (sub_18011E3D4.c)
 * Callees:
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 */

__int64 __fastcall sub_1800CA5FC(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  unsigned int v8; // ebx

  v8 = a8;
  if ( a8 > 0 )
    v8 = (unsigned __int16)a8 | 0x80070000;
  sub_18004BE0C(a1, a2, a3, 0, 0LL, a6, a7, v8, 0LL, 0);
  return v8;
}
