/*
 * XREFs of ExInitializeTimeRefresh @ 0x140A59540
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     KiInitializeTimer2 @ 0x1402676BC (KiInitializeTimer2.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     ZwLockProductActivationKeys @ 0x1403F5720 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x140793FD4 (ExGetExpirationDate.c)
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
  qword_140C194D8 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_140C194F8 = 0LL;
  qword_140C194E0 = (__int64)&ExpOkToTimeRefresh;
  qword_140C194D0 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_140C19382 = 0;
  KiInitializeTimer2((__int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v2[1] = -1LL;
  v2[0] = 0LL;
  ExpTimeRefreshInterval = -36000000000LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, v0, (__int64)v2);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_140C19538 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
