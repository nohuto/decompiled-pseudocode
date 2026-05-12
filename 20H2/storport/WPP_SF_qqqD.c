/*
 * XREFs of WPP_SF_qqqD @ 0x1C0042518
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C00140A8 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids);
}
