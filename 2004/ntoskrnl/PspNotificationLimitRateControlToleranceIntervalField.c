/*
 * XREFs of PspNotificationLimitRateControlToleranceIntervalField @ 0x14061C954
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspNotificationLimitRateControlToleranceIntervalField(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      v2 = 56LL;
    else
      v2 = 36LL;
  }
  else
  {
    v2 = 64LL;
  }
  return a1 + v2;
}
