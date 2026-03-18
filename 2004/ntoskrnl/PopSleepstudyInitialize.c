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
  char *v0; // rbx
  LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF

  qword_140C1E5C8 = 0LL;
  PopSleepstudySessionLock = 0LL;
  v0 = (char *)&unk_140C1E2B8 + 96 * (unsigned int)dword_140C1E2B0;
  *(_DWORD *)v0 = 0;
  *((_DWORD *)v0 + 8) = 1;
  *((_QWORD *)v0 + 2) = RtlGetInterruptTimePrecise(&v2);
  stru_140C1E290.Parameter = 0LL;
  stru_140C1E290.List.Flink = 0LL;
  word_140C1E20A = 0;
  stru_140C1E290.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1E208, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
