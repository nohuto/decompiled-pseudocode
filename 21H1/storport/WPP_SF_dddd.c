/*
 * XREFs of WPP_SF_dddd @ 0x1C003C0E0
 * Callers:
 *     StorPortDeviceBusy @ 0x1C0037AE0 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
}
