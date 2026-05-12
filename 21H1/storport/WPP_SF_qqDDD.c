/*
 * XREFs of WPP_SF_qqDDD @ 0x1C004AD58
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000C13C (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_42fe1c4eb13a31e027d4a85af73a7d54_Traceguids);
}
