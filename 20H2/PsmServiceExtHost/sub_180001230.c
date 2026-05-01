/*
 * XREFs of sub_180001230 @ 0x180001230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800012D4 @ 0x1800012D4 (sub_1800012D4.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_180001230(__int64 a1, __int64 a2)
{
  int result; // eax
  DWORD v4; // ebx
  __int64 v5; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+30h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  sub_18001E380();
  RtlQueryUnbiasedInterruptTime(&v5);
  sub_1800012D4(a2, v5);
  result = sub_18000F390();
  v4 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v4, 0LL);
  }
  return result;
}
