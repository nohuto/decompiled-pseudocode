/*
 * XREFs of sub_180027DE0 @ 0x180027DE0
 * Callers:
 *     sub_180028310 @ 0x180028310 (sub_180028310.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18000F450 @ 0x18000F450 (sub_18000F450.c)
 *     sub_18000F6E0 @ 0x18000F6E0 (sub_18000F6E0.c)
 *     sub_18000F990 @ 0x18000F990 (sub_18000F990.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_1800280E4 @ 0x1800280E4 (sub_1800280E4.c)
 *     sub_1800281A4 @ 0x1800281A4 (sub_1800281A4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180027DE0(__int64 *a1, int a2, const wchar_t *a3, _QWORD *a4)
{
  __int64 v5; // rsi
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int v9; // r13d
  const wchar_t *v10; // r12
  int v11; // eax
  __int64 v12; // r8
  int v13; // edi
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rdx
  DWORD v18; // ebx
  int v20; // [rsp+60h] [rbp-A0h]
  _QWORD *v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  _OWORD *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  _QWORD *v26; // [rsp+90h] [rbp-70h]
  _OWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v28; // [rsp+E0h] [rbp-20h]
  __int128 v29[25]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE TlsValue[144]; // [rsp+280h] [rbp+180h] BYREF
  _WORD v31[232]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v32[128]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v26 = a4;
  v5 = a2;
  sub_18000F450();
  sub_18000B7F8(TlsValue);
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v25 = -1LL;
  v20 = 0;
  v24 = 0LL;
  v23 = -1LL;
  if ( dword_1800B3218 )
  {
    v9 = 1;
    memset(v31, 0, sizeof(v31));
  }
  else
  {
    v9 = 0;
  }
  v10 = L"BAD_INPUT";
  if ( !a3 || !*a3 )
  {
    if ( (unsigned int)v5 > 4 )
      a3 = L"BAD_INPUT";
    else
      a3 = off_18008E5A8[v5];
  }
  memset(v32, 0, sizeof(v32));
  sub_1800280E4(v32, 128LL, L"Ee%d_%s", (unsigned int)v5, a3);
  if ( (unsigned int)v5 <= 4 )
    v10 = off_18008E580[v5];
  sub_18000F6E0((__int64)v32, (__int64)v10, (__int64)v29);
  if ( (unsigned int)v5 > 4 )
  {
    v13 = -1073741584;
  }
  else
  {
    v11 = sub_18000EE6C(*a1, a1[21], &v22);
    v8 = v22;
    v13 = v11;
    if ( v11 < 0 )
      goto LABEL_20;
    if ( v9 )
    {
      sub_180026C20(v31, 232LL, v22 + 24);
      v14 = *(_OWORD *)(v8 + 488);
      v23 = *(_QWORD *)(v8 - 32);
      v27[0] = v14;
      v27[1] = *(_OWORD *)(v8 + 504);
      v27[2] = *(_OWORD *)(v8 + 520);
      v27[3] = *(_OWORD *)(v8 + 536);
      v28 = *(_DWORD *)(v8 + 552);
      v24 = v27;
    }
    LODWORD(v7) = *(_DWORD *)(v8 + 560);
    v20 = (int)v7;
    if ( (_DWORD)v7 != 2 )
    {
      v13 = -1073741790;
      goto LABEL_20;
    }
    v13 = sub_1800281A4(v29, a1[20], v12, (unsigned int)v5);
    if ( v13 < 0 )
      goto LABEL_20;
    v15 = sub_180011AC0((__int64)a1, *a1, v8, v29, 0, (__int64 *)&v21);
    v7 = v21;
    v13 = v15;
    if ( v15 >= 0 )
    {
      v13 = 0;
      v25 = v21[5];
      *v26 = v25;
    }
  }
  if ( v7 )
    sub_1800274E0(v7);
  LODWORD(v7) = v20;
LABEL_20:
  if ( v8 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v8 + 592))-- == 1LL )
      sub_18000A1AC(v8 - 64, v16);
    sub_18000F390();
  }
  v18 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
  if ( v9 )
    sub_18000F990((unsigned int)v13, v25, (__int64)a1, (__int64)v31, (int)v7, (__int64)v24, v23, (__int64)v29);
  return (unsigned int)v13;
}
