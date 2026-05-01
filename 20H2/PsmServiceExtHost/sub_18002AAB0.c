/*
 * XREFs of sub_18002AAB0 @ 0x18002AAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_180029F44 @ 0x180029F44 (sub_180029F44.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

char __fastcall sub_18002AAB0(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  char result; // al
  int v6; // edx
  DWORD v7; // ebx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+F0h] [rbp-28h]
  int v13; // [rsp+F8h] [rbp-20h]
  int v14; // [rsp+FCh] [rbp-1Ch]

  sub_18000B7F8(TlsValue);
  v3 = 0;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A092B, 0, 0, 2u, &v11);
  sub_1800093A0(a2, 0);
  if ( sub_180029F44(a2) )
    v3 = sub_18000506C(v4, 1u, 2560, 0LL, 1, 0);
  *(_QWORD *)(a2 + 648) &= ~0x4000000000000uLL;
  result = sub_18000A110(a2);
  if ( v3 )
    result = sub_180017F60(*(char **)(a2 + 688));
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( result )
    {
      v8 = *(_QWORD *)(a2 - 32);
      v14 = 0;
      v9 = v8;
      v13 = v6;
      v12 = &v9;
      result = sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1155, 0, 0, 3u, &v11);
    }
  }
  v7 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v7, 0LL);
  }
  return result;
}
