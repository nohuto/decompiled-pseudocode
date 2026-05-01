/*
 * XREFs of sub_18007AC0C @ 0x18007AC0C
 * Callers:
 *     sub_180080450 @ 0x180080450 (sub_180080450.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800229F0 @ 0x1800229F0 (sub_1800229F0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180076DB0 @ 0x180076DB0 (sub_180076DB0.c)
 *     sub_180081288 @ 0x180081288 (sub_180081288.c)
 */

__int64 __fastcall sub_18007AC0C(_QWORD *a1, __int64 a2, unsigned __int8 *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  int v8; // ebx
  DWORD v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+40h] [rbp-F8h] BYREF
  int v15; // [rsp+44h] [rbp-F4h] BYREF
  int v16; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+F0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0007, 0LL, 0LL, 2u, &v19);
  sub_18000B7F8(TlsValue);
  v6 = 0LL;
  if ( *a3 < 3u || *a3 > 0x30u )
  {
    v8 = -1073741583;
  }
  else
  {
    if ( (unsigned __int8)(a3[1] - 2) > 0x63u )
    {
      v8 = -1073741583;
      goto LABEL_15;
    }
    v7 = sub_1800229F0(a1, a2);
    v6 = (_QWORD *)v7;
    if ( !v7 )
    {
      v8 = -1073741275;
      goto LABEL_15;
    }
    v8 = sub_180081288(v7, a3);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( v6 )
    sub_1800274E0(v6);
LABEL_15:
  v9 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v14 = a3[1];
    v15 = *a3;
    v17 = a2;
    v16 = v8;
    sub_180076DB0(v10, byte_18009FF48, v11, v12, (__int64)&v16, (__int64)&v17, (__int64)&v15, (__int64)&v14);
  }
  return (unsigned int)v8;
}
