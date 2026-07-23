/*
 * XREFs of TppExceptionFilter @ 0x180112354
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x180112E68 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180112EEC (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D920 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100940 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

LONG __fastcall TppExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  int v5; // eax
  __int64 (__fastcall *v6)(PEXCEPTION_POINTERS); // rbx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v5 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &v8, 4u, 0LL);
    if ( v5 < 0 )
      RtlRaiseStatus(v5);
    v2 = v8;
    `RtlpGetCookieValue'::`2'::CookieValue = v8;
  }
  v6 = (__int64 (__fastcall *)(PEXCEPTION_POINTERS))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v6 )
    return v6(ExceptionPointers);
  else
    return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
