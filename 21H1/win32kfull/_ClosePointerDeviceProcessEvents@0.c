/*
 * XREFs of _ClosePointerDeviceProcessEvents@0 @ 0xD4B8E
 * Callers:
 *     _InitializePointerDevicesPresenceState@4 @ 0xEC964 (_InitializePointerDevicesPresenceState@4.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall ClosePointerDeviceProcessEvents()
{
  HANDLE result; // eax

  if ( ghPntrProcRunningEvent )
    NtClose(ghPntrProcRunningEvent);
  result = ghPntrProcRequestEvent;
  if ( ghPntrProcRequestEvent )
    return (HANDLE)NtClose(ghPntrProcRequestEvent);
  return result;
}
