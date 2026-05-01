/*
 * XREFs of sub_180069DF0 @ 0x180069DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006A214 @ 0x18006A214 (sub_18006A214.c)
 */

__int64 __fastcall sub_180069DF0(_QWORD *a1)
{
  void *v2; // rbx
  DWORD v3; // ebx
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  sub_18001E380();
  v2 = (void *)*a1;
  sub_18006A214(*a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  sub_18000F390();
  *a1 = 0LL;
  v3 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v3, 0LL);
  }
  return 0LL;
}
