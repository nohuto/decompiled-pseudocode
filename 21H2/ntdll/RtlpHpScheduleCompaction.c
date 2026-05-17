/*
 * XREFs of RtlpHpScheduleCompaction @ 0x180022DF8
 * Callers:
 *     RtlpHpSegLfhVsDecommit @ 0x1800206C0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 *     RtlpHpTlLogGCScheduled @ 0x18010B5F8 (RtlpHpTlLogGCScheduled.c)
 */

__int64 RtlpHpScheduleCompaction()
{
  unsigned int v0; // ebx

  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 && (v0 = 0, !byte_18016C508) && RtlpHpGCTimerInitialized )
  {
    if ( !_InterlockedCompareExchange(&RtlpHpGCTimerScheduled, 1, 0) )
    {
      TpSetTimerEx(RtlpHpGCTimer, (__int64)&RtlpHpGCInterval, 0, 5000);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogGCScheduled();
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v0;
}
