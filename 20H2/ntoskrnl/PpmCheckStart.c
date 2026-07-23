/*
 * XREFs of PpmCheckStart @ 0x1402888C0
 * Callers:
 *     PpmCheckPeriodicStart @ 0x14030BEB0 (PpmCheckPeriodicStart.c)
 *     PpmCheckCustomRun @ 0x14037CE48 (PpmCheckCustomRun.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     PpmCheckRun @ 0x1402887D0 (PpmCheckRun.c)
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x1403807E8 (PpmPerfSetAllDomainsToUpdate.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rbx
  int v2; // edi
  REGHANDLE v3; // rsi
  int v5; // edx
  int v6; // [rsp+40h] [rbp-58h] BYREF
  __int64 v7; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+68h] [rbp-30h]
  __int64 v11; // [rsp+70h] [rbp-28h]
  int *v12; // [rsp+78h] [rbp-20h]
  __int64 v13; // [rsp+80h] [rbp-18h]

  v1 = a1;
  PpmCheckCurrentPipelineId = a1;
  PpmCheckTime = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  v2 = 0;
  v7 = PpmCheckLastExecutionTime;
  v6 = v1;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_START) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v11 = 8LL;
      v10 = &v7;
      v13 = 4LL;
      v12 = &v6;
      EtwWriteEx(v3, &PPM_ETW_PERF_CHECK_START, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  if ( (unsigned __int64)PpmPerfDeadlineBoostExpiration >= MEMORY[0xFFFFF78000000008] )
    v2 = 1;
  if ( PpmCheckLatencyBoostActive != (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008]
    || PpmCheckDeadlineBoostActive != v2 )
  {
    PpmPerfSetAllDomainsToUpdate(PpmPerfDeadlineBoostExpiration);
    PpmCheckLatencyBoostActive = v5;
    PpmCheckDeadlineBoostActive = v2;
  }
  return PpmCheckRun();
}
