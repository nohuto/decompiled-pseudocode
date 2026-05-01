/*
 * XREFs of sub_18007D3AC @ 0x18007D3AC
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 * Callees:
 *     sub_1800030B4 @ 0x1800030B4 (sub_1800030B4.c)
 *     sub_180005A68 @ 0x180005A68 (sub_180005A68.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022120 @ 0x180022120 (sub_180022120.c)
 *     sub_180029F74 @ 0x180029F74 (sub_180029F74.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180077404 @ 0x180077404 (sub_180077404.c)
 *     sub_180077D40 @ 0x180077D40 (sub_180077D40.c)
 *     sub_18007CB94 @ 0x18007CB94 (sub_18007CB94.c)
 *     sub_1800867B4 @ 0x1800867B4 (sub_1800867B4.c)
 */

unsigned __int64 __fastcall sub_18007D3AC(__int64 a1, int a2)
{
  int v2; // esi
  int v4; // r15d
  unsigned int v5; // r14d
  int v6; // r12d
  BOOL v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  BOOL v14; // eax
  int v15; // ecx
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 result; // rax
  _BYTE v24[4]; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v25; // [rsp+6Ch] [rbp-35h] BYREF
  int v26; // [rsp+70h] [rbp-31h] BYREF
  int v27; // [rsp+74h] [rbp-2Dh] BYREF
  void *v28; // [rsp+78h] [rbp-29h] BYREF
  __int64 v29; // [rsp+80h] [rbp-21h] BYREF
  __int64 v30; // [rsp+88h] [rbp-19h] BYREF
  __int128 v31; // [rsp+90h] [rbp-11h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+A8h] [rbp+7h] BYREF

  v2 = 0;
  v32 = 0LL;
  v31 = 0LL;
  v4 = 1;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0C15, 0LL, 0LL, 2u, &v33);
  v5 = *(unsigned __int16 *)(a1 + 648);
  v6 = *(_DWORD *)(a1 + 840);
  if ( (*(_DWORD *)(a1 + 648) & 0x30000) != 0x20000LL )
    goto LABEL_35;
  v7 = sub_1800067F0(a1, a2);
  v8 = *(_DWORD *)(a1 + 560);
  v9 = v7;
  v10 = 256;
  if ( v8 == 2 )
  {
    v11 = *(_DWORD *)(a1 + 1180);
    if ( (v11 & 0x80u) != 0 )
    {
      if ( (v11 & 0x100) != 0 )
        goto LABEL_14;
      *(_DWORD *)(a1 + 1184) |= 0x100u;
    }
    else
    {
      *(_DWORD *)(a1 + 1184) |= 0x180u;
    }
    goto LABEL_13;
  }
  if ( v8 == 4 && (*(_BYTE *)(a1 + 1180) & 0x40) == 0 )
  {
    *(_DWORD *)(a1 + 1184) |= 0x40u;
LABEL_13:
    v2 = 1;
  }
LABEL_14:
  sub_1800066B0(a1, v9);
  sub_18000A110(a1);
  sub_18000F390();
  v4 = 0;
  if ( v2 )
  {
    v12 = *(_DWORD *)(a1 + 560);
    if ( v12 == 2 )
    {
      sub_180029F74(a1 - 64, 2LL);
    }
    else if ( v12 == 4 )
    {
      sub_180077D40(a1 - 64, 1);
    }
    sub_18001E380();
    sub_1800093A0(a1, 0);
    v14 = sub_1800067F0(a1, v13);
    *(_DWORD *)(a1 + 1184) = 0;
    v15 = *(_DWORD *)(a1 + 560);
    if ( v15 == 2 )
    {
      *(_DWORD *)(a1 + 1180) |= 0x180u;
    }
    else if ( v15 == 4 )
    {
      *(_DWORD *)(a1 + 1180) |= 0x40u;
    }
    sub_1800066B0(a1, v14);
    sub_18000A110(a1);
    sub_18000F390();
  }
  v16 = sub_180077404(a1, v5, &v25);
  if ( v16 >= 0 )
  {
    if ( v25 )
      goto LABEL_35;
    v16 = sub_180022120(a1 - 64, 0, 1, (__int64)&v31);
    if ( v16 >= 0 )
    {
      v16 = sub_1800867B4(v17, *((_QWORD *)&v31 + 1), (unsigned int)v32, v5, v6);
      if ( v16 >= 0 )
      {
        v10 = 0;
        v16 = 0;
      }
      else
      {
        v10 = 768;
      }
    }
    else
    {
      v10 = 512;
    }
  }
  if ( v16 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 <= 4 )
      goto LABEL_38;
    if ( sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
    {
      v24[0] = *(_BYTE *)(a1 + 560);
      v30 = *(_QWORD *)(a1 - 32);
      v28 = (void *)(a1 + 24);
      v29 = 0x1000000LL;
      v25 = v5;
      v27 = v10;
      v26 = v20;
      sub_18007CB94(
        v18,
        byte_1800A0C3C,
        v19,
        v20,
        (__int64)&v26,
        (__int64)&v27,
        &v28,
        (__int64)&v30,
        (__int64)v24,
        (__int64)&v25,
        (__int64)&v29);
    }
  }
LABEL_35:
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
  {
    v28 = *(void **)(a1 - 32);
    v26 = v5;
    sub_1800030B4((int)&dword_1800B3218, (int)&unk_1800A0DF8, v21, v22, (__int64)&v28, (__int64)&v26);
  }
LABEL_38:
  sub_180005A68((__int64)&v31);
  if ( !v4 )
  {
    sub_18001E380();
    sub_1800093A0(a1, 0);
  }
  result = 0xFFEFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 648) &= ~0x10000000000000uLL;
  return result;
}
