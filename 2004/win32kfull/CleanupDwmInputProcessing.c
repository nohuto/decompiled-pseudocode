/*
 * XREFs of CleanupDwmInputProcessing @ 0x1C012A460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS CleanupDwmInputProcessing()
{
  NTSTATUS result; // eax

  result = CInputManager::DestroySessionGlobal();
  if ( gpkeDITTouchInjectionResponseEvent )
  {
    result = Win32FreePool(gpkeDITTouchInjectionResponseEvent);
    gpkeDITTouchInjectionResponseEvent = 0LL;
  }
  if ( ghDITEvent )
  {
    result = ZwClose(ghDITEvent);
    ghDITEvent = 0LL;
  }
  if ( ghDITRITEvent )
  {
    result = ZwClose(ghDITRITEvent);
    ghDITRITEvent = 0LL;
  }
  if ( gpkeDITMouseInjectionResponseEvent )
  {
    result = Win32FreePool(gpkeDITMouseInjectionResponseEvent);
    gpkeDITMouseInjectionResponseEvent = 0LL;
  }
  if ( gpkeDITCompositionInputSinkQueryResponseEvent )
  {
    result = Win32FreePool(gpkeDITCompositionInputSinkQueryResponseEvent);
    gpkeDITCompositionInputSinkQueryResponseEvent = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
  {
    result = Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  }
  if ( gpsemDITMouseInjectionWaiters )
  {
    result = Win32FreePool(gpsemDITMouseInjectionWaiters);
    gpsemDITMouseInjectionWaiters = 0LL;
  }
  return result;
}
