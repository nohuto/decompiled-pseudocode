/*
 * XREFs of sub_180080E10 @ 0x180080E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002AA58 @ 0x18002AA58 (sub_18002AA58.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180080FF4 @ 0x180080FF4 (sub_180080FF4.c)
 *     sub_18008147C @ 0x18008147C (sub_18008147C.c)
 */

char __fastcall sub_180080E10(__int64 a1, _QWORD *a2, __int64 a3)
{
  char *v5; // rsi
  char result; // al
  DWORD v7; // esi
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+F0h] [rbp-28h]
  int v13; // [rsp+F8h] [rbp-20h]
  int v14; // [rsp+FCh] [rbp-1Ch]

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A1DB4, 0LL, 0LL, 2u, &v11);
  sub_1800093A0(a2[10], 0);
  sub_18008147C(a2);
  if ( a2[66] == a3 )
  {
    a2[66] = 0LL;
    a2[67] = 0LL;
    sub_180080FF4(a2);
    sub_18001BD70(a2[10]);
  }
  else
  {
    a3 = 0LL;
  }
  sub_18008147C(a2);
  if ( a3 )
    v5 = (char *)sub_18002AA58(a2[10]);
  else
    v5 = 0LL;
  sub_18000A110(a2[10]);
  result = sub_1800274E0(a2);
  if ( v5 )
    result = sub_180017F60(v5);
  v7 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    result = TlsSetValue(v7, 0LL);
  }
  if ( a3 )
    result = TpReleaseTimer(a3);
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 64LL);
    if ( result )
    {
      v8 = a2[5];
      v14 = 0;
      v9 = v8;
      v13 = 8;
      v12 = &v9;
      return sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A1D78, 0LL, 0LL, 3u, &v11);
    }
  }
  return result;
}
