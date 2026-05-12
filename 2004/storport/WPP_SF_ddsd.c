/*
 * XREFs of WPP_SF_ddsd @ 0x1C00570E4
 * Callers:
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C001828C (RaidSelectDeviceDumpCollectionMode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_ddsd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_dee983de6f5935136af426d994ba468e_Traceguids);
}
