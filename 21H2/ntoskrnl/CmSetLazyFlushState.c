/*
 * XREFs of CmSetLazyFlushState @ 0x1407FFF4C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     CmpDisableLazyFlush @ 0x14025E900 (CmpDisableLazyFlush.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x1403B63D0 (CmpEnableLazyFlush.c)
 */

void __fastcall CmSetLazyFlushState(char a1)
{
  int v1; // eax

  if ( a1 )
  {
    CmpDoIdleProcessing = CmpPrevIdleProcessingState;
    if ( CmpEnableLazyFlushTimerInitialized )
    {
      CmpDisableLazyFlush(1u);
      KiSetTimerEx((unsigned __int64)&CmpEnableLazyFlushTimer, -900000000LL, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
    }
    CmpEnableLazyFlush(4);
  }
  else
  {
    CmpDisableLazyFlush(4u);
    if ( CmpEnableLazyFlushTimerInitialized && (CmpHoldLazyFlush & 1) != 0 )
    {
      if ( KeCancelTimer(&CmpEnableLazyFlushTimer) )
        CmpEnableLazyFlush(1);
    }
    v1 = CmpDoIdleProcessing;
    CmpDoIdleProcessing = 0;
    CmpPrevIdleProcessingState = v1;
  }
}
