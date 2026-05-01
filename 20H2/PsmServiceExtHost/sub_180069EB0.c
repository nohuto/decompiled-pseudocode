/*
 * XREFs of sub_180069EB0 @ 0x180069EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180073D58 @ 0x180073D58 (sub_180073D58.c)
 */

__int64 __fastcall sub_180069EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  unsigned int v8; // eax
  DWORD v9; // ebx
  unsigned int v10; // edi
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-B8h] BYREF

  sub_18000B7F8(TlsValue);
  v8 = sub_180073D58(v7, a2, a3, a4);
  v9 = dwTlsIndex;
  v10 = v8;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  return v10;
}
