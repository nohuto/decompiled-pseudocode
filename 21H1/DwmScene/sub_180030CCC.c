/*
 * XREFs of sub_180030CCC @ 0x180030CCC
 * Callers:
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_180030D6C @ 0x180030D6C (sub_180030D6C.c)
 *     sub_180090F40 @ 0x180090F40 (sub_180090F40.c)
 *     sub_180091018 @ 0x180091018 (sub_180091018.c)
 *     sub_1800910F0 @ 0x1800910F0 (sub_1800910F0.c)
 *     sub_180093148 @ 0x180093148 (sub_180093148.c)
 *     sub_180093254 @ 0x180093254 (sub_180093254.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 *     sub_18009A7F0 @ 0x18009A7F0 (sub_18009A7F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180030CCC(int a1, int a2)
{
  _DWORD v3[15]; // [rsp+0h] [rbp-70h]
  __m128i si128; // [rsp+3Ch] [rbp-34h]
  int v5; // [rsp+4Ch] [rbp-24h]
  int v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+54h] [rbp-1Ch]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  int v10; // [rsp+60h] [rbp-10h]

  v3[0] = 0;
  v3[13] = 1;
  v9 = 1;
  v3[4] = 8;
  v3[5] = 12;
  v3[10] = 12;
  v3[9] = 8;
  v3[12] = 2;
  v3[14] = 2;
  v5 = 2;
  v10 = 2;
  v7 = 8;
  v3[6] = 16;
  v3[11] = 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013D360);
  v3[1] = 4;
  v3[2] = 4;
  v3[3] = 4;
  v3[7] = 4;
  v3[8] = 4;
  v6 = 4;
  v8 = 4;
  if ( (unsigned int)(a1 - 23) > 1 )
    return (unsigned int)(a2 * v3[a1]);
  else
    return ((a2 + 1) & 0xFFFFFFFE) * v3[a1];
}
