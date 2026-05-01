/*
 * XREFs of sub_180002D50 @ 0x180002D50
 * Callers:
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 * Callees:
 *     sub_180002F50 @ 0x180002F50 (sub_180002F50.c)
 *     sub_180002FF8 @ 0x180002FF8 (sub_180002FF8.c)
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180002D50(__int64 *a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  __int64 v10; // r8
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rdx
  PVOID v34; // rdi
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v37; // [rsp+38h] [rbp-C8h]
  _QWORD v38[54]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v39[344]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v40; // [rsp+348h] [rbp+248h]

  P = 0LL;
  memset(v38, 0, sizeof(v38));
  v10 = 3LL;
  v38[50] = a1;
  LOBYTE(v38[0]) = 4;
  v11 = &v38[1];
  v12 = a5;
  v13 = 3LL;
  do
  {
    v14 = v12[1];
    *v11 = *v12;
    v15 = v12[2];
    v11[1] = v14;
    v16 = v12[3];
    v11[2] = v15;
    v17 = v12[4];
    v11[3] = v16;
    v18 = v12[5];
    v11[4] = v17;
    v19 = v12[6];
    v11[5] = v18;
    v20 = v12[7];
    v12 += 8;
    v11[6] = v19;
    v11 += 8;
    *(v11 - 1) = v20;
    --v13;
  }
  while ( v13 );
  *(_QWORD *)v11 = *(_QWORD *)v12;
  v21 = a5;
  v22 = v39;
  do
  {
    v23 = v21[1];
    *v22 = *v21;
    v24 = v21[2];
    v22[1] = v23;
    v25 = v21[3];
    v22[2] = v24;
    v26 = v21[4];
    v22[3] = v25;
    v27 = v21[5];
    v22[4] = v26;
    v28 = v21[6];
    v22[5] = v27;
    v29 = v21[7];
    v21 += 8;
    v22[6] = v28;
    v22 += 8;
    *(v22 - 1) = v29;
    --v10;
  }
  while ( v10 );
  v30 = *a1;
  *(_QWORD *)v22 = *(_QWORD *)v21;
  v31 = sub_180002FF8(v39, v30, 1LL, 128LL);
  if ( v31 >= 0 )
  {
    v32 = 0LL;
    if ( (*a5 & 0x80000) == 0 )
      v32 = v40;
    v31 = sub_180002F50(a2, v32);
    if ( v31 >= 0 )
    {
      v38[51] = a3;
      v31 = sub_18000B2DC(a2, a4, (__int64)&P);
      if ( v31 >= 0 )
      {
        v33 = *v37;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*v37 + 24)) <= 1 )
          __fastfail(0xEu);
        *a6 = v33;
        v31 = 0;
      }
      v34 = P;
      if ( P )
      {
        sub_180017F60(P);
        sub_1800286D8(v34);
      }
    }
  }
  return (unsigned int)v31;
}
