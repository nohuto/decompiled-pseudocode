/*
 * XREFs of sub_18006F640 @ 0x18006F640
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18004124C @ 0x18004124C (sub_18004124C.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_18006253C @ 0x18006253C (sub_18006253C.c)
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 *     sub_18006D73C @ 0x18006D73C (sub_18006D73C.c)
 *     sub_180078004 @ 0x180078004 (sub_180078004.c)
 */

__int64 __fastcall sub_18006F640(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v5; // esi
  char v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  unsigned int v10; // r14d
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v19; // [rsp+40h] [rbp-79h]
  int v20; // [rsp+128h] [rbp+6Fh] BYREF
  int v21; // [rsp+130h] [rbp+77h] BYREF
  __int64 v22; // [rsp+138h] [rbp+7Fh] BYREF

  v22 = 0LL;
  v2 = 0;
  if ( *(_DWORD *)(a2 + 104) && (*(_BYTE *)(a2 + 144) & 2) == 0 )
  {
    v5 = 255;
    goto LABEL_32;
  }
  v6 = 1;
  sub_18001E380();
  v5 = sub_18006D300(*(__int64 **)(a1 + 40), *(void **)(a2 + 40), *(_QWORD *)(a1 + 120), &v22);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v20 = *(_DWORD *)(a2 + 108);
    v21 = v5;
    sub_1800624C0((__int64)&dword_1800B31E0, byte_18009C9F1, v7, v8, (__int64)&v21, (__int64)&v20);
  }
  v9 = v22;
  if ( v5 >= 0 )
  {
    v10 = *(_DWORD *)(a2 + 140);
    if ( (v10 & 2) != 0 || (v10 & 1) != 0 && (*(_BYTE *)(a2 + 171) & 2) == 0 )
    {
      v11 = (v10 >> 3) & 1;
      v5 = sub_18006D73C(v22, v11);
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v21 = *(_DWORD *)(a2 + 108);
        v20 = v11;
        LODWORD(v22) = v5;
        sub_18006253C((__int64)&dword_1800B31E0, byte_18009C7F4, v12, v13, (__int64)&v22, (__int64)&v21, (__int64)&v20);
      }
      if ( v5 < 0 )
        goto LABEL_24;
      v2 = 1;
    }
    v19 = *(_OWORD *)(*(_QWORD *)(a1 + 120) + 104LL);
    sub_18000F390();
    v6 = 0;
    if ( (*(_BYTE *)(a2 + 140) & 0x10) == 0 )
      goto LABEL_21;
    v5 = sub_180078004(*(HANDLE *)(a2 + 40));
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v20 = *(_DWORD *)(a2 + 108);
      v21 = v5;
      sub_1800624C0((__int64)&dword_1800B31E0, byte_18009C83B, v14, v15, (__int64)&v21, (__int64)&v20);
    }
    if ( v5 >= 0 )
    {
LABEL_21:
      if ( *(_DWORD *)(a2 + 104) != 1 )
        *(_QWORD *)(a2 + 120) = v19;
      *(_BYTE *)(a2 + 171) |= 2u;
      v2 = 0;
      *(_QWORD *)(a2 + 152) = v9;
      v9 = 0LL;
      v5 = 0;
    }
  }
LABEL_24:
  if ( v9 )
  {
    if ( !v6 )
    {
      v6 = 1;
      sub_18001E380();
    }
    sub_18006D660(*(_QWORD *)a1 + 680LL, v9, 1);
  }
  if ( v6 )
    sub_18000F390();
  if ( v2 )
    v5 = sub_18004124C(*(HANDLE *)(a2 + 40), 0LL);
LABEL_32:
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v20 = *(_DWORD *)(a2 + 108);
    v21 = v5;
    sub_1800624C0((__int64)&dword_1800B31E0, byte_18009C87C, v16, v17, (__int64)&v21, (__int64)&v20);
  }
  return (unsigned int)v5;
}
