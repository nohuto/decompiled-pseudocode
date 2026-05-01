/*
 * XREFs of sub_180006B7C @ 0x180006B7C
 * Callers:
 *     sub_180006B70 @ 0x180006B70 (sub_180006B70.c)
 * Callees:
 *     sub_180006CA4 @ 0x180006CA4 (sub_180006CA4.c)
 *     sub_18000B7C0 @ 0x18000B7C0 (sub_18000B7C0.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800229F0 @ 0x1800229F0 (sub_1800229F0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180006B7C(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // ebx
  DWORD v8; // edi
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A0343, 0, 0, 2u, &v15);
  if ( (unsigned int)sub_18000B7C0() )
  {
    v4 = 0;
  }
  else
  {
    sub_18000B7F8(TlsValue);
    v4 = 1;
  }
  v5 = sub_1800229F0(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_180006CA4(v5);
    if ( v7 >= 0 )
      v7 = 0;
    sub_1800274E0(v6);
  }
  else
  {
    v7 = -1073741275;
  }
  if ( v4 )
  {
    v8 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v8, 0LL);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 8LL) )
  {
    v13 = a2;
    v12 = v7;
    sub_180063424((unsigned int)&dword_1800B3218, (unsigned int)&unk_18009F075, v9, v10, (__int64)&v12, (__int64)&v13);
  }
  return (unsigned int)v7;
}
