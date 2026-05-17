/*
 * XREFs of RtlpHpGCCallback @ 0x180074160
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18007419C (RtlpEnumProcessHeaps.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x18010B2A4 (RtlpHpTlLogGCTimerFinished.c)
 */

__int64 RtlpHpGCCallback()
{
  __int64 result; // rax

  result = RtlpEnumProcessHeaps(RtlpHpGCFlushCallback, 0LL, 0LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    result = RtlpHpTlLogGCTimerFinished();
  RtlpHpGCTimerScheduled = 0;
  return result;
}
