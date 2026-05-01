/*
 * XREFs of sub_180028478 @ 0x180028478
 * Callers:
 *     sub_180028C4C @ 0x180028C4C (sub_180028C4C.c)
 *     sub_18007B958 @ 0x18007B958 (sub_18007B958.c)
 * Callees:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180028478(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int8 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  char *v18; // r8
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // edi
  PVOID v29; // rbx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+41h] [rbp-BFh]
  __int16 v34; // [rsp+45h] [rbp-BBh]
  char v35; // [rsp+47h] [rbp-B9h]
  char v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+1D0h] [rbp+D0h]
  __int64 v38; // [rsp+1D8h] [rbp+D8h]
  __int64 v39; // [rsp+1E0h] [rbp+E0h]
  int v40; // [rsp+1E8h] [rbp+E8h]
  int v41; // [rsp+1ECh] [rbp+ECh]
  _QWORD v42[50]; // [rsp+1F0h] [rbp+F0h] BYREF

  P = 0LL;
  memset(v42, 0, 0x188uLL);
  LODWORD(v42[0]) = 8397888;
  v10 = 64LL;
  v11 = 64LL;
  v12 = (_WORD *)&v42[1] + 2;
  do
  {
    if ( v11 == -2147483582 )
      break;
    v13 = *(_WORD *)((char *)v12 + &unk_180095550 - (_UNKNOWN *)((char *)&v42[1] + 4));
    if ( !v13 )
      break;
    *v12++ = v13;
    --v11;
  }
  while ( v11 );
  v14 = v12 - 1;
  if ( v11 )
    v14 = v12;
  v15 = (_WORD *)&v42[17] + 2;
  *v14 = 0;
  do
  {
    if ( v10 == -2147483582 )
      break;
    v16 = *(_WORD *)((char *)v15 + &unk_180095550 - (_UNKNOWN *)((char *)&v42[17] + 4));
    if ( !v16 )
      break;
    *v15++ = v16;
    --v10;
  }
  while ( v10 );
  v17 = v15 - 1;
  if ( v10 )
    v17 = v15;
  *v17 = 0;
  HIDWORD(v42[34]) = -1;
  HIDWORD(v42[33]) = 5;
  memset(&v42[35], 0, 0x68uLL);
  LODWORD(v42[46]) = 33;
  v42[40] |= 0x80uLL;
  v18 = &v36;
  memset(&v42[41], 255, 32);
  v19 = 3LL;
  v32 = 3;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v20 = v42;
  v37 = 0LL;
  do
  {
    v21 = v20[1];
    *(_OWORD *)v18 = *v20;
    v22 = v20[2];
    *((_OWORD *)v18 + 1) = v21;
    v23 = v20[3];
    *((_OWORD *)v18 + 2) = v22;
    v24 = v20[4];
    *((_OWORD *)v18 + 3) = v23;
    v25 = v20[5];
    *((_OWORD *)v18 + 4) = v24;
    v26 = v20[6];
    *((_OWORD *)v18 + 5) = v25;
    v27 = v20[7];
    v20 += 8;
    *((_OWORD *)v18 + 6) = v26;
    v18 += 128;
    *((_OWORD *)v18 - 1) = v27;
    --v19;
  }
  while ( v19 );
  *(_QWORD *)v18 = *(_QWORD *)v20;
  v41 = a5;
  v38 = a4;
  v40 = a6 | 0xC00;
  v39 = a2;
  v28 = sub_18000B2DC(a3, a1, (__int64)&v32, 0LL, (__int64 **)&P);
  if ( v28 >= 0 )
    v28 = 0;
  v29 = P;
  if ( P )
  {
    sub_180017F60((char *)P);
    sub_1800286D8(v29);
  }
  return (unsigned int)v28;
}
