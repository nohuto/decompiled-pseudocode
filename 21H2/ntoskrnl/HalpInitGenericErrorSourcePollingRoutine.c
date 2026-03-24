/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7C68
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x1409A7D34 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x1402ED1A0 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C49C48 = 0LL;
  dword_140C49D34 = 0;
  dword_140C49D30 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C49CF8, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C49C50, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C49C90 = 0LL;
  qword_140C49CA0 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C49CA8 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&Timer, NotificationTimer);
  return KiSetTimerEx((__int64)&Timer, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C49C50);
}
