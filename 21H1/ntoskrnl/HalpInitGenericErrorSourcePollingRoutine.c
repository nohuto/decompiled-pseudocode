/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x1409A3FF8
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x1409A40C4 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeInitializeMutex @ 0x1402DEBB0 (KeInitializeMutex.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C49BE8 = 0LL;
  dword_140C49CD4 = 0;
  dword_140C49CD0 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C49C98, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C49BF0, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C49C30 = 0LL;
  qword_140C49C40 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C49C48 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&Timer, NotificationTimer);
  return KiSetTimerEx((__int64)&Timer, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C49BF0);
}
