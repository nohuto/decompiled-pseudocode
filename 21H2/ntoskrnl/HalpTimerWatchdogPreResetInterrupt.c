/*
 * XREFs of HalpTimerWatchdogPreResetInterrupt @ 0x1404D4C10
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x14023D5A0 (KeQueryInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerWatchdogResetCountdown @ 0x140393BB0 (HalpTimerWatchdogResetCountdown.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char HalpTimerWatchdogPreResetInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  LARGE_INTEGER v4; // rax
  LARGE_INTEGER v6; // [rsp+50h] [rbp+18h] BYREF

  InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  if ( (unsigned __int64)HalpTimerWatchdogResetCount <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset < (unsigned __int64)HalpTimerWatchdogResetCount >> 1 )
    {
      BugCheckParameter4 = (unsigned int)KiClockTimerOwner;
      v4 = KeQueryInterruptTimePrecise(&v6);
      KeBugCheckEx(0x101u, v2, (unsigned __int64)HalpTimerWatchdogResetCount >> 1, v4.QuadPart, BugCheckParameter4);
    }
    HalpTimerWatchdogResetCountdown();
  }
  return 1;
}
