/*
 * XREFs of _EditionActivateMitInput@0 @ 0xEAE3C
 * Callers:
 *     <none>
 * Callees:
 *     _WaitForRitDisEngagement@0 @ 0xEAEA6 (_WaitForRitDisEngagement@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall EditionActivateMitInput()
{
  int v0; // esi

  _gbDITInHitTest = 1;
  IOCPDispatcher::RegisterThreadDispatcherObject(_gpIOCPDispatcher, ghDITEvent);
  v0 = WaitForRitDisEngagement();
  if ( v0 )
    _gbNoMoreDITHitTest = 0;
  if ( _gbDITInHitTest )
  {
    _gbDITInHitTest = 0;
    if ( _gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(_gpsemDITHitTestWaiters, 0, _gcDITHitTestWaiters, 0);
      _gcDITHitTestWaiters = 0;
    }
  }
  return v0;
}
