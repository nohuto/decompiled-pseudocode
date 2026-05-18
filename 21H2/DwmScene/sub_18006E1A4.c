/*
 * XREFs of sub_18006E1A4 @ 0x18006E1A4
 * Callers:
 *     sub_180098190 @ 0x180098190 (sub_180098190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006E1A4(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // r10d
  __int64 v7; // r9
  int v8; // eax
  _DWORD v10[15]; // [rsp+30h] [rbp-21h]
  __m128i si128; // [rsp+6Ch] [rbp+1Bh]
  int v12; // [rsp+7Ch] [rbp+2Bh]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  int v15; // [rsp+88h] [rbp+37h]
  int v16; // [rsp+8Ch] [rbp+3Bh]
  int v17; // [rsp+90h] [rbp+3Fh]

  v5 = a5;
  if ( !a5 && *(_QWORD *)a2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 112LL);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 20);
    else
      v8 = 0;
    v10[0] = 0;
    v10[1] = 4;
    v10[2] = 4;
    v10[5] = 12;
    v10[6] = 16;
    v10[10] = 12;
    v10[11] = 16;
    v10[12] = 2;
    v10[13] = 1;
    v10[14] = 2;
    v12 = 2;
    v16 = 1;
    v17 = 2;
    v10[3] = 4;
    v10[4] = 8;
    v10[7] = 4;
    v10[8] = 4;
    v10[9] = 8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1801436B0);
    v13 = 4;
    v14 = 8;
    v15 = 4;
    v5 = v10[v8];
  }
  return sub_1800DF288((unsigned int)*(_QWORD *)(a1 + 96) + 64, a2, a3, a4, v5);
}
