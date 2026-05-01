/*
 * XREFs of sub_18006AE28 @ 0x18006AE28
 * Callers:
 *     sub_180029FD0 @ 0x180029FD0 (sub_180029FD0.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_1800730C0 @ 0x1800730C0 (sub_1800730C0.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 *     sub_18002A490 @ 0x18002A490 (sub_18002A490.c)
 *     sub_18006A690 @ 0x18006A690 (sub_18006A690.c)
 */

__int64 __fastcall sub_18006AE28(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  int v3; // ebx
  __int64 (__fastcall *v6)(); // r9
  unsigned int v7; // edx
  int v8; // r15d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // al
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+38h] BYREF
  int v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  v3 = *(_DWORD *)(a2 + 16) & 2;
  v16 = 0LL;
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    if ( v3 )
      sub_18001E380();
    sub_180021E08(a1, 0LL, 0LL, &v16);
    if ( v3 )
      sub_18000F390();
    v2 = v16;
    v6 = (__int64 (__fastcall *)())&sub_18006AFB0;
    v7 = 8193;
  }
  else
  {
    v7 = 0x2000;
    v6 = sub_18006B0C0;
  }
  v8 = sub_18002A490(a1, v7, 0, (__int64 (__fastcall *)(__int64, HANDLE, _QWORD, __int64))v6, a2);
  if ( v8 >= 0 )
  {
    if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    {
      if ( v3 )
        sub_18001E380();
      v8 = sub_180021E08(a1, 0LL, 0LL, &v16);
      if ( v3 )
        sub_18000F390();
      if ( v8 >= 0 && v2 >= v16 )
      {
        v9 = (*(_BYTE *)(a2 + 16) & 4) == 0;
        *(_QWORD *)(a2 + 8) = v2 - v16;
        if ( !v9 )
          *(_DWORD *)(a1 + 1240) |= 8u;
      }
    }
    if ( v3 )
      sub_18001E380();
    *(_QWORD *)(a1 + 1208) += *(_QWORD *)(a2 + 8);
    if ( v3 )
      sub_18000F390();
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 25LL) )
  {
    v13 = (*(_DWORD *)(a2 + 16) & 2) != 0;
    v17 = v8;
    LOBYTE(v16) = v13;
    v18 = *(_QWORD *)(a2 + 8);
    v15 = *(_QWORD *)(a1 + 32);
    sub_18006A690(v10, byte_18009BDD8, v11, v12, (__int64)&v17, (__int64)&v15, (__int64)&v18, (__int64)&v16);
  }
  return (unsigned int)v8;
}
