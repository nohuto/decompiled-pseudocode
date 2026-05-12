/*
 * XREFs of WPP_SF_qdd @ 0x1C0032068
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000C420 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids);
}
