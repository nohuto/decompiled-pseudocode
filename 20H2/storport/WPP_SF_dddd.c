/*
 * XREFs of WPP_SF_dddd @ 0x1C003D5D4
 * Callers:
 *     StorPortDeviceBusy @ 0x1C0038ED0 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_42621249f2c9312d441c8bf8760aa631_Traceguids);
}
