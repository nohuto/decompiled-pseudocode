/*
 * XREFs of sub_18003D438 @ 0x18003D438
 * Callers:
 *     sub_18003D4A0 @ 0x18003D4A0 (sub_18003D4A0.c)
 * Callees:
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 */

__int64 __fastcall sub_18003D438(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  unsigned int v8; // ebx

  v8 = (unsigned __int16)a8 | 0x80070000;
  if ( a8 <= 0 )
    v8 = a8;
  sub_180002F40(a1, a2, a3, 0LL, 0LL, a6, 1, v8, 0LL, 0);
  return v8;
}
