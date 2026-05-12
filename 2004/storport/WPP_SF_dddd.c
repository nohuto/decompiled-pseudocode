/*
 * XREFs of WPP_SF_dddd @ 0x1C003C6B0
 * Callers:
 *     StorPortDeviceBusy @ 0x1C0038060 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
}
