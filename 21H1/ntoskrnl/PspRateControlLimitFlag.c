/*
 * XREFs of PspRateControlLimitFlag @ 0x14066211C
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140612560 (PspEnforceLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRateControlLimitFlag(int a1)
{
  if ( !a1 )
    return 0x100000LL;
  if ( a1 == 1 )
    return 0x80000LL;
  return 0x40000LL;
}
