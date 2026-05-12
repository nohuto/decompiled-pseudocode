/*
 * XREFs of WPP_SF_qdd @ 0x1C00325E8
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000CA10 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_026814134b593ed6508f665f094ed446_Traceguids);
}
