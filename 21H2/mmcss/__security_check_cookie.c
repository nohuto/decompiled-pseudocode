/*
 * XREFs of __security_check_cookie @ 0x1C0002FD0
 * Callers:
 *     CiSchedulerWait @ 0x1C00021A0 (CiSchedulerWait.c)
 *     __GSHandlerCheckCommon @ 0x1C000309C (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C0003C60 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003D4C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003DD0 (CiLogSchedulerWakeup.c)
 *     CiLogSetBufferingMode @ 0x1C0003E40 (CiLogSetBufferingMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0003EC4 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003F34 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0003FA4 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0004014 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C00040AC (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0004140 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0004294 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C0004330 (CiLogTurboEngaged.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C000A28C (wil_details_UpdateFeatureConfiguredStates.c)
 *     CiNdisThrottle @ 0x1C000A400 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B600 (CiCreateTaskIndexClientFromThread.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C000D108 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 *     CiConfigReadDWORD @ 0x1C000D1F0 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D960 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000DE80 (CiConfigQueryValue.c)
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
