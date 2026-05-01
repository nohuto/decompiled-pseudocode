/*
 * XREFs of sub_180026288 @ 0x180026288
 * Callers:
 *     sub_180028A50 @ 0x180028A50 (sub_180028A50.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180026288(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  char *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  __int64 v18; // rax
  _OWORD *v19; // r8
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // eax
  __int64 v28; // rsi
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  bool v33; // zf
  __int64 v34; // rdx
  int v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v37[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v39[432]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v40[50]; // [rsp+200h] [rbp+100h] BYREF

  v4 = a4;
  v38 = 0LL;
  *(_QWORD *)v37 = 0LL;
  *(_QWORD *)v36 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !a4 )
  {
    memset(v40, 0, 0x188uLL);
    v10 = 64LL;
    LODWORD(v40[0]) = 8397888;
    v11 = 64LL;
    v12 = (_WORD *)&v40[1] + 2;
    do
    {
      if ( v11 == -2147483582 )
        break;
      v13 = *(_WORD *)((char *)v12 + (char *)L"DynamicHostDependency" - ((char *)&v40[1] + 4));
      if ( !v13 )
        break;
      *v12++ = v13;
      --v11;
    }
    while ( v11 );
    v14 = v12 - 1;
    if ( v11 )
      v14 = v12;
    v15 = (_WORD *)&v40[17] + 2;
    *v14 = 0;
    do
    {
      if ( v10 == -2147483582 )
        break;
      v16 = *(_WORD *)((char *)v15 + &unk_180095550 - (_UNKNOWN *)((char *)&v40[17] + 4));
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
    HIDWORD(v40[34]) = -1;
    HIDWORD(v40[33]) = 5;
    memset(&v40[35], 0, 0x68uLL);
    LODWORD(v40[46]) = 33;
    v40[40] |= 0x80uLL;
    v4 = v40;
    memset(&v40[41], 255, 32);
  }
  *(_DWORD *)v4 |= 0x400u;
  memset(v39, 0, sizeof(v39));
  v18 = 3LL;
  v39[0] = 1;
  v19 = &v39[8];
  do
  {
    v20 = *((_OWORD *)v4 + 1);
    *v19 = *(_OWORD *)v4;
    v21 = *((_OWORD *)v4 + 2);
    v19[1] = v20;
    v22 = *((_OWORD *)v4 + 3);
    v19[2] = v21;
    v23 = *((_OWORD *)v4 + 4);
    v19[3] = v22;
    v24 = *((_OWORD *)v4 + 5);
    v19[4] = v23;
    v25 = *((_OWORD *)v4 + 6);
    v19[5] = v24;
    v26 = *((_OWORD *)v4 + 7);
    v4 += 16;
    v19[6] = v25;
    v19 += 8;
    *(v19 - 1) = v26;
    --v18;
  }
  while ( v18 );
  *(_QWORD *)v19 = *v4;
  v27 = sub_180022DB0(a1, a2, v37);
  v28 = *(_QWORD *)v37;
  v29 = v27;
  if ( v27 >= 0 )
  {
    v30 = sub_180022DB0(a1, a3, v36);
    v9 = *(_QWORD *)v36;
    v29 = v30;
    if ( v30 >= 0 )
    {
      v31 = sub_18000B2DC(v28, *(__int64 *)v36, (__int64)v39, 0LL, (__int64 **)&v38);
      v8 = (char *)v38;
      v29 = v31;
      if ( v31 >= 0 )
        v29 = 0;
    }
  }
  if ( v28 )
  {
    sub_18001E380();
    v33 = (*(_QWORD *)(v28 + 592))-- == 1LL;
    if ( v33 )
      sub_18000A1AC(v28 - 64, v32);
    sub_18000F390();
  }
  if ( v9 )
  {
    sub_18001E380();
    v33 = (*(_QWORD *)(v9 + 592))-- == 1LL;
    if ( v33 )
      sub_18000A1AC(v9 - 64, v34);
    sub_18000F390();
  }
  if ( v8 )
  {
    sub_180017F60(v8);
    sub_1800286D8(v8);
  }
  return v29;
}
