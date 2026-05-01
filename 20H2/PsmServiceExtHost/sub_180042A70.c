/*
 * XREFs of sub_180042A70 @ 0x180042A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800089F0 @ 0x1800089F0 (sub_1800089F0.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180042B54 @ 0x180042B54 (sub_180042B54.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180042A70(RPC_BINDING_HANDLE ClientBinding, _QWORD *a2, __int64 a3)
{
  int v6; // edi
  DWORD v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-118h] BYREF
  __int64 v10; // [rsp+38h] [rbp-110h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE TlsValue[144]; // [rsp+90h] [rbp-B8h] BYREF

  sub_18000B7F8(TlsValue);
  v6 = sub_1800089F0(ClientBinding, DestinationSid, 0LL, &v9, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    v6 = sub_180042B54(DestinationSid, v9, &v10, a3);
    if ( v6 >= 0 )
      *a2 = v10;
  }
  v7 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  return (unsigned int)v6;
}
