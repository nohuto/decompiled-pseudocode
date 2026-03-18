/*
 * XREFs of sub_1C0037200 @ 0x1C0037200
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 *     sub_1C0042430 @ 0x1C0042430 (sub_1C0042430.c)
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 *     sub_1C004DFB0 @ 0x1C004DFB0 (sub_1C004DFB0.c)
 *     sub_1C004E570 @ 0x1C004E570 (sub_1C004E570.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

char __fastcall sub_1C0037200(__int64 a1, __int64 a2)
{
  int v3; // edi
  int v4; // edx
  char result; // al
  int v6; // edx
  int v7; // [rsp+20h] [rbp-48h]
  __int16 v8; // [rsp+78h] [rbp+10h] BYREF
  int v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF
  __int16 v11; // [rsp+8Ch] [rbp+24h]
  __int16 v12; // [rsp+8Eh] [rbp+26h]

  v11 = *(_WORD *)(a2 + 4);
  v9 = 0;
  v8 = 0;
  v10 = 65827;
  v3 = a1;
  v12 = 0;
  v4 = sub_1C000A740(a1, (__int64)&v10, 0LL, &v8, v7, &v9);
  result = 0;
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    result = sub_1C001CEB4(v4);
    if ( !result )
      return sub_1C004A608(v3, *(unsigned __int16 *)(a2 + 4), 20, 0, 0, v6, v9, (__int64)aBusC, 2257, 0);
  }
  return result;
}
