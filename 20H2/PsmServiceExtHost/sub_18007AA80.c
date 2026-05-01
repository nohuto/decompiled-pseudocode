/*
 * XREFs of sub_18007AA80 @ 0x18007AA80
 * Callers:
 *     sub_180080440 @ 0x180080440 (sub_180080440.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800229F0 @ 0x1800229F0 (sub_1800229F0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180076564 @ 0x180076564 (sub_180076564.c)
 *     sub_1800811D8 @ 0x1800811D8 (sub_1800811D8.c)
 */

__int64 __fastcall sub_18007AA80(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  DWORD v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[4]; // [rsp+40h] [rbp-E8h] BYREF
  int v15; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+E0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F64C, 0LL, 0LL, 2u, &v18);
  sub_18000B7F8(TlsValue);
  v6 = 0LL;
  if ( a3 < 3u || a3 > 0x30u )
  {
    v9 = -1073741583;
  }
  else
  {
    v7 = sub_1800229F0(a1, a2);
    v6 = (_QWORD *)v7;
    if ( !v7 )
    {
      v9 = -1073741275;
      goto LABEL_13;
    }
    LOBYTE(v8) = a3;
    v9 = sub_1800811D8(v7, v8);
    if ( v9 >= 0 )
      v9 = 0;
  }
  if ( v6 )
    sub_1800274E0(v6);
LABEL_13:
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v14[0] = a3;
    v16 = a2;
    v15 = v9;
    sub_180076564((__int64)&dword_1800B3218, byte_18009FD73, v11, v12, (__int64)&v15, (__int64)&v16, (__int64)v14);
  }
  return (unsigned int)v9;
}
