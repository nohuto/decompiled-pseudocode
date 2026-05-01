/*
 * XREFs of sub_180068B10 @ 0x180068B10
 * Callers:
 *     sub_180062EA0 @ 0x180062EA0 (sub_180062EA0.c)
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180067F74 @ 0x180067F74 (sub_180067F74.c)
 *     sub_18006C2FC @ 0x18006C2FC (sub_18006C2FC.c)
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 */

__int64 __fastcall sub_180068B10(__int64 a1, __int64 a2)
{
  char *v4; // rax
  char *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  DWORD v9; // ebx
  int v11; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-F4h] BYREF
  int v13; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v15[144]; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+F0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009B638, 0LL, 0LL, 2u, &v16);
  sub_18000B63C(&v13, v15);
  sub_18001E380();
  v4 = (char *)sub_18006C2FC(*(_QWORD *)a1, a2);
  v5 = v4;
  if ( v4 && *((_QWORD *)v4 + 7) == a1 )
  {
    sub_18006D504(v4);
    v6 = 0;
  }
  else
  {
    v6 = -1073741584;
  }
  if ( v5 )
    sub_1800265B0(v5);
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v11 = *(_DWORD *)(a1 + 56);
    v14 = a2;
    v12 = v6;
    sub_180067F74((__int64)&dword_1800B31E0, byte_18009B5ED, v7, v8, (__int64)&v12, (__int64)&v11, (__int64)&v14);
  }
  if ( v13 )
  {
    v9 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return v6;
}
