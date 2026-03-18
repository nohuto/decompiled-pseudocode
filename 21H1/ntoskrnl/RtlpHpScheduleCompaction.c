/*
 * XREFs of RtlpHpScheduleCompaction @ 0x1402B3224
 * Callers:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402390D0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1402AF390 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402B2C50 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpScheduleCompaction(_QWORD *a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  ULONG_PTR v3; // rcx

  v1 = 0;
  if ( ExpHpGCInitialized )
  {
    if ( BYTE1(*a1) == 1 )
    {
      v2 = _InterlockedCompareExchange(&ExpHpGCScheduledNonPaged, 1, 0);
      v3 = ExpHpGCTimerNonPaged;
    }
    else
    {
      v2 = _InterlockedCompareExchange(&ExpHpGCScheduledPaged, 1, 0);
      v3 = ExpHpGCTimerPaged;
    }
    if ( !v2 )
      ExSetTimer(v3);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
