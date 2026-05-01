/*
 * XREFs of sub_1800043D0 @ 0x1800043D0
 * Callers:
 *     sub_180036350 @ 0x180036350 (sub_180036350.c)
 *     sub_180062800 @ 0x180062800 (sub_180062800.c)
 *     sub_180073640 @ 0x180073640 (sub_180073640.c)
 * Callees:
 *     sub_180004474 @ 0x180004474 (sub_180004474.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800043D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v8; // edi
  DWORD v9; // ebx
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-B8h] BYREF

  sub_18000B7F8(TlsValue);
  sub_18001E380(v6);
  LOBYTE(v7) = 1;
  v8 = sub_180004474(a1, a2, a3, v7);
  sub_18000F390();
  v9 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  return v8;
}
