/*
 * XREFs of RtlpHpScheduleCompaction @ 0x14025A1F4
 * Callers:
 *     RtlpHpSegLfhVsDecommit @ 0x140256360 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140259C20 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402CBF00 (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     ExSetTimer @ 0x140275960 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
