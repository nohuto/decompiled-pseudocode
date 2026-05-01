/*
 * XREFs of sub_18007BC10 @ 0x18007BC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006253C @ 0x18006253C (sub_18006253C.c)
 *     sub_18007BE54 @ 0x18007BE54 (sub_18007BE54.c)
 */

__int64 __fastcall sub_18007BC10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  DWORD v7; // ebx
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+40h] [rbp-D8h] BYREF
  int v13; // [rsp+44h] [rbp-D4h] BYREF
  int v14; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+E0h] [rbp-38h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A06D2, 0LL, 0LL, 2u, &v16);
  v6 = sub_18007BE54(a4, a5);
  v7 = dwTlsIndex;
  v8 = v6;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v12 = *(_DWORD *)(a5 + 8);
    v13 = *(_DWORD *)(a5 + 12);
    v14 = v8;
    sub_18006253C((__int64)&dword_1800B3218, byte_1800A065F, v9, v10, (__int64)&v14, (__int64)&v13, (__int64)&v12);
  }
  return 0LL;
}
