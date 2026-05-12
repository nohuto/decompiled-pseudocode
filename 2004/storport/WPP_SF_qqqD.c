/*
 * XREFs of WPP_SF_qqqD @ 0x1C004160C
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C0012B48 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_e3909ed325cf3aaa071da1dbc70c911f_Traceguids);
}
