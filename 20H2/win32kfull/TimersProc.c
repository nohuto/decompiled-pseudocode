/*
 * XREFs of TimersProc @ 0x1C000A540
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 * Callees:
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C000A98C (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01EA884 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01EA934 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ThreadLockExchangeWorker @ 0x1C01EAB78 (ThreadLockExchangeWorker.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN TimersProc()
{
  unsigned int DLT; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  BOOLEAN result; // al
  _QWORD v4[11]; // [rsp+30h] [rbp-58h] BYREF

  v4[2] = 0LL;
  gbTimersProcActive = 1;
  gbRITAlerted = 0;
  DLT = DLT_HANDLEMANAGER::getDLT();
  GetDomainLockRef(DLT);
  do
  {
    gbRITRescan = 0;
    gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v4;
    v4[1] = 0LL;
    ThreadUnlockWorker1(gptiCurrent, v1, v2);
  }
  while ( gbRITRescan );
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  gbTimersProcActive = 0;
  return result;
}
