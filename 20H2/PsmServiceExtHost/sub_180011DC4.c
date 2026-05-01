/*
 * XREFs of sub_180011DC4 @ 0x180011DC4
 * Callers:
 *     sub_180002FF8 @ 0x180002FF8 (sub_180002FF8.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 *     sub_18007FA28 @ 0x18007FA28 (sub_18007FA28.c)
 * Callees:
 *     sub_180011EE0 @ 0x180011EE0 (sub_180011EE0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180011DC4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _WORD *v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  _BYTE v23[40]; // [rsp+20h] [rbp-198h] BYREF
  __int16 v24; // [rsp+48h] [rbp-170h]

  v3 = a3;
  sub_180011EE0(v23, a2, a3, a1);
  if ( !*v4 || (result = RmRpsQueryResourceSetInfo(*(_QWORD *)(v5 - 1104), v4, v23), (int)result >= 0) )
  {
    v24 |= 0x20u;
    v7 = v23;
    v8 = 2LL;
    do
    {
      v9 = v7[1];
      *(_OWORD *)v3 = *v7;
      v10 = v7[2];
      *(_OWORD *)(v3 + 16) = v9;
      v11 = v7[3];
      *(_OWORD *)(v3 + 32) = v10;
      v12 = v7[4];
      *(_OWORD *)(v3 + 48) = v11;
      v13 = v7[5];
      *(_OWORD *)(v3 + 64) = v12;
      v14 = v7[6];
      *(_OWORD *)(v3 + 80) = v13;
      v15 = v7[7];
      v7 += 8;
      *(_OWORD *)(v3 + 96) = v14;
      v3 += 128LL;
      *(_OWORD *)(v3 - 16) = v15;
      --v8;
    }
    while ( v8 );
    v16 = v7[1];
    *(_OWORD *)v3 = *v7;
    v17 = v7[2];
    *(_OWORD *)(v3 + 16) = v16;
    v18 = v7[3];
    *(_OWORD *)(v3 + 32) = v17;
    v19 = v7[4];
    *(_OWORD *)(v3 + 48) = v18;
    v20 = v7[5];
    *(_OWORD *)(v3 + 64) = v19;
    v21 = v7[6];
    v22 = *((_QWORD *)v7 + 14);
    *(_OWORD *)(v3 + 80) = v20;
    *(_OWORD *)(v3 + 96) = v21;
    *(_QWORD *)(v3 + 112) = v22;
    return 0LL;
  }
  return result;
}
