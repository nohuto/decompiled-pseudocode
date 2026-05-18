/*
 * XREFs of sub_18003659C @ 0x18003659C
 * Callers:
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_18003663C @ 0x18003663C (sub_18003663C.c)
 *     sub_180096810 @ 0x180096810 (sub_180096810.c)
 *     sub_1800968E8 @ 0x1800968E8 (sub_1800968E8.c)
 *     sub_1800969C0 @ 0x1800969C0 (sub_1800969C0.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_180098B24 @ 0x180098B24 (sub_180098B24.c)
 *     sub_1800990D0 @ 0x1800990D0 (sub_1800990D0.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     sub_1800A00C0 @ 0x1800A00C0 (sub_1800A00C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003659C(int a1, int a2)
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
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801436B0);
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
