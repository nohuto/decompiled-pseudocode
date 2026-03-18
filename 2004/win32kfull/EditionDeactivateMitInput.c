/*
 * XREFs of EditionDeactivateMitInput @ 0x1C01035F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C010386C (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C0103990 (WakeRIT.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C0103A54 (MasterInputThreadPrepareForRitTakeover.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionDeactivateMitInput()
{
  __int64 result; // rax
  int v1; // edx
  int v2; // ecx
  unsigned int v3; // ebx

  result = EtwTraceDitShutdown();
  if ( gbDIT )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 4;
      WPP_RECORDER_SF_(v2, v1, 16, 10, (__int64)&WPP_3cb6299528b236cb5502aa74caef15e0_Traceguids);
    }
    gbDITInHitTest = 1;
    _InterlockedExchange(&glDitMouseHandling, 0);
    v3 = gdwDITWakeReason & 1 | 8;
    MasterInputThreadPrepareForRitTakeover();
    gbDIT = 0;
    if ( gbTouchInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
    if ( gpDitTouchInjectionDeviceInfo )
      HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
    if ( gbCompositionInputSinkQueryBlockedOnDIT )
      KeSetEvent((PRKEVENT)gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
    gdwInAtomicOperation = 0;
    gdwDeferWinEvent = 0;
    if ( gpIOCPDispatcher )
    {
      IOCPDispatcher::Close(gpIOCPDispatcher, 1);
      IOCPDispatcher_Destroy();
    }
    WakeRIT(v3);
    WaitForRitToCompleteLastCommand();
    gbDITInHitTest = 0;
    result = gcDITHitTestWaiters;
    if ( gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      result = gcDITHitTestWaiters;
      gcDITHitTestWaiters = 0;
    }
  }
  return result;
}
