/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x1409A4E38
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x1409A4F04 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 *     KeInitializeMutex @ 0x1402FF760 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C49A88 = 0LL;
  dword_140C49B74 = 0;
  dword_140C49B70 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C49B38, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C49A90, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C49AD0 = 0LL;
  qword_140C49AE0 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C49AE8 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&Timer, NotificationTimer);
  return KiSetTimerEx((__int64)&Timer, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C49A90);
}
