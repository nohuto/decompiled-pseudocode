/*
 * XREFs of sub_180073B80 @ 0x180073B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_1800739C4 @ 0x1800739C4 (sub_1800739C4.c)
 */

unsigned int __fastcall sub_180073B80(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int result; // eax
  DWORD v5; // ebx
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  sub_18001E380();
  sub_1800739C4(a2);
  v3 = *(_QWORD *)a2;
  *(_DWORD *)(a2 + 1352) &= ~8u;
  (*(void (__fastcall **)(__int64))(v3 + 16))(a2);
  result = (unsigned int)sub_18000F390();
  v5 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v5, 0LL);
  }
  return result;
}
