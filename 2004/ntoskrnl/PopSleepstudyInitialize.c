/*
 * XREFs of PopSleepstudyInitialize @ 0x140A3CCEC
 * Callers:
 *     PopDiagSleepStudyInitialize @ 0x14077F03C (PopDiagSleepStudyInitialize.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x1402676BC (KiInitializeTimer2.c)
 */

char PopSleepstudyInitialize()
{
  LARGE_INTEGER *v0; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  qword_140C1E5C8 = 0LL;
  PopSleepstudySessionLock = 0LL;
  v0 = (LARGE_INTEGER *)((char *)&unk_140C1E2B8 + 96 * (unsigned int)dword_140C1E2B0);
  v0->LowPart = 0;
  v0[4].LowPart = 1;
  v0[2] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  stru_140C1E290.Parameter = 0LL;
  stru_140C1E290.List.Flink = 0LL;
  word_140C1E20A = 0;
  stru_140C1E290.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1E208, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
