/*
 * XREFs of KeSetCoalescableTimer @ 0x140247420
 * Callers:
 *     ExpTimerResume @ 0x14023CB7C (ExpTimerResume.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140246FB8 (PopFxScheduleDeviceIdleTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x14024724C (CcRescheduleLazyWriteScan.c)
 *     EtwpRequestFlushTimer @ 0x1402472E4 (EtwpRequestFlushTimer.c)
 *     PopFxArmResidentTimer @ 0x14030F13C (PopFxArmResidentTimer.c)
 *     CmpCompleteLazyWrite @ 0x140329210 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x14032C670 (ExpTimerDpcRoutine.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x14033D774 (PopFxEnableWorkOrderWatchdog.c)
 *     CmpArmLazyWriter @ 0x140343AF0 (CmpArmLazyWriter.c)
 *     CcBcbProfiler @ 0x1403DB020 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1404FEDCC (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x1405725C4 (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x1405B4D64 (ExpTimerAdjust.c)
 *     sub_1405CB010 @ 0x1405CB010 (sub_1405CB010.c)
 *     PiDrvDbUnloadNode @ 0x1406577B8 (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1406DC350 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x1407A6A90 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x14089C2A4 (IopErrorLogQueueRequest.c)
 *     KiInitializeProcessor @ 0x1409A1900 (KiInitializeProcessor.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F7784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409FA148 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140A1E354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140A76238 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v7 = 10000LL * TolerableDelay;
    if ( v7 > 0xFC0000 )
    {
      v9 = v7 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v10 = v9 + DueTime.LowPart;
        if ( (__int64)(v9 + DueTime.QuadPart) < DueTime.QuadPart )
          v10 = -1;
      }
      else
      {
        v10 = DueTime.LowPart - v9;
        if ( (__int64)(DueTime.QuadPart - v9) > DueTime.QuadPart )
          v10 = 0;
      }
      if ( Period )
      {
        v11 = -1;
        if ( Period + (int)v9 / 10000 >= Period )
          v11 = Period + (int)v9 / 10000;
        Period = v11;
      }
      LODWORD(v7) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v7 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
