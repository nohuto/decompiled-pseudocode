/*
 * XREFs of __security_check_cookie @ 0x1C0002DE0
 * Callers:
 *     KeyboardStart @ 0x1C0002840 (KeyboardStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002E5C (__GSHandlerCheckCommon.c)
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004924 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KbdClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C000499C (KbdClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     KeyboardClassFindMorePorts @ 0x1C000D600 (KeyboardClassFindMorePorts.c)
 *     KbdCreateClassObject @ 0x1C000DF80 (KbdCreateClassObject.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000F5E0 (KeyboardClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
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
