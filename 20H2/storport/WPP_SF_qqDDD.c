/*
 * XREFs of WPP_SF_qqDDD @ 0x1C004C278
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C0007234 (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids);
}
