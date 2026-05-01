/*
 * XREFs of sub_18007B468 @ 0x18007B468
 * Callers:
 *     sub_180080380 @ 0x180080380 (sub_180080380.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_18008011C @ 0x18008011C (sub_18008011C.c)
 *     sub_18008089C @ 0x18008089C (sub_18008089C.c)
 */

__int64 __fastcall sub_18007B468(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // ebx
  DWORD v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+30h] [rbp-108h] BYREF
  __int64 v16; // [rsp+38h] [rbp-100h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+D0h] [rbp-68h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009FB68, 0LL, 0LL, 2u, &v18);
  sub_18000B7F8(TlsValue);
  v8 = sub_18008089C(a1, a2);
  v9 = (_QWORD *)v8;
  if ( v8 )
  {
    v10 = sub_18008011C(*(_QWORD *)(v8 + 56), a3, a4, a1, -1);
    if ( v10 >= 0 )
      v10 = 0;
    sub_1800274E0(v9);
  }
  else
  {
    v10 = -1073741275;
  }
  v11 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v16 = a2;
    v15 = v10;
    sub_180063424((__int64)&dword_1800B3218, byte_1800A04FB, v12, v13, (__int64)&v15, (__int64)&v16);
  }
  return (unsigned int)v10;
}
