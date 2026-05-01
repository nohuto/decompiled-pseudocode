/*
 * XREFs of sub_18006DAE0 @ 0x18006DAE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 */

__int64 __fastcall sub_18006DAE0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  char *v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[22]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+100h] [rbp+0h] BYREF
  char **v18; // [rsp+120h] [rbp+20h]
  int v19; // [rsp+128h] [rbp+28h]
  int v20; // [rsp+12Ch] [rbp+2Ch]
  int *v21; // [rsp+130h] [rbp+30h]
  int v22; // [rsp+138h] [rbp+38h]
  int v23; // [rsp+13Ch] [rbp+3Ch]
  int *v24; // [rsp+140h] [rbp+40h]
  int v25; // [rsp+148h] [rbp+48h]
  int v26; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v27; // [rsp+150h] [rbp+50h]
  int v28; // [rsp+158h] [rbp+58h]
  int v29; // [rsp+15Ch] [rbp+5Ch]

  v2 = *(_DWORD *)(a2 + 116);
  if ( v2 )
  {
    memset((char *)v16 + 4, 0, 0xACuLL);
    v6 = *(_QWORD *)(a2 + 120);
    LODWORD(v16[0]) = v2;
    if ( v6 )
    {
      LODWORD(v16[21]) |= 1u;
      v16[1] = v6;
    }
    v7 = *(_DWORD *)(a2 + 140);
    HIDWORD(v16[21]) = HIDWORD(v16[21]) & 0xFFFFFFFD | ((v7 & 0x20 | 0x50) >> 4);
    if ( (v7 & 0x80u) != 0 )
      HIDWORD(v16[0]) |= 2u;
    sub_18001E380();
    v5 = sub_18006BAD0(*(__int64 **)(a1 + 40), (int *)v16, (v7 >> 6) & 1, &v14);
    if ( v5 >= 0 )
    {
      v5 = 0;
      *(_QWORD *)(a1 + 120) = v14;
    }
    sub_18000F390();
  }
  else
  {
    v5 = 255;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v10 = *(_QWORD *)(a2 + 120);
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v15 = v10;
    v12 = *(_DWORD *)(a2 + 116);
    v13 = *(_DWORD *)(a2 + 108);
    v27 = &v15;
    v24 = &v12;
    v21 = &v13;
    v18 = &v14;
    v25 = v9;
    v22 = v9;
    v19 = v9;
    LODWORD(v14) = v5;
    v28 = 8;
    sub_18002E278(v8, (unsigned __int8 *)dword_18009CB23, 0LL, 0LL, 6u, &v17);
  }
  return (unsigned int)v5;
}
