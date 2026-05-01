/*
 * XREFs of sub_180036DD0 @ 0x180036DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 */

char __fastcall sub_180036DD0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rcx
  DWORD v5; // ebx
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+F0h] [rbp-38h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0EE7, 0LL, 0LL, 2u, &v7);
  sub_1800093A0(a2, 0);
  *(_QWORD *)(a2 + 648) |= 0x80000000000000uLL;
  sub_18001CC80(a2, 0);
  result = sub_18000A110(a2);
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( result )
      result = sub_18007C34C(v4, &unk_1800A0F0C);
  }
  v5 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v5, 0LL);
  }
  return result;
}
