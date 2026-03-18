/*
 * XREFs of PpmEventTracePpmProfileStatusRundown @ 0x1408F0110
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407C2770 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void PpmEventTracePpmProfileStatusRundown()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmProfileStatus;
      UserData.Size = 4;
      EtwWrite(v0, &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
