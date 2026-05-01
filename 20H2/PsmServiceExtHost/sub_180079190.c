/*
 * XREFs of sub_180079190 @ 0x180079190
 * Callers:
 *     sub_180080360 @ 0x180080360 (sub_180080360.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_18008057C @ 0x18008057C (sub_18008057C.c)
 *     sub_18008089C @ 0x18008089C (sub_18008089C.c)
 */

__int64 __fastcall sub_180079190(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v6; // ebx
  DWORD v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0597, 0LL, 0LL, 2u, &v14);
  sub_18000B7F8(TlsValue);
  v4 = sub_18008089C(a1, a2);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v6 = sub_18008057C(v4);
    if ( v6 >= 0 )
      v6 = 0;
    sub_1800274E0(v5);
  }
  else
  {
    v6 = -1073741275;
  }
  v7 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v12 = a2;
    v11 = v6;
    sub_180063424((__int64)&dword_1800B3218, byte_1800A00CD, v8, v9, (__int64)&v11, (__int64)&v12);
  }
  return (unsigned int)v6;
}
