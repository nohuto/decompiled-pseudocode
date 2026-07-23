/*
 * XREFs of KeSetCoalescableTimer @ 0x1402813E0
 * Callers:
 *     ExpTimerResume @ 0x140243E1C (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x140249230 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x14024C260 (ExpTimerDpcRoutine.c)
 *     EtwpRequestFlushTimer @ 0x140281350 (EtwpRequestFlushTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x140281A20 (CcRescheduleLazyWriteScan.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140281AB8 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x140283F8C (PopFxArmResidentTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140284D08 (PopFxEnableWorkOrderWatchdog.c)
 *     CmpArmLazyWriter @ 0x140362D90 (CmpArmLazyWriter.c)
 *     CcBcbProfiler @ 0x1403DBB00 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1405008D0 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x140574214 (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x1405B69C4 (ExpTimerAdjust.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x14061B0E4 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     PiDrvDbUnloadNode @ 0x140693F2C (PiDrvDbUnloadNode.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF9E0 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x1408999D4 (IopErrorLogQueueRequest.c)
 *     KiInitializeProcessor @ 0x1409A0104 (KiInitializeProcessor.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F5370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F5784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F8148 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140A1C354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140A741B8 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
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
