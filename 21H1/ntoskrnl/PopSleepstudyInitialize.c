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
  char *v0; // rbx
  LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF

  qword_140C1E7C8 = 0LL;
  PopSleepstudySessionLock = 0LL;
  v0 = (char *)&unk_140C1E4B8 + 96 * (unsigned int)dword_140C1E4B0;
  *(_DWORD *)v0 = 0;
  *((_DWORD *)v0 + 8) = 1;
  *((_QWORD *)v0 + 2) = RtlGetInterruptTimePrecise(&v2);
  stru_140C1E490.Parameter = 0LL;
  stru_140C1E490.List.Flink = 0LL;
  word_140C1E40A = 0;
  stru_140C1E490.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1E408, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
