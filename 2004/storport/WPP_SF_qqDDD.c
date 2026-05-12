/*
 * XREFs of WPP_SF_qqDDD @ 0x1C004B468
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000C72C (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_315ac634f457316aea96af95ee1292c6_Traceguids);
}
