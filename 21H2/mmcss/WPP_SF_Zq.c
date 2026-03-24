/*
 * XREFs of WPP_SF_Zq @ 0x1C00045C8
 * Callers:
 *     CiDispatchInitialize @ 0x1C000E050 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00031A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f2567f649f8e330a8ddb4ba7f0878bc2_Traceguids);
}
