/*
 * XREFs of _CleanupDwmInputProcessing@0 @ 0xD45AA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
struct _LIST_ENTRY *__stdcall CleanupDwmInputProcessing()
{
  struct _LIST_ENTRY *result; // eax

  CInputManager::DestroySessionGlobal();
  if ( gpkeDITTouchInjectionResponseEvent )
  {
    Win32FreePool(gpkeDITTouchInjectionResponseEvent);
    gpkeDITTouchInjectionResponseEvent = 0;
  }
  if ( ghDITEvent )
  {
    ZwClose(ghDITEvent);
    ghDITEvent = 0;
  }
  if ( ghDITRITEvent )
  {
    ZwClose(ghDITRITEvent);
    ghDITRITEvent = 0;
  }
  if ( gpkeDITMouseInjectionResponseEvent )
  {
    Win32FreePool(gpkeDITMouseInjectionResponseEvent);
    gpkeDITMouseInjectionResponseEvent = 0;
  }
  if ( gpkeDITCompositionInputSinkQueryResponseEvent )
  {
    Win32FreePool(gpkeDITCompositionInputSinkQueryResponseEvent);
    gpkeDITCompositionInputSinkQueryResponseEvent = 0;
  }
  result = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
  {
    result = (struct _LIST_ENTRY *)Win32FreePool(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = 0;
  }
  if ( _gpsemDITMouseInjectionWaiters )
  {
    result = (struct _LIST_ENTRY *)Win32FreePool(_gpsemDITMouseInjectionWaiters);
    _gpsemDITMouseInjectionWaiters = 0;
  }
  return result;
}
