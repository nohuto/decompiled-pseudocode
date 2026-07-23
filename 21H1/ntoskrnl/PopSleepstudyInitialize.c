/*
 * XREFs of PopSleepstudyInitialize @ 0x140A3D094
 * Callers:
 *     PopDiagSleepStudyInitialize @ 0x14077F84C (PopDiagSleepStudyInitialize.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x1402C06EC (KiInitializeTimer2.c)
 */

char PopSleepstudyInitialize()
{
  LARGE_INTEGER *v0; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  qword_140C1E7C8 = 0LL;
  PopSleepstudySessionLock = 0LL;
  v0 = (LARGE_INTEGER *)((char *)&unk_140C1E4B8 + 96 * (unsigned int)dword_140C1E4B0);
  v0->LowPart = 0;
  v0[4].LowPart = 1;
  v0[2] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  stru_140C1E490.Parameter = 0LL;
  stru_140C1E490.List.Flink = 0LL;
  word_140C1E40A = 0;
  stru_140C1E490.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1E408, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
