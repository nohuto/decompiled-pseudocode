/*
 * XREFs of _assert @ 0x180028750
 * Callers:
 *     sub_180028B54 @ 0x180028B54 (sub_180028B54.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

void __fastcall __noreturn assert(__int64 a1, void *a2, void *a3)
{
  __int64 v6; // rdi
  char *v7; // r14
  __int64 v8; // r8
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int16 v11; // ax
  _WORD *v12; // rax
  _WORD *v13; // rcx
  __int16 v14; // ax
  _WORD *v15; // rax
  char *v16; // rcx
  __int64 v17; // r8
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // rdx
  int v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v33[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  char v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+51h] [rbp-AFh]
  __int16 v37; // [rsp+55h] [rbp-ABh]
  char v38; // [rsp+57h] [rbp-A9h]
  char v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+1E0h] [rbp+E0h]
  void *v41; // [rsp+1E8h] [rbp+E8h]
  void *v42; // [rsp+1F0h] [rbp+F0h]
  DWORD ProcessId; // [rsp+1F8h] [rbp+F8h]
  DWORD v44; // [rsp+1FCh] [rbp+FCh]
  _QWORD v45[50]; // [rsp+200h] [rbp+100h] BYREF

  *(_QWORD *)v33 = 0LL;
  *(_QWORD *)v32 = 0LL;
  v34 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(v45, 0, 0x188uLL);
  v8 = 64LL;
  LODWORD(v45[0]) = 8397888;
  v9 = 64LL;
  v10 = (_WORD *)&v45[1] + 2;
  do
  {
    if ( v9 == -2147483582 )
      break;
    v11 = *(_WORD *)((char *)v10 + (char *)L"ProcessDependency" - ((char *)&v45[1] + 4));
    if ( !v11 )
      break;
    *v10++ = v11;
    --v9;
  }
  while ( v9 );
  v12 = v10 - 1;
  if ( v9 )
    v12 = v10;
  v13 = (_WORD *)&v45[17] + 2;
  *v12 = 0;
  do
  {
    if ( v8 == -2147483582 )
      break;
    v14 = *(_WORD *)((char *)v13 + &unk_180095550 - (_UNKNOWN *)((char *)&v45[17] + 4));
    if ( !v14 )
      break;
    *v13++ = v14;
    --v8;
  }
  while ( v8 );
  v15 = v13 - 1;
  if ( v8 )
    v15 = v13;
  *v15 = 0;
  HIDWORD(v45[34]) = -1;
  HIDWORD(v45[33]) = 5;
  memset(&v45[35], 0, 0x68uLL);
  LODWORD(v45[0]) |= 0x400u;
  v16 = &v39;
  LODWORD(v45[46]) = 33;
  v45[40] |= 0x80uLL;
  memset(&v45[41], 255, 32);
  v17 = 3LL;
  v40 = 0LL;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v18 = v45;
  v35 = 0;
  do
  {
    v19 = v18[1];
    *(_OWORD *)v16 = *v18;
    v20 = v18[2];
    *((_OWORD *)v16 + 1) = v19;
    v21 = v18[3];
    *((_OWORD *)v16 + 2) = v20;
    v22 = v18[4];
    *((_OWORD *)v16 + 3) = v21;
    v23 = v18[5];
    *((_OWORD *)v16 + 4) = v22;
    v24 = v18[6];
    *((_OWORD *)v16 + 5) = v23;
    v25 = v18[7];
    v18 += 8;
    *((_OWORD *)v16 + 6) = v24;
    v16 += 128;
    *((_OWORD *)v16 - 1) = v25;
    --v17;
  }
  while ( v17 );
  *(_QWORD *)v16 = *(_QWORD *)v18;
  v41 = a2;
  v42 = a3;
  ProcessId = GetProcessId(a2);
  v44 = GetProcessId(a3);
  v26 = sub_18000EE6C(a1, (__int64)a2, v33);
  v27 = *(_QWORD *)v33;
  if ( v26 >= 0 )
  {
    v28 = sub_18000EE6C(a1, (__int64)a3, v32);
    v6 = *(_QWORD *)v32;
    if ( v28 >= 0 )
    {
      sub_18000B2DC(v27, *(__int64 *)v32, (__int64)&v35, 0LL, (__int64 **)&v34);
      v7 = (char *)v34;
    }
  }
  if ( v27 )
  {
    sub_18001E380();
    v30 = (*(_QWORD *)(v27 + 592))-- == 1LL;
    if ( v30 )
      sub_18000A1AC(v27 - 64, v29);
    sub_18000F390();
  }
  if ( v6 )
  {
    sub_18001E380();
    v30 = (*(_QWORD *)(v6 + 592))-- == 1LL;
    if ( v30 )
      sub_18000A1AC(v6 - 64, v31);
    sub_18000F390();
  }
  if ( v7 )
  {
    sub_180017F60(v7);
    sub_1800286D8((__int64)v7);
  }
}
