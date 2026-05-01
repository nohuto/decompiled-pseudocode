/*
 * XREFs of sub_18002C410 @ 0x18002C410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800089F0 @ 0x1800089F0 (sub_1800089F0.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002C410(RPC_BINDING_HANDLE ClientBinding, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  DWORD v10; // edi
  signed int v12; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE TlsValue[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+120h] [rbp+20h] BYREF
  _DWORD *v17; // [rsp+140h] [rbp+40h]
  int v18; // [rsp+148h] [rbp+48h]
  int v19; // [rsp+14Ch] [rbp+4Ch]

  sub_18000B7F8(TlsValue);
  v7 = sub_1800089F0(ClientBinding, DestinationSid, 0LL, v13, 0LL, 0LL);
  v8 = v13[0];
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v19 = 0;
    v17 = v13;
    v13[0] = v8;
    v18 = 4;
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009A807, 0, 0, 3u, &v16);
  }
  if ( v7 < 0 )
  {
    v12 = RtlNtStatusToDosError(v7);
    v9 = v12;
    if ( v12 > 0 )
      v9 = (unsigned __int16)v12 | 0x80070000;
  }
  else
  {
    v9 = sub_18002C73C(v6, v8, DestinationSid, a2, a3);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v19 = 0;
    v17 = v13;
    v13[0] = v9;
    v18 = 4;
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009A5E1, 0, 0, 3u, &v16);
  }
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  return v9;
}
