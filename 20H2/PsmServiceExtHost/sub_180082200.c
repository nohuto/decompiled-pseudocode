/*
 * XREFs of sub_180082200 @ 0x180082200
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_180081D04 @ 0x180081D04 (sub_180081D04.c)
 *     sub_180082368 @ 0x180082368 (sub_180082368.c)
 *     sub_1800823D0 @ 0x1800823D0 (sub_1800823D0.c)
 */

__int64 __fastcall sub_180082200(_QWORD *a1, int a2)
{
  unsigned int v4; // ebx
  DWORD v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v10[3]; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+D0h] [rbp-38h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A204E, 0LL, 0LL, 2u, &v12);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      sub_180082368(a1);
      v4 = 259;
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    sub_1800823D0(a1);
    sub_180081D04(*a1 + 432LL);
    v4 = 0;
  }
  v5 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v9 = a2;
    v10[0] = v4;
    sub_1800624C0((__int64)&dword_1800B3218, byte_1800A2124, v6, v7, (__int64)v10, (__int64)&v9);
  }
  return v4;
}
