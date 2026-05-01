/*
 * XREFs of sub_1800630C4 @ 0x1800630C4
 * Callers:
 *     sub_1800627D0 @ 0x1800627D0 (sub_1800627D0.c)
 *     sub_180062D50 @ 0x180062D50 (sub_180062D50.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006A1FC @ 0x18006A1FC (sub_18006A1FC.c)
 *     sub_18006A214 @ 0x18006A214 (sub_18006A214.c)
 */

__int64 __fastcall sub_1800630C4(__int64 a1, void **a2)
{
  void *v4; // rdi
  __int64 v5; // rax
  DWORD v6; // ebx
  _QWORD v8[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  v4 = *a2;
  sub_18001E380();
  sub_1800410C4(*(_QWORD *)(a1 + 16) + 536LL, v8);
  while ( 1 )
  {
    v5 = sub_18006A1FC(v8);
    if ( !v5 )
      break;
    if ( *(void **)(v5 + 56) == v4 )
      *(_QWORD *)(v5 + 56) = 0LL;
  }
  RtlReleaseSRWLockShared(v8[0] + 16LL);
  sub_18006A214(v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  sub_18000F390();
  *a2 = 0LL;
  v6 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v6, 0LL);
  }
  return 0LL;
}
