/*
 * XREFs of WPP_SF_qqqD @ 0x1C0040FDC
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C0010CD8 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids);
}
