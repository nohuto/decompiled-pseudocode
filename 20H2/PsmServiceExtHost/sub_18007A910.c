/*
 * XREFs of sub_18007A910 @ 0x18007A910
 * Callers:
 *     sub_1800804F0 @ 0x1800804F0 (sub_1800804F0.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800680C0 @ 0x1800680C0 (sub_1800680C0.c)
 *     sub_18007EA8C @ 0x18007EA8C (sub_18007EA8C.c)
 */

__int64 __fastcall sub_18007A910(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  DWORD v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+40h] [rbp-108h] BYREF
  int v12; // [rsp+44h] [rbp-104h] BYREF
  __int64 v13; // [rsp+48h] [rbp-100h] BYREF
  __int64 v14; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+F0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F31F, 0LL, 0LL, 2u, &v16);
  sub_18000B7F8(TlsValue);
  v6 = sub_18007EA8C(*(_QWORD *)a1, a2, a3);
  if ( v6 >= 0 )
    v6 = 0;
  v7 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v11 = *(_DWORD *)(a1 + 140);
    v13 = a3;
    v14 = a2;
    v12 = v6;
    sub_1800680C0(
      (__int64)&dword_1800B3218,
      byte_18009FFB1,
      v8,
      v9,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v14,
      (__int64)&v13);
  }
  return (unsigned int)v6;
}
