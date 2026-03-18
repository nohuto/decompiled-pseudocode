/*
 * XREFs of PpmCheckRun @ 0x14021F580
 * Callers:
 *     PpmCheckStart @ 0x14021EF80 (PpmCheckStart.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

BOOLEAN PpmCheckRun()
{
  int v0; // ecx
  __int64 (*v1)(void); // r8
  BOOLEAN result; // al
  REGHANDLE v3; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF

  v0 = PpmCheckPipelineIndex;
  v1 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( v1 )
  {
    while ( 1 )
    {
      PpmCheckPipelineIndex = v0 + 1;
      result = v1();
      if ( !result )
        break;
      v0 = PpmCheckPipelineIndex;
      v1 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
      if ( !v1 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmEtwRegistered )
    {
      v3 = PpmEtwHandle;
      result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
      if ( result )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        return EtwWriteEx(v3, &PPM_ETW_PERF_CHECK_STOP, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
  }
  return result;
}
