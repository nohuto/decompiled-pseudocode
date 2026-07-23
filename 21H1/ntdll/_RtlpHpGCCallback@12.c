/*
 * XREFs of _RtlpHpGCCallback@12 @ 0x4B358430
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 *     _RtlpHpTlLogGCTimerFinished@0 @ 0x4B3709B8 (_RtlpHpTlLogGCTimerFinished@0.c)
 */

void __stdcall RtlpHpGCCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpHpGCFlushCallback, 0, 0);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogGCTimerFinished();
  RtlpHpGCTimerScheduled = 0;
}
