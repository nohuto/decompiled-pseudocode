/*
 * XREFs of sub_1406D83D4 @ 0x1406D83D4
 * Callers:
 *     sub_1406D8388 @ 0x1406D8388 (sub_1406D8388.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     sub_1406D6E50 @ 0x1406D6E50 (sub_1406D6E50.c)
 *     sub_1406D70B0 @ 0x1406D70B0 (sub_1406D70B0.c)
 *     sub_1406D7170 @ 0x1406D7170 (sub_1406D7170.c)
 *     sub_1406D7240 @ 0x1406D7240 (sub_1406D7240.c)
 *     sub_1406D72C0 @ 0x1406D72C0 (sub_1406D72C0.c)
 *     sub_1406D8580 @ 0x1406D8580 (sub_1406D8580.c)
 *     sub_1406D85F0 @ 0x1406D85F0 (sub_1406D85F0.c)
 *     sub_1406D8740 @ 0x1406D8740 (sub_1406D8740.c)
 *     sub_1406DA440 @ 0x1406DA440 (sub_1406DA440.c)
 *     sub_1406DA4B0 @ 0x1406DA4B0 (sub_1406DA4B0.c)
 *     sub_1406DB570 @ 0x1406DB570 (sub_1406DB570.c)
 *     sub_1406DB620 @ 0x1406DB620 (sub_1406DB620.c)
 *     sub_1406DBED0 @ 0x1406DBED0 (sub_1406DBED0.c)
 *     sub_1406DC6D0 @ 0x1406DC6D0 (sub_1406DC6D0.c)
 *     sub_1406DC700 @ 0x1406DC700 (sub_1406DC700.c)
 *     sub_1406DC730 @ 0x1406DC730 (sub_1406DC730.c)
 *     sub_1406DC7E0 @ 0x1406DC7E0 (sub_1406DC7E0.c)
 *     sub_1406DC9F0 @ 0x1406DC9F0 (sub_1406DC9F0.c)
 *     sub_1406DDA20 @ 0x1406DDA20 (sub_1406DDA20.c)
 *     sub_1406DF100 @ 0x1406DF100 (sub_1406DF100.c)
 *     sub_1406DFBB0 @ 0x1406DFBB0 (sub_1406DFBB0.c)
 *     sub_1406E1F80 @ 0x1406E1F80 (sub_1406E1F80.c)
 *     sub_1406E2200 @ 0x1406E2200 (sub_1406E2200.c)
 *     sub_1406E2B80 @ 0x1406E2B80 (sub_1406E2B80.c)
 *     sub_1406E33F0 @ 0x1406E33F0 (sub_1406E33F0.c)
 *     sub_1406E9580 @ 0x1406E9580 (sub_1406E9580.c)
 *     sub_1406EA220 @ 0x1406EA220 (sub_1406EA220.c)
 *     sub_1406EB9B0 @ 0x1406EB9B0 (sub_1406EB9B0.c)
 *     sub_140708520 @ 0x140708520 (sub_140708520.c)
 *     sub_140960420 @ 0x140960420 (sub_140960420.c)
 */

__int64 __fastcall sub_1406D83D4(__int64 *a1)
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
      v7 ^= funcs_14066C673[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
    v9 = *v1;
    if ( (unsigned __int8)v9 < 0x1Fu )
      v6 ^= funcs_14066C673[v9](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v17, v7);
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
