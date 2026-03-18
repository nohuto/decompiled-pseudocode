/*
 * XREFs of CcInitializeTelemetry @ 0x140AF2E9C
 * Callers:
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 * Callees:
 *     KeInitializeTimer @ 0x14024C980 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled @ 0x140416F1C (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140811AB4 (CcSetTelemetryPeriodicTimer.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140908C90 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 */

void __fastcall CcInitializeTelemetry(int a1)
{
  if ( (unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled() )
  {
    if ( a1 == 1 )
    {
      memset(&CcTelemetryGlobalData, 0, 0x200uLL);
      KeQueryPerformanceCounter(&stru_140C49888);
      qword_140C49898 = MEMORY[0xFFFFF78000000014];
      qword_140C49890 = MEMORY[0xFFFFF78000000014];
      qword_140C498B0 = 864000000000LL;
      *(__m128i *)&DueTime.LowPart = _mm_load_si128((const __m128i *)&_xmm);
      if ( (unsigned int)CcDisableTelemetryRegKeyAtInit <= 1 )
        byte_140C498C1 = CcDisableTelemetryRegKeyAtInit != 0;
      stru_140C49A60.List.Flink = 0LL;
      stru_140C49A60.WorkerRoutine = (void (__fastcall *)(void *))CcTelemetryPeriodicTimerCallback;
      stru_140C49A60.Parameter = &stru_140C49A60;
      KeInitializeTimer(&Timer);
      KeInitializeDpc(&stru_140C499E0, (PKDEFERRED_ROUTINE)CcTelemetryPeriodicTimerDpc, 0LL);
      return;
    }
    TraceLoggingRegister_EtwRegister_EtwSetInformation((char *)&dword_140C02EE8);
    CcTelemetryGlobalData = 1;
  }
  else
  {
    memset(&CcTelemetryGlobalData, 0, 0x200uLL);
    KeQueryPerformanceCounter(&stru_140C49888);
    stru_140C49A60.List.Flink = 0LL;
    qword_140C49898 = MEMORY[0xFFFFF78000000014];
    qword_140C49890 = MEMORY[0xFFFFF78000000014];
    qword_140C498B0 = 864000000000LL;
    stru_140C49A60.WorkerRoutine = (void (__fastcall *)(void *))CcTelemetryPeriodicTimerCallback;
    stru_140C49A60.Parameter = &stru_140C49A60;
    CcTelemetryGlobalData = 1;
    *(__m128i *)&DueTime.LowPart = _mm_load_si128((const __m128i *)&_xmm);
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&stru_140C499E0, (PKDEFERRED_ROUTINE)CcTelemetryPeriodicTimerDpc, 0LL);
  }
  if ( !byte_140C498C1 )
    CcSetTelemetryPeriodicTimer((LARGE_INTEGER)-9000000000LL);
}
