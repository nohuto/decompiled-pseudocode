/*
 * XREFs of sub_1407B4290 @ 0x1407B4290
 * Callers:
 *     SPCallEncryptPointer @ 0x1407B4244 (SPCallEncryptPointer.c)
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

__int64 __fastcall sub_1407B4290(__int64 *a1)
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
      v2 ^= funcs_14066C673[v7](v5, *(v1 - 2), *(v1 - 1), *v1, v1[1], (__int64)&v14, v4);
    if ( byte_140D2DB70[v3 + 1] < 0x1Fu )
      v4 ^= funcs_14066C673[byte_140D2DB70[v3 + 1]](v5 + 1, v1[2], v1[3], v1[4], v1[5], (__int64)&v14, v2);
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
