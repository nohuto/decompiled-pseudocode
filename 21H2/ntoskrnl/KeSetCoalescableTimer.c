/*
 * XREFs of KeSetCoalescableTimer @ 0x1402E2C60
 * Callers:
 *     PopFxEnableWorkOrderWatchdog @ 0x14022EEF4 (PopFxEnableWorkOrderWatchdog.c)
 *     CcRescheduleLazyWriteScan @ 0x140248B24 (CcRescheduleLazyWriteScan.c)
 *     ExpTimerResume @ 0x14025383C (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x1402554D8 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x1402566A0 (ExpTimerDpcRoutine.c)
 *     CmpArmLazyWriter @ 0x1402A4320 (CmpArmLazyWriter.c)
 *     EtwpRequestFlushTimer @ 0x1402E1D48 (EtwpRequestFlushTimer.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14035489C (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x14035800C (PopFxArmResidentTimer.c)
 *     CcBcbProfiler @ 0x1403EAC70 (CcBcbProfiler.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x14053D99C (CcRescheduleLazyWriteScanOnVolume.c)
 *     IopEnableTimer @ 0x1405568E4 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x1405D4A94 (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x14063E084 (ExpTimerAdjust.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x1406DBDA0 (CcTelemetryPeriodicTimerCallback.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1406DFEB4 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     PiDrvDbUnloadNode @ 0x1407D4F98 (PiDrvDbUnloadNode.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140811AB4 (CcSetTelemetryPeriodicTimer.c)
 *     ExpWorkQueueManagerThread @ 0x14083ECE0 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x14093FB40 (IopErrorLogQueueRequest.c)
 *     KiApplyProcessorDpcLimits @ 0x140A59518 (KiApplyProcessorDpcLimits.c)
 *     AnFwProgressIndicatorTransition @ 0x140AAB5FC (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AAED7C (AnFwDisplayBackgroundUpdate.c)
 *     CcInitializeBcbProfiler @ 0x140AD6354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140B302E4 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v8 = 10000LL * TolerableDelay;
    if ( v8 > 0xFC0000 )
    {
      v9 = v8 - 16515072;
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
      LODWORD(v8) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v8 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
