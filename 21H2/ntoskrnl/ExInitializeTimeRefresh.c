/*
 * XREFs of ExInitializeTimeRefresh @ 0x140A5B1EC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC50 (ExInitializeResourceLite.c)
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x1402E927C (KiInitializeTimer2.c)
 *     ZwLockProductActivationKeys @ 0x1403FC520 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x1407AA820 (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  __int64 v0; // r8
  __int64 *result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !ExpSystemSetupInProgress )
  {
    if ( (int)ExGetExpirationDate(&ExpNtExpirationDate) < 0 )
      ExpNtExpirationDate.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = ExpNtExpirationDate.QuadPart;
    ExpShuttingDown = 0;
  }
  LODWORD(ExpTimeRefreshDpc) = 275;
  qword_140C195F8 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_140C19618 = 0LL;
  qword_140C19600 = (__int64)&ExpOkToTimeRefresh;
  qword_140C195F0 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_140C19542 = 0;
  KiInitializeTimer2((__int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v2[1] = -1LL;
  v2[0] = 0LL;
  ExpTimeRefreshInterval = -36000000000LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, v0, (__int64)v2);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_140C19718 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
