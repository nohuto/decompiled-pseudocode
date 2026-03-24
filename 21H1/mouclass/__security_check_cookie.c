/*
 * XREFs of __security_check_cookie @ 0x1C0002950
 * Callers:
 *     MouseStart @ 0x1C0002730 (MouseStart.c)
 *     __GSHandlerCheckCommon @ 0x1C00029CC (__GSHandlerCheckCommon.c)
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C00041C8 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C0004240 (MouClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     MouseClassFindMorePorts @ 0x1C000C3F0 (MouseClassFindMorePorts.c)
 *     MouCreateClassObject @ 0x1C000CBA0 (MouCreateClassObject.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C000D100 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000E100 (MouseClassGetWaitWakeEnableState.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 *     DriverEntry @ 0x1C000F500 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
