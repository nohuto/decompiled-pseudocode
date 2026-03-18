/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x1409AAD98
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x1409AAE64 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x140360900 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C49AE8 = 0LL;
  dword_140C49BD4 = 0;
  dword_140C49BD0 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C49B98, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C49AF0, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C49B30 = 0LL;
  qword_140C49B40 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C49B48 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&Timer, NotificationTimer);
  return KiSetTimerEx((__int64)&Timer, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C49AF0);
}
