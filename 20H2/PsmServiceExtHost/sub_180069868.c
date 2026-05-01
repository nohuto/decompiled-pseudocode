/*
 * XREFs of sub_180069868 @ 0x180069868
 * Callers:
 *     sub_18006A140 @ 0x18006A140 (sub_18006A140.c)
 *     sub_18006A1F0 @ 0x18006A1F0 (sub_18006A1F0.c)
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_1800701C0 @ 0x1800701C0 (sub_1800701C0.c)
 */

__int64 __fastcall sub_180069868(__int64 a1, void *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  DWORD v7; // ebx
  DWORD ProcessId; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-D4h] BYREF
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+D0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)&qword_1800B41A8;
  sub_18000B63C(&v11, v12);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009B9A4, 0LL, 0LL, 2u, &v13);
  v4 = sub_1800701C0(v2 + 1616, a2);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v10 = v4;
    ProcessId = GetProcessId(a2);
    sub_1800624C0((__int64)&dword_1800B31E0, byte_18009B755, v5, v6, (__int64)&v10, (__int64)&ProcessId);
  }
  if ( v11 )
  {
    v7 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v7, 0LL);
    }
  }
  return v4;
}
