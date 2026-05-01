/*
 * XREFs of sub_180068764 @ 0x180068764
 * Callers:
 *     sub_180062E70 @ 0x180062E70 (sub_180062E70.c)
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180041644 @ 0x180041644 (sub_180041644.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_18006D5A8 @ 0x18006D5A8 (sub_18006D5A8.c)
 */

__int64 __fastcall sub_180068764(__int64 a1, int a2, _QWORD *a3)
{
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DWORD v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-89h] BYREF
  int v13; // [rsp+38h] [rbp-81h] BYREF
  int v14; // [rsp+3Ch] [rbp-7Dh] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+D0h] [rbp+17h] BYREF

  sub_18000B63C(&v14, v15);
  v12 = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009BB4C, 0LL, 0LL, 2u, &v16);
  sub_18001E380();
  v6 = sub_180041644(a1 + 680, a2, &v12);
  if ( v6 < 0 )
  {
    v7 = v12;
  }
  else
  {
    v7 = 0LL;
    *a3 = v12;
    v6 = 0;
  }
  if ( v7 )
    sub_18006D5A8(v7);
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v13 = a2;
    LODWORD(v12) = v6;
    sub_1800624C0((__int64)&dword_1800B31E0, byte_18009B5AE, v8, v9, (__int64)&v12, (__int64)&v13);
  }
  if ( v14 )
  {
    v10 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v10, 0LL);
    }
  }
  return (unsigned int)v6;
}
