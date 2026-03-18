/*
 * XREFs of sub_1407C2AC0 @ 0x1407C2AC0
 * Callers:
 *     sub_1407C2A74 @ 0x1407C2A74 (sub_1407C2A74.c)
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

__int64 __fastcall sub_1407C2AC0(__int64 *a1)
{
  unsigned __int8 *v1; // rsi
  int v2; // edi
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // edi
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  __int64 result; // rax
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140D2DAF2;
  v15 = *a1;
  v14 = qword_140D2D320;
  v2 = BYTE3(v15) | ((BYTE2(v15) | ((BYTE1(v15) | ((unsigned __int8)v15 << 8)) << 8)) << 8);
  v3 = 0LL;
  v4 = ~(HIBYTE(v15) | ((BYTE6(v15) | ((BYTE5(v15) | (BYTE4(v15) << 8)) << 8)) << 8));
  v5 = 0LL;
  v6 = 16LL;
  do
  {
    v7 = byte_140D2DB70[v3];
    if ( (unsigned __int8)v7 < 0x1Fu )
      v2 ^= funcs_140689BDF[v7](v5, *(v1 - 2), *(v1 - 1), *v1, v1[1], (__int64)&v14, v4);
    if ( byte_140D2DB70[v3 + 1] < 0x1Fu )
      v4 ^= funcs_140689BDF[byte_140D2DB70[v3 + 1]](v5 + 1, v1[2], v1[3], v1[4], v1[5], (__int64)&v14, v2);
    v5 += 2LL;
    v3 += 2LL;
    v1 += 8;
    --v6;
  }
  while ( v6 );
  BYTE3(v15) = v2;
  v8 = __ROR4__(v2, 8);
  HIBYTE(v15) = v4;
  BYTE2(v15) = v8;
  v9 = __ROR4__(v4, 8);
  v10 = __ROR4__(v8, 8);
  BYTE6(v15) = v9;
  BYTE1(v15) = v10;
  v11 = __ROR4__(v9, 8);
  BYTE5(v15) = v11;
  BYTE4(v15) = __ROR4__(v11, 8);
  LOBYTE(v15) = __ROR4__(v10, 8);
  result = v15;
  *a1 = v15;
  return result;
}
