/*
 * XREFs of sub_1407B1120 @ 0x1407B1120
 * Callers:
 *     sub_1407B10D4 @ 0x1407B10D4 (sub_1407B10D4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     sub_1406B7D50 @ 0x1406B7D50 (sub_1406B7D50.c)
 *     sub_1406B7FB0 @ 0x1406B7FB0 (sub_1406B7FB0.c)
 *     sub_1406B8070 @ 0x1406B8070 (sub_1406B8070.c)
 *     sub_1406B8140 @ 0x1406B8140 (sub_1406B8140.c)
 *     sub_1406B81C0 @ 0x1406B81C0 (sub_1406B81C0.c)
 *     sub_1406B8CD0 @ 0x1406B8CD0 (sub_1406B8CD0.c)
 *     sub_1406B8D40 @ 0x1406B8D40 (sub_1406B8D40.c)
 *     sub_1406B8E90 @ 0x1406B8E90 (sub_1406B8E90.c)
 *     sub_1406B9130 @ 0x1406B9130 (sub_1406B9130.c)
 *     sub_1406B91A0 @ 0x1406B91A0 (sub_1406B91A0.c)
 *     sub_1406BA260 @ 0x1406BA260 (sub_1406BA260.c)
 *     sub_1406BA310 @ 0x1406BA310 (sub_1406BA310.c)
 *     sub_1406BABC0 @ 0x1406BABC0 (sub_1406BABC0.c)
 *     sub_1406BB3C0 @ 0x1406BB3C0 (sub_1406BB3C0.c)
 *     sub_1406BB3F0 @ 0x1406BB3F0 (sub_1406BB3F0.c)
 *     sub_1406BB420 @ 0x1406BB420 (sub_1406BB420.c)
 *     sub_1406BB4D0 @ 0x1406BB4D0 (sub_1406BB4D0.c)
 *     sub_1406BB7B0 @ 0x1406BB7B0 (sub_1406BB7B0.c)
 *     sub_1406BC7E0 @ 0x1406BC7E0 (sub_1406BC7E0.c)
 *     sub_1406BDD70 @ 0x1406BDD70 (sub_1406BDD70.c)
 *     sub_1406BF630 @ 0x1406BF630 (sub_1406BF630.c)
 *     sub_1406C1A00 @ 0x1406C1A00 (sub_1406C1A00.c)
 *     sub_1406C1C80 @ 0x1406C1C80 (sub_1406C1C80.c)
 *     sub_1406C2600 @ 0x1406C2600 (sub_1406C2600.c)
 *     sub_1406C2E70 @ 0x1406C2E70 (sub_1406C2E70.c)
 *     sub_1406C8EC0 @ 0x1406C8EC0 (sub_1406C8EC0.c)
 *     sub_1406C9070 @ 0x1406C9070 (sub_1406C9070.c)
 *     sub_1406CA730 @ 0x1406CA730 (sub_1406CA730.c)
 *     sub_1406E4B90 @ 0x1406E4B90 (sub_1406E4B90.c)
 *     sub_14095F080 @ 0x14095F080 (sub_14095F080.c)
 */

__int64 __fastcall sub_1407B1120(__int64 *a1)
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

  v1 = (unsigned __int8 *)&unk_140D2CAF2;
  v15 = *a1;
  v14 = qword_140D2C328;
  v2 = BYTE3(v15) | ((BYTE2(v15) | ((BYTE1(v15) | ((unsigned __int8)v15 << 8)) << 8)) << 8);
  v3 = 0LL;
  v4 = ~(HIBYTE(v15) | ((BYTE6(v15) | ((BYTE5(v15) | (BYTE4(v15) << 8)) << 8)) << 8));
  v5 = 0LL;
  v6 = 16LL;
  do
  {
    v7 = byte_140D2CB70[v3];
    if ( (unsigned __int8)v7 < 0x1Fu )
      v2 ^= funcs_1405D6C33[v7](v5, *(v1 - 2), *(v1 - 1), *v1, v1[1], (__int64)&v14, v4);
    if ( byte_140D2CB70[v3 + 1] < 0x1Fu )
      v4 ^= funcs_1405D6C33[byte_140D2CB70[v3 + 1]](v5 + 1, v1[2], v1[3], v1[4], v1[5], (__int64)&v14, v2);
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
