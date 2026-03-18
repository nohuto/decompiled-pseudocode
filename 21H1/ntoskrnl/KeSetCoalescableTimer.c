/*
 * XREFs of KeSetCoalescableTimer @ 0x140236170
 * Callers:
 *     CcRescheduleLazyWriteScan @ 0x140235F94 (CcRescheduleLazyWriteScan.c)
 *     EtwpRequestFlushTimer @ 0x14023602C (EtwpRequestFlushTimer.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140236708 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x14023A38C (PopFxArmResidentTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1402D82A8 (PopFxEnableWorkOrderWatchdog.c)
 *     CmpArmLazyWriter @ 0x1402E4550 (CmpArmLazyWriter.c)
 *     ExpTimerResume @ 0x140315F8C (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x14031B304 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x14031E020 (ExpTimerDpcRoutine.c)
 *     CcBcbProfiler @ 0x1403D7550 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1404FAEA8 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x14056E544 (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x1405B0AE4 (ExpTimerAdjust.c)
 *     sub_1405C6010 @ 0x1405C6010 (sub_1405C6010.c)
 *     PiDrvDbUnloadNode @ 0x1405EEAB8 (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1406E6080 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x1407979B0 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x1408952D4 (IopErrorLogQueueRequest.c)
 *     KiInitializeProcessor @ 0x14099A064 (KiInitializeProcessor.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F4148 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140A6F2F4 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
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
