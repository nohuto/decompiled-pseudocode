/*
 * XREFs of PopDiagInitialize @ 0x140A42B6C
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14076C8E0 (EtwSetInformation.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14077ACB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x14077F03C (PopDiagSleepStudyInitialize.c)
 *     PdcTaskClientRegister @ 0x140786574 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x140786610 (PopTransitionTelemetryOsState.c)
 */

__int64 PopDiagInitialize()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
  {
    PopDiagHandleRegistered = 1;
    EtwSetInformation(
      PopDiagHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
    (ULONGLONG *)&dword_140C021E8,
    (unsigned __int16 *)PopDiagTraceControlCallback,
    (unsigned __int16 *)&dword_140C021E8);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  PopDiagSleepStudyInitialize();
  qword_140C22B08 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_140C22B18 = MEMORY[0xFFFFF78000000014];
  qword_140C22B20 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140C22B4C = v1;
  qword_140C22B28 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PdcTaskClientRegister(v3, v2);
  return 0LL;
}
