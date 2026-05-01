/*
 * XREFs of sub_18007ADB0 @ 0x18007ADB0
 * Callers:
 *     sub_180080570 @ 0x180080570 (sub_180080570.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 *     sub_18008089C @ 0x18008089C (sub_18008089C.c)
 */

__int64 __fastcall sub_18007ADB0(__int64 a1, __int64 a2, int *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  int v8; // ebx
  DWORD v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-E0h] BYREF
  char TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A003B, 0LL, 0LL, 2u, &v16);
  sub_18000B7F8(TlsValue);
  v6 = sub_18008089C(a1, a2);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v8 = sub_18007FFAC(*(_QWORD *)(v6 + 56), a1, &v13);
    if ( v8 >= 0 )
    {
      v8 = 0;
      *a3 = v13;
    }
    sub_1800274E0(v7);
  }
  else
  {
    v8 = -1073741275;
  }
  v9 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v14 = a2;
    v13 = v8;
    sub_180063424((__int64)&dword_1800B3218, byte_18009F5CE, v10, v11, (__int64)&v13, (__int64)&v14);
  }
  return (unsigned int)v8;
}
