/*
 * XREFs of sub_1800820A0 @ 0x1800820A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800823D0 @ 0x1800823D0 (sub_1800823D0.c)
 */

__int64 __fastcall sub_1800820A0(__int64 a1, int a2)
{
  DWORD v4; // ebx
  int v6; // [rsp+30h] [rbp-E8h] BYREF
  char TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+D0h] [rbp-48h] BYREF
  int *v9; // [rsp+F0h] [rbp-28h]
  int v10; // [rsp+F8h] [rbp-20h]
  int v11; // [rsp+FCh] [rbp-1Ch]

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A2178, 0LL, 0LL, 2u, &v8);
  if ( a2 < 0 )
    sub_1800823D0(a1);
  v4 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v11 = 0;
    v9 = &v6;
    v6 = a2;
    v10 = 4;
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A20F3, 0LL, 0LL, 3u, &v8);
  }
  return 0LL;
}
