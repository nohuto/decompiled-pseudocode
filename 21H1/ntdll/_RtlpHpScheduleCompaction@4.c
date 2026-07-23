/*
 * XREFs of _RtlpHpScheduleCompaction@4 @ 0x4B358965
 * Callers:
 *     _RtlpHpLfhSubsegmentDecommitPages@20 @ 0x4B37719A (_RtlpHpLfhSubsegmentDecommitPages@20.c)
 *     _RtlpHpSegLfhVsDecommit@12 @ 0x4B37BD60 (_RtlpHpSegLfhVsDecommit@12.c)
 *     _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F (_RtlpHpSegPageRangeCoalesce@20.c)
 * Callees:
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _RtlpHpTlLogGCScheduled@0 @ 0x4B370973 (_RtlpHpTlLogGCScheduled@0.c)
 */

int RtlpHpScheduleCompaction()
{
  int v0; // esi

  if ( (RtlpHpLfhPerfFlags & 0x40) == 0 || !RtlpHpGCTimerInitialized || byte_4B3A5DA8 )
    return -1073741822;
  v0 = 0;
  if ( !_InterlockedCompareExchange(&RtlpHpGCTimerScheduled, 1, 0) )
  {
    TpSetTimerEx(RtlpHpGCTimer, &RtlpHpGCInterval, 0, 0x1388u);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogGCScheduled();
  }
  return v0;
}
