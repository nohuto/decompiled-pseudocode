/*
 * XREFs of _InitDwmInputProcessing@0 @ 0xEB9EA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall InitDwmInputProcessing()
{
  int v0; // ebx

  v0 = -1073741801;
  gpkeDITTouchInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1, 0);
  ghDITEvent = (HANDLE)hCreateKernelEvent(1, 0);
  ghDITRITEvent = (HANDLE)hCreateKernelEvent(1, 0);
  gpkeDITMouseInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1, 0);
  gpkeDITCompositionInputSinkQueryResponseEvent = (PRKEVENT)CreateKernelEvent(1, 0);
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)CreateKernelEvent(1, 0);
  _gcDITMouseInjectionWaiters = 0;
  _gpsemDITMouseInjectionWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( gpkeDITTouchInjectionResponseEvent
    && ghDITEvent
    && ghDITRITEvent
    && gpkeDITMouseInjectionResponseEvent
    && gpkeDITCompositionInputSinkQueryResponseEvent
    && WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink
    && _gpsemDITMouseInjectionWaiters )
  {
    return CInputManager::CreateSessionGlobal();
  }
  return v0;
}
