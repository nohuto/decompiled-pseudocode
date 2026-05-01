/*
 * XREFs of sub_180070AA0 @ 0x180070AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002A490 @ 0x18002A490 (sub_18002A490.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006A72C @ 0x18006A72C (sub_18006A72C.c)
 */

char __fastcall sub_180070AA0(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  char result; // al
  DWORD v7; // ebx
  __int64 v8; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+F0h] [rbp-28h]
  int v13; // [rsp+F8h] [rbp-20h]
  int v14; // [rsp+FCh] [rbp-1Ch]

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 17LL) )
  {
    v9 = *(unsigned int *)(a2 + 1320);
    v8 = *(_QWORD *)(a2 + 32);
    sub_18006A72C((__int64)&dword_1800B31E0, byte_18009CF0C, v3, v4, (__int64)&v8, (__int64)&v9);
  }
  sub_18002A490(
    a2,
    0x3000u,
    1,
    (__int64 (__fastcall *)(__int64, HANDLE, _QWORD, __int64))sub_180070E50,
    *(unsigned int *)(a2 + 1320));
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 17LL) )
  {
    v5 = *(_QWORD *)(a2 + 32);
    v14 = 0;
    v8 = v5;
    v13 = 8;
    v12 = &v8;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009CF75, 0LL, 0LL, 3u, &v11);
  }
  NtSetEvent(*(HANDLE *)(a2 + 1312), 0LL);
  result = sub_1800265B0((char *)a2);
  v7 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v7, 0LL);
  }
  return result;
}
