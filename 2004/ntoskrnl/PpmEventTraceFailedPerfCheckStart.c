/*
 * XREFs of PpmEventTraceFailedPerfCheckStart @ 0x1403594AC
 * Callers:
 *     PpmCheckPeriodicStart @ 0x14021FEF0 (PpmCheckPeriodicStart.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceFailedPerfCheckStart(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( PpmEtwRegistered )
  {
    v1 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_FAILED_START) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      EtwWriteEx(v1, &PPM_ETW_PERF_CHECK_FAILED_START, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
