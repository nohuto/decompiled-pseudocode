/*
 * XREFs of sub_1406B17F4 @ 0x1406B17F4
 * Callers:
 *     sub_1406B17A8 @ 0x1406B17A8 (sub_1406B17A8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     sub_1406B0950 @ 0x1406B0950 (sub_1406B0950.c)
 *     sub_1406B0B20 @ 0x1406B0B20 (sub_1406B0B20.c)
 *     sub_1406B0BE0 @ 0x1406B0BE0 (sub_1406B0BE0.c)
 *     sub_1406B1000 @ 0x1406B1000 (sub_1406B1000.c)
 *     sub_1406B1080 @ 0x1406B1080 (sub_1406B1080.c)
 *     sub_1406B19A0 @ 0x1406B19A0 (sub_1406B19A0.c)
 *     sub_1406B1A10 @ 0x1406B1A10 (sub_1406B1A10.c)
 *     sub_1406B1B60 @ 0x1406B1B60 (sub_1406B1B60.c)
 *     sub_1406B1E30 @ 0x1406B1E30 (sub_1406B1E30.c)
 *     sub_1406B1EA0 @ 0x1406B1EA0 (sub_1406B1EA0.c)
 *     sub_1406B2E90 @ 0x1406B2E90 (sub_1406B2E90.c)
 *     sub_1406B2F40 @ 0x1406B2F40 (sub_1406B2F40.c)
 *     sub_1406B4050 @ 0x1406B4050 (sub_1406B4050.c)
 *     sub_1406B4850 @ 0x1406B4850 (sub_1406B4850.c)
 *     sub_1406B4880 @ 0x1406B4880 (sub_1406B4880.c)
 *     sub_1406B48B0 @ 0x1406B48B0 (sub_1406B48B0.c)
 *     sub_1406B4BA0 @ 0x1406B4BA0 (sub_1406B4BA0.c)
 *     sub_1406B4EB0 @ 0x1406B4EB0 (sub_1406B4EB0.c)
 *     sub_1406B5460 @ 0x1406B5460 (sub_1406B5460.c)
 *     sub_1406B5D70 @ 0x1406B5D70 (sub_1406B5D70.c)
 *     sub_1406B7500 @ 0x1406B7500 (sub_1406B7500.c)
 *     sub_1406B9090 @ 0x1406B9090 (sub_1406B9090.c)
 *     sub_1406B9880 @ 0x1406B9880 (sub_1406B9880.c)
 *     sub_1406BA1D0 @ 0x1406BA1D0 (sub_1406BA1D0.c)
 *     sub_1406BA320 @ 0x1406BA320 (sub_1406BA320.c)
 *     sub_1406BDEF0 @ 0x1406BDEF0 (sub_1406BDEF0.c)
 *     sub_1406BE0A0 @ 0x1406BE0A0 (sub_1406BE0A0.c)
 *     sub_1406BEDC0 @ 0x1406BEDC0 (sub_1406BEDC0.c)
 *     sub_1406DAC80 @ 0x1406DAC80 (sub_1406DAC80.c)
 *     sub_1409661F0 @ 0x1409661F0 (sub_1409661F0.c)
 */

__int64 __fastcall sub_1406B17F4(__int64 *a1)
{
  unsigned __int8 *v1; // r14
  unsigned __int8 *v2; // rsi
  int v3; // edi
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // ebx
  __int64 result; // rax
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140D2DB8E;
  v2 = (unsigned __int8 *)&unk_140D2DB6E;
  v3 = (unsigned __int8)*a1;
  v18 = *a1;
  v4 = 30LL;
  v5 = 16LL;
  v6 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | (v3 << 8)) << 8)) << 8);
  v17 = qword_140D2D320;
  v7 = HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8);
  do
  {
    v8 = v1[1];
    if ( (unsigned __int8)v8 < 0x1Fu )
      v7 ^= funcs_140689BDF[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
    v9 = *v1;
    if ( (unsigned __int8)v9 < 0x1Fu )
      v6 ^= funcs_140689BDF[v9](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v17, v7);
    v4 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v5;
  }
  while ( v5 );
  v10 = ~v7;
  BYTE3(v18) = v6;
  v11 = __ROR4__(v6, 8);
  HIBYTE(v18) = v10;
  v12 = __ROR4__(v10, 8);
  BYTE2(v18) = v11;
  v13 = __ROR4__(v11, 8);
  BYTE6(v18) = v12;
  v14 = __ROR4__(v12, 8);
  BYTE1(v18) = v13;
  BYTE5(v18) = v14;
  BYTE4(v18) = __ROR4__(v14, 8);
  LOBYTE(v18) = __ROR4__(v13, 8);
  result = v18;
  *a1 = v18;
  return result;
}
