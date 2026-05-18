/*
 * XREFs of sub_1800CF2E0 @ 0x1800CF2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF0BC @ 0x1800CF0BC (sub_1800CF0BC.c)
 */

_QWORD *__fastcall sub_1800CF2E0(__int64 a1, _QWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edx
  _DWORD v9[15]; // [rsp+38h] [rbp-39h]
  __m128i si128; // [rsp+74h] [rbp+3h]
  int v11; // [rsp+84h] [rbp+13h]
  int v12; // [rsp+88h] [rbp+17h]
  int v13; // [rsp+8Ch] [rbp+1Bh]
  int v14; // [rsp+90h] [rbp+1Fh]
  int v15; // [rsp+94h] [rbp+23h]
  int v16; // [rsp+98h] [rbp+27h]
  int v17[4]; // [rsp+A8h] [rbp+37h] BYREF
  int v18; // [rsp+D8h] [rbp+67h] BYREF
  int v19; // [rsp+E0h] [rbp+6Fh] BYREF

  v19 = a4;
  v18 = a3;
  *(_QWORD *)v17 = a2;
  v9[0] = 0;
  v9[13] = 1;
  v15 = 1;
  v9[5] = 12;
  v9[10] = 12;
  v9[4] = 8;
  v9[12] = 2;
  v9[14] = 2;
  v11 = 2;
  v16 = 2;
  v9[9] = 8;
  v13 = 8;
  v9[6] = 16;
  v9[11] = 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801436B0);
  v9[1] = 4;
  v9[2] = 4;
  v9[3] = 4;
  v9[7] = 4;
  v9[8] = 4;
  v12 = 4;
  v14 = 4;
  if ( (unsigned int)(a6 - 23) > 1 )
    v7 = a3 * v9[a6];
  else
    v7 = ((a3 + 1) & 0xFFFFFFFE) * v9[a6];
  v17[0] = v7;
  sub_1800CF0BC(a2, &v18, v17, &v19, &a6, &a5);
  return a2;
}
