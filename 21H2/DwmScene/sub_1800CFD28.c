/*
 * XREFs of sub_1800CFD28 @ 0x1800CFD28
 * Callers:
 *     sub_1800CFE40 @ 0x1800CFE40 (sub_1800CFE40.c)
 * Callees:
 *     sub_1800CFB14 @ 0x1800CFB14 (sub_1800CFB14.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_QWORD *sub_1800CFD28(__int64 a1, _QWORD *a2, int a3, int a4, ...)
{
  int v5; // edx
  int v7[4]; // [rsp+40h] [rbp-61h] BYREF
  _DWORD v8[15]; // [rsp+50h] [rbp-51h]
  __m128i si128; // [rsp+8Ch] [rbp-15h]
  int v10; // [rsp+9Ch] [rbp-5h]
  int v11; // [rsp+A0h] [rbp-1h]
  int v12; // [rsp+A4h] [rbp+3h]
  int v13; // [rsp+A8h] [rbp+7h]
  int v14; // [rsp+ACh] [rbp+Bh]
  int v15; // [rsp+B0h] [rbp+Fh]
  int v16; // [rsp+C0h] [rbp+1Fh] BYREF
  int v17[2]; // [rsp+C8h] [rbp+27h] BYREF
  __int64 v18; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va; // [rsp+110h] [rbp+6Fh]
  __int64 v20; // [rsp+118h] [rbp+77h] BYREF
  va_list va1; // [rsp+118h] [rbp+77h]
  va_list va2; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v17[1] = HIDWORD(a2);
  v8[0] = 0;
  v16 = a4;
  v17[0] = a3;
  v8[5] = 12;
  v8[10] = 12;
  v8[12] = 2;
  v8[14] = 2;
  v10 = 2;
  v15 = 2;
  v8[1] = 4;
  v8[2] = 4;
  v8[3] = 4;
  v8[7] = 4;
  v8[8] = 4;
  v11 = 4;
  v13 = 4;
  v8[13] = 1;
  v14 = 1;
  v8[4] = 8;
  v8[9] = 8;
  v12 = 8;
  v8[6] = 16;
  v8[11] = 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801436B0);
  if ( (unsigned int)(v20 - 23) > 1 )
    v5 = a3 * v8[(int)v20];
  else
    v5 = ((a3 + 1) & 0xFFFFFFFE) * v8[(int)v20];
  v7[0] = v5;
  sub_1800CFB14(a2, v17, v7, &v16, (int *)va1, (int *)va, (int *)va2);
  return a2;
}
