/*
 * XREFs of sub_18007B2A4 @ 0x18007B2A4
 * Callers:
 *     sub_180080480 @ 0x180080480 (sub_180080480.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180031128 @ 0x180031128 (sub_180031128.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180076AA8 @ 0x180076AA8 (sub_180076AA8.c)
 *     sub_18007C128 @ 0x18007C128 (sub_18007C128.c)
 */

__int64 __fastcall sub_18007B2A4(__int64 a1, void *a2, _BYTE *a3)
{
  DWORD ProcessId; // eax
  DWORD v7; // edi
  int LastError; // ebx
  int v9; // r8d
  DWORD v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-B0h] BYREF
  char v18[560]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+310h] [rbp+210h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009FE25, 0LL, 0LL, 2u, &v19);
  sub_18000B7F8(TlsValue);
  ProcessId = GetProcessId(a2);
  v7 = ProcessId;
  if ( ProcessId )
  {
    LastError = sub_180031128(ProcessId, v18);
    if ( LastError >= 0 )
    {
      sub_18007C128(*(_QWORD *)a1, v7, v9, 4608, (__int64)v14);
      LastError = 0;
      *a3 = v14[0];
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v15 = *(_DWORD *)(a1 + 144);
    v16 = LastError;
    sub_180076AA8((__int64)&dword_1800B3218, byte_18009F682, v11, v12, (__int64)&v16, (__int64)&v15, (__int64)v14);
  }
  return (unsigned int)LastError;
}
