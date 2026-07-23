/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x1409A8B98
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x1409A8C64 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeInitializeMutex @ 0x14029E4F0 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C49C88 = 0LL;
  dword_140C49D74 = 0;
  dword_140C49D70 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C49D38, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C49C90, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C49CD0 = 0LL;
  qword_140C49CE0 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C49CE8 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&Timer, NotificationTimer);
  return KiSetTimerEx((__int64)&Timer, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C49C90);
}
