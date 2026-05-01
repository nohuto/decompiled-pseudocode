/*
 * XREFs of sub_18007A780 @ 0x18007A780
 * Callers:
 *     sub_1800804E0 @ 0x1800804E0 (sub_1800804E0.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800625D0 @ 0x1800625D0 (sub_1800625D0.c)
 *     sub_18007EC18 @ 0x18007EC18 (sub_18007EC18.c)
 */

__int64 __fastcall sub_18007A780(__int64 a1, void *a2, void *a3)
{
  int v6; // edi
  DWORD v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  DWORD ProcessId; // [rsp+40h] [rbp-F8h] BYREF
  DWORD v12; // [rsp+44h] [rbp-F4h] BYREF
  int v13; // [rsp+48h] [rbp-F0h] BYREF
  int v14; // [rsp+4Ch] [rbp-ECh] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+E0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F951, 0LL, 0LL, 2u, &v16);
  sub_18000B7F8(TlsValue);
  v6 = sub_18007EC18(*(_QWORD *)a1, a2, a3);
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
    ProcessId = GetProcessId(a3);
    v12 = GetProcessId(a2);
    v13 = *(_DWORD *)(a1 + 140);
    v14 = v6;
    sub_1800625D0(
      (__int64)&dword_1800B3218,
      byte_1800A05BA,
      v8,
      v9,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&ProcessId);
  }
  return (unsigned int)v6;
}
