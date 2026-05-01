/*
 * XREFs of sub_180037748 @ 0x180037748
 * Callers:
 *     sub_180037700 @ 0x180037700 (sub_180037700.c)
 * Callees:
 *     sub_18000375C @ 0x18000375C (sub_18000375C.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F0F4 @ 0x18000F0F4 (sub_18000F0F4.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_1800378A4 @ 0x1800378A4 (sub_1800378A4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078894 @ 0x180078894 (sub_180078894.c)
 */

__int64 __fastcall sub_180037748(__int64 a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v10; // edi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  DWORD v13; // ebx
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[544]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+320h] [rbp+220h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F0E6, 0LL, 0LL, 2u, &v17);
  sub_18000B7F8(TlsValue);
  v10 = sub_1800378A4(a2, a3, a4, a5, (__int64)v16);
  if ( v10 >= 0 )
  {
    v11 = (_QWORD *)sub_18000F0F4(a1, (__int64)v16);
    if ( v11 )
    {
      *a6 = sub_18000375C();
      v10 = 0;
      sub_1800274E0(v11);
    }
    else
    {
      v10 = -1073741275;
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
    sub_180078894(v12, &unk_18009FBED);
  v13 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  return (unsigned int)v10;
}
