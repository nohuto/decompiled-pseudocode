/*
 * XREFs of __security_check_cookie @ 0x1C0003170
 * Callers:
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     __GSHandlerCheckCommon @ 0x1C000321C (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C0003F10 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003FFC (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0004080 (CiLogSchedulerWakeup.c)
 *     CiLogSetBufferingMode @ 0x1C00040F0 (CiLogSetBufferingMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004174 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C00041E4 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0004254 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C00042C4 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C000435C (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C00043F0 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0004544 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C00045E0 (CiLogTurboEngaged.c)
 *     CiNdisThrottle @ 0x1C000A0A0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000A380 (CiCreateTaskIndexClientFromThread.c)
 *     CiConfigReadDWORD @ 0x1C000D830 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D8D0 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000DE00 (CiConfigQueryValue.c)
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
