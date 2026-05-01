/*
 * XREFs of sub_180041BF8 @ 0x180041BF8
 * Callers:
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003FFFC @ 0x18003FFFC (sub_18003FFFC.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180077DF8 @ 0x180077DF8 (sub_180077DF8.c)
 */

_OWORD *__fastcall sub_180041BF8(_OWORD *a1)
{
  BOOL v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  char v5; // bl
  _OWORD *result; // rax
  __int128 v7; // xmm2
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // rsi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  int v20; // r9d
  _DWORD v21[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[22]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[176]; // [rsp+F0h] [rbp-10h] BYREF
  __m256i v24; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v25; // [rsp+1C0h] [rbp+C0h]

  memset(v22, 0, sizeof(v22));
  memset(v23, 0, sizeof(v23));
  v2 = 0;
  if ( (int)sub_18003FFFC(0, v3, (__int64)v21) >= 0 && v21[0] <= 10 && (int)sub_18003FFFC(2, v4, (__int64)v21) >= 0 )
    v2 = v21[0] > 10;
  v5 = 0;
  if ( v2 )
  {
    v5 = 7;
    LODWORD(v22[0]) = 7;
    if ( (unsigned int)sub_180077DF8() )
    {
      v5 = 15;
      LODWORD(v22[0]) = 15;
    }
  }
  v22[16] = 0x138800000000LL;
  v22[15] = 0x138800000023LL;
  v22[17] = 0xEA6000001388LL;
  v22[20] = 0x3E800001388LL;
  v22[19] = 21474836540000LL;
  v22[2] = 52428800LL;
  v22[3] = 0x4600000032LL;
  v22[4] = 0x5A000000AALL;
  v22[5] = 0x5A0000004BLL;
  v22[6] = 0xA0000005FLL;
  v22[7] = 0x5900000041LL;
  LODWORD(v22[8]) = 85;
  v22[18] = 0x200200000LL;
  LOBYTE(v22[21]) = 30;
  if ( (int)sub_180042074(v22, v23) < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 > 2 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      *(_QWORD *)&v25 = v21;
      v21[0] = v20;
      *((_QWORD *)&v25 + 1) = 4LL;
      sub_18002E278(v19, (unsigned __int8 *)dword_18009AAEA, 0LL, 0LL, 3u, (PEVENT_DATA_DESCRIPTOR)&v24);
    }
    result = v22;
  }
  else
  {
    v5 = v23[0];
    result = v23;
  }
  v7 = 0LL;
  v24.m256i_i32[0] = 0;
  *(_OWORD *)&v24.m256i_u64[2] = 0LL;
  *(__m128i *)((char *)v24.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&xmmword_1800978E0);
  v25 = 0LL;
  if ( (v5 & 4) == 0 )
  {
    *(_QWORD *)&v25 = 0x300000003LL;
    HIDWORD(v25) = 1;
    v7 = v25;
    v24.m256i_i32[7] = 2;
  }
  v8 = *(_OWORD *)&v24.m256i_u64[2];
  *(_OWORD *)((char *)result + 72) = *(_OWORD *)v24.m256i_i8;
  *(_OWORD *)((char *)result + 88) = v8;
  *(_OWORD *)((char *)result + 104) = v7;
  v9 = result[1];
  *a1 = *result;
  v10 = result[2];
  a1[1] = v9;
  v11 = result[3];
  a1[2] = v10;
  v12 = result[4];
  a1[3] = v11;
  v13 = result[5];
  a1[4] = v12;
  v14 = result[6];
  a1[5] = v13;
  v15 = result[8];
  a1[6] = v14;
  v16 = a1 + 8;
  *(v16 - 1) = result[7];
  v17 = result[9];
  *v16 = v15;
  v18 = result[10];
  v16[1] = v17;
  v16[2] = v18;
  return result;
}
