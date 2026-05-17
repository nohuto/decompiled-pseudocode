/*
 * XREFs of _RtlpHpGCCallback@12 @ 0x4B358430
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 *     _RtlpHpTlLogGCTimerFinished@0 @ 0x4B3709B8 (_RtlpHpTlLogGCTimerFinished@0.c)
 */

int __stdcall RtlpHpGCCallback(int a1, int a2, int a3)
{
  int result; // eax

  result = RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpHpGCFlushCallback, 0, 0);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    result = RtlpHpTlLogGCTimerFinished();
  RtlpHpGCTimerScheduled = 0;
  return result;
}
