/*
 * XREFs of PopSleepstudyInitialize @ 0x140A42F8C
 * Callers:
 *     PopDiagSleepStudyInitialize @ 0x14078C580 (PopDiagSleepStudyInitialize.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x14035682C (KiInitializeTimer2.c)
 */

char PopSleepstudyInitialize()
{
  char *v0; // rbx
  LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF

  qword_140C1E6A8 = 0LL;
  PopSleepstudySessionLock = 0LL;
  v0 = (char *)&unk_140C1E398 + 96 * (unsigned int)dword_140C1E390;
  *(_DWORD *)v0 = 0;
  *((_DWORD *)v0 + 8) = 1;
  *((_QWORD *)v0 + 2) = RtlGetInterruptTimePrecise(&v2);
  stru_140C1E370.Parameter = 0LL;
  stru_140C1E370.List.Flink = 0LL;
  word_140C1E2EA = 0;
  stru_140C1E370.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1E2E8, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
