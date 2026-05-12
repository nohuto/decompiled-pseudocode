/*
 * XREFs of WPP_SF_qdd @ 0x1C0033468
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000B8D0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids);
}
