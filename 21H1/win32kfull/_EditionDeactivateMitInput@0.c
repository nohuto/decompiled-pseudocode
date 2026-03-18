/*
 * XREFs of _EditionDeactivateMitInput@0 @ 0xD3BD6
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WakeRIT@4 @ 0x9C542 (_WakeRIT@4.c)
 *     _MasterInputThreadPrepareForRitTakeover@0 @ 0xD3CB8 (_MasterInputThreadPrepareForRitTakeover@0.c)
 *     _WaitForRitToCompleteLastCommand@0 @ 0xEAEFA (_WaitForRitToCompleteLastCommand@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall EditionDeactivateMitInput()
{
  int result; // eax
  unsigned int v1; // edi

  result = EtwTraceDitShutdown();
  if ( gbDIT )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(16, 10, &WPP_3cb6299528b236cb5502aa74caef15e0_Traceguids);
    _gbDITInHitTest = 1;
    _InterlockedExchange(&glDitMouseHandling, 0);
    v1 = gdwDITWakeReason & 1 | 8;
    MasterInputThreadPrepareForRitTakeover();
    gbDIT = 0;
    if ( gbTouchInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
    if ( _gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
    if ( gpDitTouchInjectionDeviceInfo )
      HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
    if ( gbCompositionInputSinkQueryBlockedOnDIT )
      KeSetEvent(gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
    _gdwInAtomicOperation = 0;
    _gdwDeferWinEvent = 0;
    if ( _gpIOCPDispatcher )
    {
      IOCPDispatcher::Close(_gpIOCPDispatcher, 1);
      IOCPDispatcher_Destroy();
    }
    WakeRIT(v1);
    WaitForRitToCompleteLastCommand();
    _gbDITInHitTest = 0;
    result = _gcDITHitTestWaiters;
    if ( _gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(_gpsemDITHitTestWaiters, 0, _gcDITHitTestWaiters, 0);
      result = _gcDITHitTestWaiters;
      _gcDITHitTestWaiters = 0;
    }
  }
  return result;
}
