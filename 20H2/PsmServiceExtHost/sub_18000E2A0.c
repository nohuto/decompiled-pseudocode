/*
 * XREFs of sub_18000E2A0 @ 0x18000E2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_18000E2A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int result; // eax
  DWORD v5; // ebx
  int v6; // edx
  __int64 v7; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v10; // [rsp+F0h] [rbp-28h]
  int v11; // [rsp+F8h] [rbp-20h]
  int v12; // [rsp+FCh] [rbp-1Ch]

  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1554, 0, 0, 2u, &v9);
  sub_18000B7F8(TlsValue);
  while ( 1 )
  {
    sub_18000E1BC((__int64)a2);
    if ( a2[14] == a2[13] || !(unsigned int)sub_180008F9C((__int64)a2, 0LL) )
      break;
    sub_18000E244((__int64)a2);
    sub_180017F60(a2);
  }
  *((_DWORD *)a2 + 33) &= ~1u;
  sub_18000E244((__int64)a2);
  v3 = *a2;
  result = sub_1800286D8(a2);
  v5 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    result = TlsSetValue(v5, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470(&dword_1800B3218, 8LL);
    if ( (_BYTE)result )
    {
      v12 = 0;
      v10 = &v7;
      v11 = v6;
      v7 = v3;
      return sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1529, 0, 0, 3u, &v9);
    }
  }
  return result;
}
