/*
 * XREFs of KeSetCoalescableTimer @ 0x1402C8FA0
 * Callers:
 *     ExpTimerResume @ 0x14027B0FC (ExpTimerResume.c)
 *     CcRescheduleLazyWriteScan @ 0x1402C8DC4 (CcRescheduleLazyWriteScan.c)
 *     EtwpRequestFlushTimer @ 0x1402C8E5C (EtwpRequestFlushTimer.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1402C9538 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x1402CD1BC (PopFxArmResidentTimer.c)
 *     CmpArmLazyWriter @ 0x1402D7800 (CmpArmLazyWriter.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1402E43B8 (PopFxEnableWorkOrderWatchdog.c)
 *     CmpCompleteLazyWrite @ 0x140358DB4 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x14035BC10 (ExpTimerDpcRoutine.c)
 *     CcBcbProfiler @ 0x1403D8390 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1404FB4F8 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x14056EB94 (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x1405B1204 (ExpTimerAdjust.c)
 *     sub_1405C7010 @ 0x1405C7010 (sub_1405C7010.c)
 *     PiDrvDbUnloadNode @ 0x140697FB8 (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140709E00 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x140797760 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x1408965F4 (IopErrorLogQueueRequest.c)
 *     KiInitializeProcessor @ 0x14099B800 (KiInitializeProcessor.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F4148 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140A6FD18 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
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
