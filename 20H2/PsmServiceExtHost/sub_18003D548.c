/*
 * XREFs of sub_18003D548 @ 0x18003D548
 * Callers:
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 * Callees:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_18003D7CC @ 0x18003D7CC (sub_18003D7CC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18003D548(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  _WORD *v6; // rcx
  __int16 v7; // ax
  _WORD *v8; // rax
  _WORD *v9; // rcx
  __int16 v10; // ax
  _WORD *v11; // rax
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // edi
  PVOID v23; // rbx
  char v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v29[50]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[432]; // [rsp+1E0h] [rbp+E0h] BYREF

  v27 = 0LL;
  P = 0LL;
  memset(v29, 0, 0x188uLL);
  v4 = 64LL;
  LODWORD(v29[0]) = 8397888;
  v5 = 64LL;
  v6 = (_WORD *)&v29[1] + 2;
  do
  {
    if ( v5 == -2147483582 )
      break;
    v7 = *(_WORD *)((char *)v6 + (char *)L"PpleDependency" - ((char *)&v29[1] + 4));
    if ( !v7 )
      break;
    *v6++ = v7;
    --v5;
  }
  while ( v5 );
  v8 = v6 - 1;
  if ( v5 )
    v8 = v6;
  v9 = (_WORD *)&v29[17] + 2;
  *v8 = 0;
  do
  {
    if ( v4 == -2147483582 )
      break;
    v10 = *(_WORD *)((char *)v9 + (char *)L"DefaultPPLE" - ((char *)&v29[17] + 4));
    if ( !v10 )
      break;
    *v9++ = v10;
    --v4;
  }
  while ( v4 );
  v11 = v9 - 1;
  if ( v4 )
    v11 = v9;
  *v11 = 0;
  HIDWORD(v29[33]) = 5;
  memset(&v29[35], 0, 0x68uLL);
  LODWORD(v29[46]) = 33;
  v29[40] |= 0x80uLL;
  memset(&v29[41], 255, 32);
  v25[0] = 1;
  v26 = 256;
  PsmGetPackageFullNameFromKey(a2 + 24, v30, &v26);
  sub_18003D7CC(a2 + 488, v30, v25);
  LODWORD(v29[0]) |= 0x400u;
  HIDWORD(v29[34]) = -(v25[0] != 0);
  memset(v30, 0, sizeof(v30));
  v12 = &v30[8];
  v30[0] = 2;
  v13 = v29;
  v14 = 3LL;
  do
  {
    v15 = v13[1];
    *v12 = *v13;
    v16 = v13[2];
    v12[1] = v15;
    v17 = v13[3];
    v12[2] = v16;
    v18 = v13[4];
    v12[3] = v17;
    v19 = v13[5];
    v12[4] = v18;
    v20 = v13[6];
    v12[5] = v19;
    v21 = v13[7];
    v13 += 8;
    v12[6] = v20;
    v12 += 8;
    *(v12 - 1) = v21;
    --v14;
  }
  while ( v14 );
  *(_QWORD *)v12 = *(_QWORD *)v13;
  v22 = sub_18000B2DC(a1, a2, (__int64)v30, &v27, (__int64 **)&P);
  if ( v22 >= 0 )
  {
    v22 = 0;
    *(_QWORD *)(a1 + 696) = v27;
  }
  v23 = P;
  if ( P )
  {
    sub_180017F60((char *)P);
    sub_1800286D8((__int64)v23);
  }
  return (unsigned int)v22;
}
