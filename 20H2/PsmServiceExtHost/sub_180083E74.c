/*
 * XREFs of sub_180083E74 @ 0x180083E74
 * Callers:
 *     sub_180084040 @ 0x180084040 (sub_180084040.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180083E74(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rax
  _OWORD *v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 result; // rax
  _DWORD v16[100]; // [rsp+30h] [rbp-1A8h] BYREF

  v3 = 3LL;
  v6 = v16;
  do
  {
    v7 = a3[1];
    *v6 = *a3;
    v8 = a3[2];
    v6[1] = v7;
    v9 = a3[3];
    v6[2] = v8;
    v10 = a3[4];
    v6[3] = v9;
    v11 = a3[5];
    v6[4] = v10;
    v12 = a3[6];
    v6[5] = v11;
    v13 = a3[7];
    a3 += 8;
    v6[6] = v12;
    v6 += 8;
    *(v6 - 1) = v13;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)v6 = *(_QWORD *)a3;
  v14 = *(_QWORD *)(a1 + 32);
  v16[0] |= 0x200000u;
  result = HamCreateActivity(*(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFCuLL) + 72), a1, a2, v16, a1 + 40);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
      __fastfail(0xEu);
    return 0LL;
  }
  return result;
}
